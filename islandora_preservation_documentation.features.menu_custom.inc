<?php
/**
 * @file
 * islandora_preservation_documentation.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function islandora_preservation_documentation_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-preservation-documentation.
  $menus['menu-preservation-documentation'] = array(
    'menu_name' => 'menu-preservation-documentation',
    'title' => 'Preservation Documentation',
    'description' => 'A menu for the Islandora Preservation documentation.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu for the Islandora Preservation documentation.');
  t('Preservation Documentation');


  return $menus;
}
