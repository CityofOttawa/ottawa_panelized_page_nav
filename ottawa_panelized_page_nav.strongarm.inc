<?php
/**
 * @file
 * ottawa_panelized_page_nav.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ottawa_panelized_page_nav_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__toc_pan_page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'diff_complete' => array(
        'custom_settings' => FALSE,
      ),
      'compendium' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '16',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'workflow' => array(
          'weight' => '11',
        ),
        'xmlsitemap' => array(
          'weight' => '19',
        ),
        'redirect' => array(
          'weight' => '19',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'compendium' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__toc_pan_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_toc_pan_page';
  $strongarm->value = '1';
  $export['i18n_node_extended_toc_pan_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_toc_pan_page';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_toc_pan_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_toc_pan_page';
  $strongarm->value = array(
    0 => 'field_cluster',
    1 => 'field_cluster_weight',
    2 => 'field_page_tags',
    3 => 'field_publish_on',
    4 => 'field_responsible',
    5 => 'field_review_by',
    6 => 'field_revised',
    7 => 'field_topic',
    8 => 'field_topic_weight',
    9 => 'field_update_last_revised',
  );
  $export['i18n_sync_node_type_toc_pan_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_toc_pan_page';
  $strongarm->value = '2';
  $export['language_content_type_toc_pan_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_toc_pan_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_toc_pan_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_toc_pan_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_toc_pan_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_toc_pan_page';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_toc_pan_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_toc_pan_page';
  $strongarm->value = '1';
  $export['node_preview_toc_pan_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_toc_pan_page';
  $strongarm->value = 0;
  $export['node_submitted_toc_pan_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_toc_pan_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'compendium' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'ical' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_toc_pan_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_toc_pan_page_en_pattern';
  $strongarm->value = '[node:gateway]/[node:topic]/[node:subtopic]/[node:title]';
  $export['pathauto_node_toc_pan_page_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_toc_pan_page_fr_pattern';
  $strongarm->value = '[node:gateway]/[node:topic]/[node:subtopic]/[node:title]';
  $export['pathauto_node_toc_pan_page_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_toc_pan_page_pattern';
  $strongarm->value = '[node:gateway]/[node:topic]/[node:subtopic]/[node:title]';
  $export['pathauto_node_toc_pan_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_toc_pan_page_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_toc_pan_page_und_pattern'] = $strongarm;

  return $export;
}
