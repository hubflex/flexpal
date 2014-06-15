<?php
/**
 * @file
 * rlab_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rlab_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aggregated_research_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Aggregated Research Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'By Design';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Remove Filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_project_tag_term_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_location_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results Field';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No projects match your selection.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Body-2 */
  $handler->display->display_options['fields']['field_body_2']['id'] = 'field_body_2';
  $handler->display->display_options['fields']['field_body_2']['table'] = 'field_data_field_body_2';
  $handler->display->display_options['fields']['field_body_2']['field'] = 'field_body_2';
  $handler->display->display_options['fields']['field_body_2']['label'] = '';
  $handler->display->display_options['fields']['field_body_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body_2']['hide_empty'] = TRUE;
  /* Field: Content: Image-Slider */
  $handler->display->display_options['fields']['field_image_slider']['id'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_slider']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider']['delta_offset'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_project' => 'research_project',
  );
  /* Filter criterion: Content: Project Tag (field_project_tag_term) */
  $handler->display->display_options['filters']['field_project_tag_term_tid']['id'] = 'field_project_tag_term_tid';
  $handler->display->display_options['filters']['field_project_tag_term_tid']['table'] = 'field_data_field_project_tag_term';
  $handler->display->display_options['filters']['field_project_tag_term_tid']['field'] = 'field_project_tag_term_tid';
  $handler->display->display_options['filters']['field_project_tag_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_tag_term_tid']['expose']['operator_id'] = 'field_project_tag_term_tid_op';
  $handler->display->display_options['filters']['field_project_tag_term_tid']['expose']['label'] = 'Impact By Type';
  $handler->display->display_options['filters']['field_project_tag_term_tid']['expose']['operator'] = 'field_project_tag_term_tid_op';
  $handler->display->display_options['filters']['field_project_tag_term_tid']['expose']['identifier'] = 'field_project_tag_term_tid';
  $handler->display->display_options['filters']['field_project_tag_term_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_project_tag_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_project_tag_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_tag_term_tid']['vocabulary'] = 'research_tag';
  $handler->display->display_options['filters']['field_project_tag_term_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Location (field_location) */
  $handler->display->display_options['filters']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_tid']['expose']['operator_id'] = 'field_location_tid_op';
  $handler->display->display_options['filters']['field_location_tid']['expose']['label'] = 'Impact by Location';
  $handler->display->display_options['filters']['field_location_tid']['expose']['operator'] = 'field_location_tid_op';
  $handler->display->display_options['filters']['field_location_tid']['expose']['identifier'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_tid']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_location_tid']['group_info']['label'] = 'Location (field_location)';
  $handler->display->display_options['filters']['field_location_tid']['group_info']['identifier'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_location_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_tid']['vocabulary'] = 'research_location_tags';
  $handler->display->display_options['filters']['field_location_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_location_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'by-design';
  $handler->display->display_options['menu']['title'] = 'By Design';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['aggregated_research_pages'] = $view;

  $view = new view();
  $view->name = 'clone_of_content_chunk_assign_people_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Chunk Assign People Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content Chunk Assign Home Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Content Chunk Image */
  $handler->display->display_options['fields']['field_content_chunk_image']['id'] = 'field_content_chunk_image';
  $handler->display->display_options['fields']['field_content_chunk_image']['table'] = 'field_data_field_content_chunk_image';
  $handler->display->display_options['fields']['field_content_chunk_image']['field'] = 'field_content_chunk_image';
  $handler->display->display_options['fields']['field_content_chunk_image']['label'] = '';
  $handler->display->display_options['fields']['field_content_chunk_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_chunk_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_content_chunk_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_chunk_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Enable Banner Images */
  $handler->display->display_options['fields']['field_flex_slider_toggle']['id'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['table'] = 'field_data_field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['field'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['label'] = '';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_flex_slider_toggle']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_page_tags']['id'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['field'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['label'] = '';
  $handler->display->display_options['fields']['field_page_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_tags']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Display Order (field_display_order) */
  $handler->display->display_options['sorts']['field_display_order_value']['id'] = 'field_display_order_value';
  $handler->display->display_options['sorts']['field_display_order_value']['table'] = 'field_data_field_display_order';
  $handler->display->display_options['sorts']['field_display_order_value']['field'] = 'field_display_order_value';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['arguments']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['arguments']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['vocabularies'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['arguments']['field_page_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_tags_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    3 => '3',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    3 => '3',
  );
  $export['clone_of_content_chunk_assign_people_page'] = $view;

  $view = new view();
  $view->name = 'content_chuck_assign_issues_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Chuck Assign Community Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content Chunk Assign Community Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Content Chunk Image */
  $handler->display->display_options['fields']['field_content_chunk_image']['id'] = 'field_content_chunk_image';
  $handler->display->display_options['fields']['field_content_chunk_image']['table'] = 'field_data_field_content_chunk_image';
  $handler->display->display_options['fields']['field_content_chunk_image']['field'] = 'field_content_chunk_image';
  $handler->display->display_options['fields']['field_content_chunk_image']['label'] = '';
  $handler->display->display_options['fields']['field_content_chunk_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_chunk_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_content_chunk_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_chunk_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Enable Banner Images */
  $handler->display->display_options['fields']['field_flex_slider_toggle']['id'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['table'] = 'field_data_field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['field'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['label'] = '';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_flex_slider_toggle']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_page_tags']['id'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['field'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['label'] = '';
  $handler->display->display_options['fields']['field_page_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_tags']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Display Order (field_display_order) */
  $handler->display->display_options['sorts']['field_display_order_value']['id'] = 'field_display_order_value';
  $handler->display->display_options['sorts']['field_display_order_value']['table'] = 'field_data_field_display_order';
  $handler->display->display_options['sorts']['field_display_order_value']['field'] = 'field_display_order_value';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['arguments']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['arguments']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['vocabularies'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['arguments']['field_page_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_tags_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    3 => '3',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    7 => '7',
  );
  $export['content_chuck_assign_issues_page'] = $view;

  $view = new view();
  $view->name = 'content_chunk_assign_by_design_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Chunk Assign By Design Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Enable Banner Images */
  $handler->display->display_options['fields']['field_flex_slider_toggle']['id'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['table'] = 'field_data_field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['field'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['label'] = '';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_flex_slider_toggle']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_page_tags']['id'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['field'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['label'] = '';
  $handler->display->display_options['fields']['field_page_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_tags']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Display Order (field_display_order) */
  $handler->display->display_options['sorts']['field_display_order_value']['id'] = 'field_display_order_value';
  $handler->display->display_options['sorts']['field_display_order_value']['table'] = 'field_data_field_display_order';
  $handler->display->display_options['sorts']['field_display_order_value']['field'] = 'field_display_order_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    3 => '3',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    6 => '6',
  );
  $export['content_chunk_assign_by_design_page'] = $view;

  $view = new view();
  $view->name = 'content_chunk_assign_issues_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Chunk Assign Issues Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Enable Banner Images */
  $handler->display->display_options['fields']['field_flex_slider_toggle']['id'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['table'] = 'field_data_field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['field'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['label'] = '';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_flex_slider_toggle']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_page_tags']['id'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['field'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['label'] = '';
  $handler->display->display_options['fields']['field_page_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_tags']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Display Order (field_display_order) */
  $handler->display->display_options['sorts']['field_display_order_value']['id'] = 'field_display_order_value';
  $handler->display->display_options['sorts']['field_display_order_value']['table'] = 'field_data_field_display_order';
  $handler->display->display_options['sorts']['field_display_order_value']['field'] = 'field_display_order_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    3 => '3',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    4 => '4',
  );
  $export['content_chunk_assign_issues_page'] = $view;

  $view = new view();
  $view->name = 'content_chunk_assign_why_design_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Chunk Assign Why Design Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content Chunk Assign Home Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Content Chunk Image */
  $handler->display->display_options['fields']['field_content_chunk_image']['id'] = 'field_content_chunk_image';
  $handler->display->display_options['fields']['field_content_chunk_image']['table'] = 'field_data_field_content_chunk_image';
  $handler->display->display_options['fields']['field_content_chunk_image']['field'] = 'field_content_chunk_image';
  $handler->display->display_options['fields']['field_content_chunk_image']['label'] = '';
  $handler->display->display_options['fields']['field_content_chunk_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_chunk_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_content_chunk_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_chunk_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Enable Banner Images */
  $handler->display->display_options['fields']['field_flex_slider_toggle']['id'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['table'] = 'field_data_field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['field'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['label'] = '';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_flex_slider_toggle']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_page_tags']['id'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['field'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['label'] = '';
  $handler->display->display_options['fields']['field_page_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_tags']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Display Order (field_display_order) */
  $handler->display->display_options['sorts']['field_display_order_value']['id'] = 'field_display_order_value';
  $handler->display->display_options['sorts']['field_display_order_value']['table'] = 'field_data_field_display_order';
  $handler->display->display_options['sorts']['field_display_order_value']['field'] = 'field_display_order_value';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['arguments']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['arguments']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_page_tags_tid']['default_argument_options']['vocabularies'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['arguments']['field_page_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_tags_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    3 => '3',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    5 => '5',
  );
  $export['content_chunk_assign_why_design_page'] = $view;

  $view = new view();
  $view->name = 'content_chunk_assigner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Chunk Assign Home Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Content: Enable Banner Images */
  $handler->display->display_options['fields']['field_flex_slider_toggle']['id'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['table'] = 'field_data_field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['field'] = 'field_flex_slider_toggle';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['label'] = '';
  $handler->display->display_options['fields']['field_flex_slider_toggle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_flex_slider_toggle']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_page_tags']['id'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['field'] = 'field_page_tags';
  $handler->display->display_options['fields']['field_page_tags']['label'] = '';
  $handler->display->display_options['fields']['field_page_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_tags']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Display Order (field_display_order) */
  $handler->display->display_options['sorts']['field_display_order_value']['id'] = 'field_display_order_value';
  $handler->display->display_options['sorts']['field_display_order_value']['table'] = 'field_data_field_display_order';
  $handler->display->display_options['sorts']['field_display_order_value']['field'] = 'field_display_order_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    3 => '3',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_page_tags_tid']['id'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['table'] = 'field_data_field_page_tags';
  $handler->display->display_options['filters']['field_page_tags_tid']['field'] = 'field_page_tags_tid';
  $handler->display->display_options['filters']['field_page_tags_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_page_tags_tid']['value'] = array(
    2 => '2',
  );
  $export['content_chunk_assigner'] = $view;

  $view = new view();
  $view->name = 'content_image_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Image Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image_slider' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image_slider' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image-Slider */
  $handler->display->display_options['fields']['field_image_slider']['id'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['label'] = '';
  $handler->display->display_options['fields']['field_image_slider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_slider']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_image_slider']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Image-Slider (field_image_slider:fid) */
  $handler->display->display_options['filters']['field_image_slider_fid']['id'] = 'field_image_slider_fid';
  $handler->display->display_options['filters']['field_image_slider_fid']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['filters']['field_image_slider_fid']['field'] = 'field_image_slider_fid';
  $handler->display->display_options['filters']['field_image_slider_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_slider_fid']['value']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Image slider';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body-2 */
  $handler->display->display_options['fields']['field_body_2']['id'] = 'field_body_2';
  $handler->display->display_options['fields']['field_body_2']['table'] = 'field_data_field_body_2';
  $handler->display->display_options['fields']['field_body_2']['field'] = 'field_body_2';
  $handler->display->display_options['fields']['field_body_2']['label'] = '';
  $handler->display->display_options['fields']['field_body_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Body-2 (field_body_2) */
  $handler->display->display_options['filters']['field_body_2_value']['id'] = 'field_body_2_value';
  $handler->display->display_options['filters']['field_body_2_value']['table'] = 'field_data_field_body_2';
  $handler->display->display_options['filters']['field_body_2_value']['field'] = 'field_body_2_value';
  $handler->display->display_options['filters']['field_body_2_value']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Body2 block';
  $export['content_image_slider'] = $view;

  $view = new view();
  $view->name = 'full_banner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'full banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'full banner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'banner';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
    'body' => 0,
    'view_node' => 0,
    'title' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image' => 0,
    'body' => 0,
    'view_node' => 0,
    'title' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Banner Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_images']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Enable Banner Images (field_flex_slider_toggle) */
  $handler->display->display_options['filters']['field_flex_slider_toggle_value']['id'] = 'field_flex_slider_toggle_value';
  $handler->display->display_options['filters']['field_flex_slider_toggle_value']['table'] = 'field_data_field_flex_slider_toggle';
  $handler->display->display_options['filters']['field_flex_slider_toggle_value']['field'] = 'field_flex_slider_toggle_value';
  $handler->display->display_options['filters']['field_flex_slider_toggle_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['full_banner'] = $view;

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = '.read-more';
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_item' => 'news_item',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['news'] = $view;

  $view = new view();
  $view->name = 'page_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Page Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_assign_to_page_node']['id'] = 'reverse_field_assign_to_page_node';
  $handler->display->display_options['relationships']['reverse_field_assign_to_page_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_assign_to_page_node']['field'] = 'reverse_field_assign_to_page_node';
  $handler->display->display_options['relationships']['reverse_field_assign_to_page_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_assign_to_page_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['relationship'] = 'reverse_field_assign_to_page_node';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['page_videos'] = $view;

  $view = new view();
  $view->name = 'people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['style_options']['animated'] = 'easeInQuart';
  $handler->display->display_options['style_options']['disableifone'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'picture' => 'picture',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: User: About */
  $handler->display->display_options['fields']['field_about']['id'] = 'field_about';
  $handler->display->display_options['fields']['field_about']['table'] = 'field_data_field_about';
  $handler->display->display_options['fields']['field_about']['field'] = 'field_about';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'picture' => 'picture',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Picture */
  $handler->display->display_options['filters']['picture']['id'] = 'picture';
  $handler->display->display_options['filters']['picture']['table'] = 'users';
  $handler->display->display_options['filters']['picture']['field'] = 'picture';
  $handler->display->display_options['filters']['picture']['value'] = '1';
  /* Filter criterion: User: People Page Settings (field_show_in_people_page) */
  $handler->display->display_options['filters']['field_show_in_people_page_value']['id'] = 'field_show_in_people_page_value';
  $handler->display->display_options['filters']['field_show_in_people_page_value']['table'] = 'field_data_field_show_in_people_page';
  $handler->display->display_options['filters']['field_show_in_people_page_value']['field'] = 'field_show_in_people_page_value';
  $handler->display->display_options['filters']['field_show_in_people_page_value']['operator'] = 'and';
  $handler->display->display_options['filters']['field_show_in_people_page_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block: People Listing */
  $handler = $view->new_display('block', 'Block: People Listing', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'people-profile-list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'picture' => 'picture',
    'field_about' => 'field_about',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture_1']['id'] = 'picture_1';
  $handler->display->display_options['fields']['picture_1']['table'] = 'users';
  $handler->display->display_options['fields']['picture_1']['field'] = 'picture';
  $handler->display->display_options['fields']['picture_1']['label'] = '';
  $handler->display->display_options['fields']['picture_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture_1']['element_wrapper_class'] = 'profile-thumb';
  $handler->display->display_options['fields']['picture_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['picture_1']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture_1']['image_style'] = 'people-thumb';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture_2']['id'] = 'picture_2';
  $handler->display->display_options['fields']['picture_2']['table'] = 'users';
  $handler->display->display_options['fields']['picture_2']['field'] = 'picture';
  $handler->display->display_options['fields']['picture_2']['label'] = '';
  $handler->display->display_options['fields']['picture_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture_2']['element_wrapper_class'] = 'profile-thumb-gray';
  $handler->display->display_options['fields']['picture_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['picture_2']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture_2']['image_style'] = 'people-thumb-gray';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_wrapper_class'] = 'profile-large';
  $handler->display->display_options['fields']['picture']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'people-large';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: About */
  $handler->display->display_options['fields']['field_about']['id'] = 'field_about';
  $handler->display->display_options['fields']['field_about']['table'] = 'field_data_field_about';
  $handler->display->display_options['fields']['field_about']['field'] = 'field_about';
  $handler->display->display_options['fields']['field_about']['label'] = '';
  $handler->display->display_options['fields']['field_about']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_about']['alter']['text'] = '<p class="people-profile-body">[field_about]</p><div class="kill-profile"></div>';
  $handler->display->display_options['fields']['field_about']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_about']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Picture */
  $handler->display->display_options['filters']['picture']['id'] = 'picture';
  $handler->display->display_options['filters']['picture']['table'] = 'users';
  $handler->display->display_options['filters']['picture']['field'] = 'picture';
  $handler->display->display_options['filters']['picture']['value'] = '1';
  /* Filter criterion: User: People Page Settings (field_show_in_people_page) */
  $handler->display->display_options['filters']['field_show_in_people_page_value']['id'] = 'field_show_in_people_page_value';
  $handler->display->display_options['filters']['field_show_in_people_page_value']['table'] = 'field_data_field_show_in_people_page';
  $handler->display->display_options['filters']['field_show_in_people_page_value']['field'] = 'field_show_in_people_page_value';
  $handler->display->display_options['filters']['field_show_in_people_page_value']['operator'] = 'and';
  $handler->display->display_options['filters']['field_show_in_people_page_value']['value'] = array(
    1 => '1',
  );
  $export['people'] = $view;

  $view = new view();
  $view->name = 'posters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Posters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Posters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  /* Field: Content: poster_image */
  $handler->display->display_options['fields']['field_poster_image']['id'] = 'field_poster_image';
  $handler->display->display_options['fields']['field_poster_image']['table'] = 'field_data_field_poster_image';
  $handler->display->display_options['fields']['field_poster_image']['field'] = 'field_poster_image';
  $handler->display->display_options['fields']['field_poster_image']['label'] = '';
  $handler->display->display_options['fields']['field_poster_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_poster_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_poster_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_poster_image']['settings'] = array(
    'colorbox_node_style' => 'poster-list-thumb',
    'colorbox_image_style' => 'poster-full',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_poster_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_poster_image']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poster' => 'poster',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'posters';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['posters'] = $view;

  $view = new view();
  $view->name = 'research_for_node_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Research For Node Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'research_project' => 'research_project',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['research_for_node_page'] = $view;

  $view = new view();
  $view->name = 'timeline_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'timeline';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'timeline';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'timelinejs';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_timeline_date_position']['id'] = 'field_timeline_date_position';
  $handler->display->display_options['fields']['field_timeline_date_position']['table'] = 'field_data_field_timeline_date_position';
  $handler->display->display_options['fields']['field_timeline_date_position']['field'] = 'field_timeline_date_position';
  $handler->display->display_options['fields']['field_timeline_date_position']['label'] = '';
  $handler->display->display_options['fields']['field_timeline_date_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_timeline_date_position']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_timeline_image']['id'] = 'field_timeline_image';
  $handler->display->display_options['fields']['field_timeline_image']['table'] = 'field_data_field_timeline_image';
  $handler->display->display_options['fields']['field_timeline_image']['field'] = 'field_timeline_image';
  $handler->display->display_options['fields']['field_timeline_image']['label'] = '';
  $handler->display->display_options['fields']['field_timeline_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_timeline_image']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_timeline_sources']['id'] = 'field_timeline_sources';
  $handler->display->display_options['fields']['field_timeline_sources']['table'] = 'field_data_field_timeline_sources';
  $handler->display->display_options['fields']['field_timeline_sources']['field'] = 'field_timeline_sources';
  $handler->display->display_options['fields']['field_timeline_sources']['label'] = 'Source';
  $handler->display->display_options['fields']['field_timeline_sources']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'historical_event' => 'historical_event',
  );

  /* Display: <none> */
  $handler = $view->new_display('block', '<none>', 'block');
  $export['timeline_view'] = $view;

  $view = new view();
  $view->name = 'upcoming_workshops';
  $view->description = 'Shows Upcoming Workshops';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming Workshops';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Workshops';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'workshop' => 'workshop',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'workshops';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Workshop Date */
  $handler->display->display_options['fields']['field_workshop_date']['id'] = 'field_workshop_date';
  $handler->display->display_options['fields']['field_workshop_date']['table'] = 'field_data_field_workshop_date';
  $handler->display->display_options['fields']['field_workshop_date']['field'] = 'field_workshop_date';
  $handler->display->display_options['fields']['field_workshop_date']['label'] = '';
  $handler->display->display_options['fields']['field_workshop_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_workshop_date']['delta_offset'] = '0';
  $export['upcoming_workshops'] = $view;

  return $export;
}
