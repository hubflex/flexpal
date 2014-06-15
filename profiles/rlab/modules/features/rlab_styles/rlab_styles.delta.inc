<?php
/**
 * @file
 * rlab_styles.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function rlab_styles_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'clone_of_home_layout';
  $delta->name = 'people-layout';
  $delta->description = 'This is a layout for the people page';
  $delta->theme = 'research_lab';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_research_lab_settings' => array(
      'alpha_region_content_columns' => '16',
      'alpha_region_content_suffix' => '0',
      'alpha_region_sidebar_second_zone' => 'content',
      'alpha_region_sidebar_second_columns' => '7',
      'alpha_region_sidebar_second_equal_height_element' => 0,
    ),
    'color_research_lab_files' => NULL,
    'color_research_lab_logo' => NULL,
    'color_research_lab_palette' => NULL,
    'color_research_lab_stylesheets' => NULL,
    'color_research_lab_screenshot' => NULL,
  );
  $export['clone_of_home_layout'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'community_layout';
  $delta->name = 'community-layout';
  $delta->description = 'This is a layout for the community page';
  $delta->theme = 'research_lab';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_research_lab_settings' => array(
      'alpha_region_content_prefix' => '0',
      'alpha_region_content_columns' => '16',
      'alpha_region_content_suffix' => '0',
      'alpha_region_sidebar_second_zone' => 'content',
      'alpha_region_sidebar_second_columns' => '8',
      'alpha_region_sidebar_second_equal_height_element' => 0,
    ),
    'color_research_lab_files' => NULL,
    'color_research_lab_logo' => NULL,
    'color_research_lab_palette' => NULL,
    'color_research_lab_stylesheets' => NULL,
    'color_research_lab_screenshot' => NULL,
  );
  $export['community_layout'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'home_layout';
  $delta->name = 'home-layout';
  $delta->description = 'This is a layout for the home page';
  $delta->theme = 'research_lab';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_research_lab_settings' => array(
      'alpha_region_sidebar_second_columns' => '7',
      'alpha_region_content_prefix' => '2',
      'alpha_region_content_columns' => '20',
      'alpha_region_content_suffix' => '2',
    ),
    'color_research_lab_files' => NULL,
    'color_research_lab_logo' => NULL,
    'color_research_lab_palette' => NULL,
    'color_research_lab_stylesheets' => NULL,
    'color_research_lab_screenshot' => NULL,
  );
  $export['home_layout'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'issues_layout';
  $delta->name = 'issues-layout';
  $delta->description = 'This is a layout for the community page';
  $delta->theme = 'research_lab';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_research_lab_settings' => array(
      'alpha_region_sidebar_first_columns' => '4',
      'alpha_region_header_second_zone' => NULL,
      'alpha_region_header_second_equal_height_element' => FALSE,
      'alpha_region_sidebar_second_columns' => '8',
      'alpha_region_header_first_columns' => '24',
      'alpha_region_content_prefix' => '0',
      'alpha_region_content_columns' => '24',
      'alpha_region_content_suffix' => '0',
    ),
    'color_research_lab_files' => NULL,
    'color_research_lab_logo' => NULL,
    'color_research_lab_palette' => NULL,
    'color_research_lab_stylesheets' => NULL,
    'color_research_lab_screenshot' => NULL,
  );
  $export['issues_layout'] = $delta;

  return $export;
}
