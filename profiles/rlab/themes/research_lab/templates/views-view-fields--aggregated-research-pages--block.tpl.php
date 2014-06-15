<?php
  $node = node_load($row->nid);
  $items1 = array();
  $structure = array();
  // load highest level items
  foreach($node->field_group_1['und'] as $items1_ary) {
    $items1[] = $items1_ary['value'];
  }
  $fc_l1 = entity_load('field_collection_item', $items1);
  foreach ($fc_l1 as $entity1) {	
    // ALL LEVEL 1 LOGIC HERE
    $structure[$entity1->item_id]['title'] = $entity1->field_g1_tab_name['und'][0]['value'];
	if (!empty($entity1->field_g1_before_image)) {
	  $structure[$entity1->item_id]['before'] = $entity1->field_g1_before_image['und'][0];// This is BREAKING After I added fields---------------------------
	  $structure[$entity1->item_id]['after'] = $entity1->field_g1_after_image['und'][0];// This is BREAKINGI added fields ---------------------------
	}
	// DIG INTO LEVEL 2 LOGIC
    $items2 = array();
	if (!empty($entity1->field_group_2)) {
		foreach($entity1->field_group_2['und'] as $items2_ary) {
		  $items2[] = $items2_ary['value'];
		}
		$fc_l2 = entity_load('field_collection_item', $items2);
		foreach ($fc_l2 as $entity2) {
		  // ALL LEVEL 2 LOGIC HERE
		  // tab level two title
		  $structure[$entity1->item_id]['items'][$entity2->item_id]['title'] = $entity2->field_tab_name['und'][0]['value'];
		  if (!empty($entity2->field_g2_before_image)) {
			$structure[$entity1->item_id]['items'][$entity2->item_id]['before'] = $entity2->field_g2_before_image['und'][0];
			$structure[$entity1->item_id]['items'][$entity2->item_id]['after'] = $entity2->field_g2_after_image['und'][0];
		  }
		  // DIG INTO LEVEL 3 LOGIC
			$items3 = array();
			if (!empty($entity2->field_group_3)) {      
				foreach($entity2->field_group_3['und'] as $items3_ary) {
					$items3[] = $items3_ary['value'];
				} 
				$fc_l3 = entity_load('field_collection_item', $items3);
				foreach ($fc_l3 as $entity3) {
					// ALL LEVEL 3 LOGIC HERE
					$structure[$entity1->item_id]['items'][$entity2->item_id]['items'][$entity3->item_id]['title'] = $entity3->field_g3_tab_name['und'][0]['value'];
					$structure[$entity1->item_id]['items'][$entity2->item_id]['items'][$entity3->item_id]['before'] = $entity3->field_g3_before_image['und'][0];
					$structure[$entity1->item_id]['items'][$entity2->item_id]['items'][$entity3->item_id]['after'] = $entity3->field_g3_after_image['und'][0];
				}
			}
		}
	}
  }
//dpm($structure);
 //images level 1
 $output = array(
   '1' => array(),
   '2' => array(),
   '3' => array(),
   'images' => array(),
  );
foreach ($structure as $key1 => $level1) {    
    $output['1'][$key1]['title'] = $level1['title'];
	 $output['1'][$key1]['parent'] = 'ic-item-top';
	if (isset($level1['after'])) {
      $file = file_load($level1['after']['fid']);
      $url = file_create_url($file->uri);
      $output['images'][$key1]['after'] = $url;
	}
    if (isset($level1['before'])) {
      $file = file_load($level1['before']['fid']);
      $url = file_create_url($file->uri);
	  $output['images'][$key1]['before'] = $url;
	}
 //images level 2
  if (!empty($level1['items'])) {
	  foreach ($level1['items'] as $key2 => $level2) {
		 $output['2'][$key2]['title'] = $level2['title'];
		 $output['2'][$key2]['parent'] = 'ic-item-' . $key1;
		// todo if image exists add image
		if (isset($level2['after'])) {
		  $file = file_load($level2['after']['fid']);
		  $url = file_create_url($file->uri);
		  $output['images'][$key2]['after'] = $url;		  
		} 
		if (isset($level2['before'])) {
		  $file = file_load($level2['before']['fid']);
		  $url = file_create_url($file->uri);
		  $output['images'][$key2]['before'] = $url;
	    }
		//images level 3
		if (!empty($level2['items'])) {
			foreach ($level2['items'] as $key3 => $level3) {	  
				$output['3'][$key3]['title'] = $level3['title'];
				$output['3'][$key3]['parent'] = 'ic-item-' . $key2 . ' ic-item-' . $key1;
				if (isset($level3['after'])) {
				  $file = file_load($level3['after']['fid']);
				  $url = file_create_url($file->uri);
				  $output['images'][$key3]['after'] = $url;	
				}
				if (isset($level3['before'])) {
				  $file = file_load($level3['before']['fid']);
				  $url = file_create_url($file->uri);
				  $output['images'][$key3]['before'] = $url;
			    }
			}
		}
      }
	}
}
// output everything grouped based on level / identifier
print "<div class='ic-wrapper'>";
foreach ($output as $group_key => $group) {
	if ($group_key != 'images') {
		print "<ul class='ic-nav ic-group-". $group_key ."'>";
		foreach ($group as $key => $display) {
			 print '<li id="ic-item-'. $key . '" class="' . $display['parent'] .'">' . $display['title'] . '</li>';	
		}
		print '</ul>';
	}
}
print '<div class="ic-container ic-image-container">';
    print '<div id="after-image" class="ic-image-after ui-widget-content">';
	print '<div id="before-image" class="ic-image-before resizable ui-widget-content"></div>';
	print '</div>';
print '</div>';
print '</div>';
?>
<script language="javascript">
(function ($) {
	$(document).ready(function(){
	  <?php print 'Drupal.settings.ic_images=' . drupal_json_encode($output['images']) . ';'; ?>
	  $('.ic-group-1 li:first').click();
	});
}(jQuery));
</script>