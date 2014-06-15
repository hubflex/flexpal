<?php
/**
 * @file
 * rlab_styles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function rlab_styles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'community';
  $context->description = 'community-layout';
  $context->tag = 'community-layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community-involvement' => 'community-involvement',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'community_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('community-layout');
  $export['community'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = 'home-layout';
  $context->tag = 'home-layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'home_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('home-layout');
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'issues';
  $context->description = 'issues-layout';
  $context->tag = 'issues-layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'issues' => 'issues',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'issues_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('issues-layout');
  $export['issues'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'people';
  $context->description = 'people-layout';
  $context->tag = 'people-layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'people' => 'people',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'clone_of_home_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('people-layout');
  $export['people'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-research_for_node_page-block' => array(
          'module' => 'views',
          'delta' => 'research_for_node_page-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'why-design';
  $context->description = 'why-design-layout';
  $context->tag = 'why-design-layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'why-design' => 'why-design',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'home',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('why-design-layout');
  $export['why-design'] = $context;

  return $export;
}
