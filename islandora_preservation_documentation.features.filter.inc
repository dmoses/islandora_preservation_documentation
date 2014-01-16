<?php
/**
 * @file
 * islandora_preservation_documentation.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function islandora_preservation_documentation_filter_default_formats() {
  $formats = array();

  // Exported format: Markdown Support.
  $formats['markdown'] = array(
    'format' => 'markdown',
    'name' => 'Markdown Support',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_markdown' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
