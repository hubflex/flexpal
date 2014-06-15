<?php
/**
 * @file
 * rlab_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function rlab_types_node_info() {
  $items = array(
    'content_chunk' => array(
      'name' => t('Content Chunk'),
      'base' => 'node_content',
      'description' => t('Use this template to add content to pages. Use the Page Tags to associate it with a page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news_item' => array(
      'name' => t('News Item'),
      'base' => 'node_content',
      'description' => t('This is a news item, which is news in relation to the site\'s overarching discourse.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'poster' => array(
      'name' => t('Poster'),
      'base' => 'node_content',
      'description' => t('Upload an image that is at minimum 400px wide by 518px high. You may upload larger resolution images, but they will crop to that aspect ratio and resize down, which can be done with better quality in Photoshop.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'research_project' => array(
      'name' => t('Research Project'),
      'base' => 'node_content',
      'description' => t('This is an individual research project contribution to Marcellus By Design.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rotating_media_slider' => array(
      'name' => t('Rotating Media Slider'),
      'base' => 'node_content',
      'description' => t('Add images, video, or html to a rotating media slider'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video_embed_node' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'workshop' => array(
      'name' => t('Workshop'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
