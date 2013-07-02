<?php
/**
 * @file
 * panalized_page_with_internal_navigation_support.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panalized_page_with_internal_navigation_support_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function panalized_page_with_internal_navigation_support_node_info() {
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
