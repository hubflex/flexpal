<?php
/**
 * @file
 * rlab_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rlab_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['delta_blocks-messages'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'messages',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-27',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['delta_blocks-page-title'] = array(
    'cache' => 4,
    'custom' => '0',
    'delta' => 'page-title',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => 'home',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'banner',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-17',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['menu-menu-content-editor-menu'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'menu-content-editor-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'site editor' => '4',
    ),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'user_first',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['menu-menu-page-editor-menu'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'menu-page-editor-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'research_lab',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '1',
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'menu',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['menu_block-3'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '3',
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'footer_first',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-26',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['menu_block-4'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '4',
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'user_first',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Page Editor Menu',
    'visibility' => '0',
  );

  $export['nodeblock-38'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => '38',
    'module' => 'nodeblock',
    'node_types' => array(),
    'pages' => 'by-design',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-30',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '1',
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => 'help',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-26',
      ),
      'seven' => array(
        'region' => 'help',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-28',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-content_image_slider-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'content_image_slider-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-25',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-content_image_slider-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'content_image_slider-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-24',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-full_banner-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'full_banner-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'banner',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-18',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['views-news-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'news-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'home',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'footer_second',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-page_videos-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'page_videos-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-23',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-people-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'people-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'people',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-22',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-posters-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'posters-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community-involvement',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-15',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Poster Series',
    'visibility' => '1',
  );

  $export['views-timeline-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'timeline-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'issues',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'header_first',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '1',
  );

  $export['views-upcoming_workshops-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'upcoming_workshops-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community-involvement',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '-16',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Upcoming Workshops',
    'visibility' => '1',
  );

  $export['webform-client-block-18'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'client-block-18',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => 'people',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => '0',
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'research_lab' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'research_lab',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Get In Touch',
    'visibility' => '1',
  );

  return $export;
}
