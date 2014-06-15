<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function research_lab_preprocess_page(&$variables) {
  drupal_add_library('system', 'ui');
  drupal_add_library('system', 'ui.resizable');
  drupal_add_js(drupal_get_path('theme', 'research_lab') .'/js/image-compare.js', array('scope' => 'footer', 'weight' => 10, 'group' => JS_THEME));
  drupal_add_js(drupal_get_path('theme', 'research_lab') .'/js/profile-list.js', array('scope' => 'header', 'weight' => 10, 'group' => JS_THEME));
  drupal_add_js(drupal_get_path('theme', 'research_lab') .'/js/jquery.ui.touch-punch.min.js', array('scope' => 'header', 'weight' => 10, 'group' => JS_THEME));
}