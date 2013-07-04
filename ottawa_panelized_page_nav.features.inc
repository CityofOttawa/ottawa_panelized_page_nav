<?php
/**
 * @file
 * ottawa_panelized_page_nav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ottawa_panelized_page_nav_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ottawa_panelized_page_nav_node_info() {
  $items = array(
    'toc_pan_page' => array(
      'name' => t('Panelized Page with Internal Navigation'),
      'base' => 'node_content',
      'description' => t('A panelized page that supports an internal page menu (table of contents).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
