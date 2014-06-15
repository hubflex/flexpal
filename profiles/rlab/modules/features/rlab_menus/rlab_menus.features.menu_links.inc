<?php
/**
 * @file
 * rlab_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rlab_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:by-design
  $menu_links['main-menu:by-design'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'by-design',
    'router_path' => 'by-design',
    'link_title' => 'By Design',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:node/1
  $menu_links['main-menu:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:node/2
  $menu_links['main-menu:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'The Issues',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/3
  $menu_links['main-menu:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Why Design',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:node/5
  $menu_links['main-menu:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-content-editor-menu:admin/content
  $menu_links['menu-content-editor-menu:admin/content'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'All Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-content-editor-menu:node/add/news-item
  $menu_links['menu-content-editor-menu:node/add/news-item'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'node/add/news-item',
    'router_path' => 'node/add/news-item',
    'link_title' => 'Add News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-content-editor-menu:node/add/poster
  $menu_links['menu-content-editor-menu:node/add/poster'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'node/add/poster',
    'router_path' => 'node/add/poster',
    'link_title' => 'Add Poster',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-content-editor-menu:node/add/research-project
  $menu_links['menu-content-editor-menu:node/add/research-project'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'node/add/research-project',
    'router_path' => 'node/add/research-project',
    'link_title' => 'Add Research Project',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-content-editor-menu:node/add/timeline-date
  $menu_links['menu-content-editor-menu:node/add/timeline-date'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'node/add/timeline-date',
    'router_path' => 'node/add/timeline-date',
    'link_title' => 'Add to Timeline',
    'options' => array(
      'attributes' => array(
        'title' => 'Add an event to the timeline.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-content-editor-menu:node/add/video-embed-node
  $menu_links['menu-content-editor-menu:node/add/video-embed-node'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'node/add/video-embed-node',
    'router_path' => 'node/add/video-embed-node',
    'link_title' => 'Add Video',
    'options' => array(
      'attributes' => array(
        'title' => 'Add videos to the site one at a time. If the video should accompany a description, use the Body field WYSIWYG.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-content-editor-menu:node/add/workshop
  $menu_links['menu-content-editor-menu:node/add/workshop'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'node/add/workshop',
    'router_path' => 'node/add/workshop',
    'link_title' => 'Add Workshop',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-page-editor-menu:admin/structure/menu/manage/menu-issues-menu
  $menu_links['menu-page-editor-menu:admin/structure/menu/manage/menu-issues-menu'] = array(
    'menu_name' => 'menu-page-editor-menu',
    'link_path' => 'admin/structure/menu/manage/menu-issues-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Issues Jump Links',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-page-editor-menu:node/1/edit
  $menu_links['menu-page-editor-menu:node/1/edit'] = array(
    'menu_name' => 'menu-page-editor-menu',
    'link_path' => 'node/1/edit',
    'router_path' => 'node/%/edit',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-page-editor-menu:node/2/edit
  $menu_links['menu-page-editor-menu:node/2/edit'] = array(
    'menu_name' => 'menu-page-editor-menu',
    'link_path' => 'node/2/edit',
    'router_path' => 'node/%/edit',
    'link_title' => 'Issues',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-page-editor-menu:node/3/edit
  $menu_links['menu-page-editor-menu:node/3/edit'] = array(
    'menu_name' => 'menu-page-editor-menu',
    'link_path' => 'node/3/edit',
    'router_path' => 'node/%/edit',
    'link_title' => 'Why Design',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-page-editor-menu:node/38/edit
  $menu_links['menu-page-editor-menu:node/38/edit'] = array(
    'menu_name' => 'menu-page-editor-menu',
    'link_path' => 'node/38/edit',
    'router_path' => 'node/%/edit',
    'link_title' => 'By Design Page',
    'options' => array(
      'query' => array(
        'destination' => 'by-design',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-page-editor-menu:node/5/edit
  $menu_links['menu-page-editor-menu:node/5/edit'] = array(
    'menu_name' => 'menu-page-editor-menu',
    'link_path' => 'node/5/edit',
    'router_path' => 'node/%/edit',
    'link_title' => 'Community Involvement',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-page-editor-menu:node/6/edit
  $menu_links['menu-page-editor-menu:node/6/edit'] = array(
    'menu_name' => 'menu-page-editor-menu',
    'link_path' => 'node/6/edit',
    'router_path' => 'node/%/edit',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add News');
  t('Add Poster');
  t('Add Research Project');
  t('Add Video');
  t('Add Workshop');
  t('Add to Timeline');
  t('All Content');
  t('By Design');
  t('By Design Page');
  t('Community');
  t('Community Involvement');
  t('Home');
  t('Issues');
  t('Issues Jump Links');
  t('People');
  t('The Issues');
  t('Why Design');


  return $menu_links;
}
