<?php
/**
 * @file
 * islandora_preservation_documentation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function islandora_preservation_documentation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-preservation-documentation_policies:<front>
  $menu_links['menu-preservation-documentation_policies:<front>'] = array(
    'menu_name' => 'menu-preservation-documentation',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-preservation-documentation_policies:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-preservation-documentation_preservation-action-plans:<front>
  $menu_links['menu-preservation-documentation_preservation-action-plans:<front>'] = array(
    'menu_name' => 'menu-preservation-documentation',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Preservation Action Plans',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-preservation-documentation_preservation-action-plans:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-preservation-documentation_preservation-documentation:<front>
  $menu_links['menu-preservation-documentation_preservation-documentation:<front>'] = array(
    'menu_name' => 'menu-preservation-documentation',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Preservation Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-preservation-documentation_preservation-documentation:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Policies');
  t('Preservation Action Plans');
  t('Preservation Documentation');


  return $menu_links;
}
