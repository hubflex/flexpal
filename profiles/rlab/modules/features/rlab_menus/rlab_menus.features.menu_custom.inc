<?php
/**
 * @file
 * rlab_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function rlab_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-content-editor-menu.
  $menus['menu-content-editor-menu'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'title' => 'Site Editor Menu',
    'description' => 'Use this menu to add content site-wide.',
  );
  // Exported menu: menu-issues-menu.
  $menus['menu-issues-menu'] = array(
    'menu_name' => 'menu-issues-menu',
    'title' => 'Issues Menu',
    'description' => '',
  );
  // Exported menu: menu-main-navigation-menu.
  $menus['menu-main-navigation-menu'] = array(
    'menu_name' => 'menu-main-navigation-menu',
    'title' => 'Main Navigation Menu',
    'description' => '',
  );
  // Exported menu: menu-page-editor-menu.
  $menus['menu-page-editor-menu'] = array(
    'menu_name' => 'menu-page-editor-menu',
    'title' => 'Page Editor Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Issues Menu');
  t('Main Navigation Menu');
  t('Main menu');
  t('Page Editor Menu');
  t('Site Editor Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Use this menu to add content site-wide.');


  return $menus;
}
