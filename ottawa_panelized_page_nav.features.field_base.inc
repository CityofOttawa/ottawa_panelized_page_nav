<?php
/**
 * @file
 * ottawa_panelized_page_nav.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ottawa_panelized_page_nav_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_show_table_of_contents'
  $field_bases['field_show_table_of_contents'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_show_table_of_contents',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
