<?php
/**
 * @file
 * ottawa_panelized_page_nav.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function ottawa_panelized_page_nav_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:toc_pan_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'toc_pan_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'cityott_two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'cityott_two_66_33_top' => NULL,
      'cityott_two_66_33_first' => NULL,
      'cityott_two_66_33_second' => NULL,
      'cityott_two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b33d1421-bf54-d384-e530-7f7d09753f54';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2a7caf8e-06b0-f7e4-0dcf-58b421696893';
    $pane->panel = 'cityott_two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_node_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'field_collection_fields',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2a7caf8e-06b0-f7e4-0dcf-58b421696893';
    $display->content['new-2a7caf8e-06b0-f7e4-0dcf-58b421696893'] = $pane;
    $display->panels['cityott_two_66_33_first'][0] = 'new-2a7caf8e-06b0-f7e4-0dcf-58b421696893';
    $pane = new stdClass();
    $pane->pid = 'new-5208cab3-6753-57c4-8904-e0fd468e58b1';
    $pane->panel = 'cityott_two_66_33_first';
    $pane->type = 'block';
    $pane->subtype = 'simple_toc-simple_toc';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:toc_pan_page:field_show_table_of_contents',
          'settings' => array(
            'field_show_table_of_contents' => array(
              'und' => array(
                0 => array(
                  'value' => 1,
                ),
              ),
            ),
            'field_show_table_of_contents_value' => '1',
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5208cab3-6753-57c4-8904-e0fd468e58b1';
    $display->content['new-5208cab3-6753-57c4-8904-e0fd468e58b1'] = $pane;
    $display->panels['cityott_two_66_33_first'][1] = 'new-5208cab3-6753-57c4-8904-e0fd468e58b1';
    $pane = new stdClass();
    $pane->pid = 'new-26cbe59c-05d2-5ea4-5587-2a06afaf4951';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26cbe59c-05d2-5ea4-5587-2a06afaf4951';
    $display->content['new-26cbe59c-05d2-5ea4-5587-2a06afaf4951'] = $pane;
    $display->panels['cityott_two_66_33_second'][0] = 'new-26cbe59c-05d2-5ea4-5587-2a06afaf4951';
    $pane = new stdClass();
    $pane->pid = 'new-1b759125-c2e9-96e4-f572-dd8faf8d7d81';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'archived_widget';
    $pane->subtype = 'archived_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'span_item' => 'span-6',
      'form_build_id' => 'form-hiQYfT1XpWTyfXNsbpoti1-elCtbsk7FzsHoUTp7DKQ',
      'form_token' => 'j1fpEEwv3lk2v030ropi4Wv5MqoqY_UYqbKPh7GkCUc',
      'form_id' => 'wetkit_wetboew_archived_widget_edit_form',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1b759125-c2e9-96e4-f572-dd8faf8d7d81';
    $display->content['new-1b759125-c2e9-96e4-f572-dd8faf8d7d81'] = $pane;
    $display->panels['cityott_two_66_33_second'][1] = 'new-1b759125-c2e9-96e4-f572-dd8faf8d7d81';
    $pane = new stdClass();
    $pane->pid = 'new-7f2d6ac7-59e6-9d04-611c-def2e6fc8cd1';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7f2d6ac7-59e6-9d04-611c-def2e6fc8cd1';
    $display->content['new-7f2d6ac7-59e6-9d04-611c-def2e6fc8cd1'] = $pane;
    $display->panels['cityott_two_66_33_second'][2] = 'new-7f2d6ac7-59e6-9d04-611c-def2e6fc8cd1';
    $pane = new stdClass();
    $pane->pid = 'new-db52ed76-711a-67c4-2560-e125f8985dae';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'db52ed76-711a-67c4-2560-e125f8985dae';
    $display->content['new-db52ed76-711a-67c4-2560-e125f8985dae'] = $pane;
    $display->panels['cityott_two_66_33_second'][3] = 'new-db52ed76-711a-67c4-2560-e125f8985dae';
    $pane = new stdClass();
    $pane->pid = 'new-70d6d1a3-6fa5-6044-7952-a80e15bb2561';
    $pane->panel = 'cityott_two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '70d6d1a3-6fa5-6044-7952-a80e15bb2561';
    $display->content['new-70d6d1a3-6fa5-6044-7952-a80e15bb2561'] = $pane;
    $display->panels['cityott_two_66_33_second'][4] = 'new-70d6d1a3-6fa5-6044-7952-a80e15bb2561';
    $pane = new stdClass();
    $pane->pid = 'new-ec79b8e0-6970-4494-8d31-1f704273ca48';
    $pane->panel = 'cityott_two_66_33_top';
    $pane->type = 'block';
    $pane->subtype = 'boxes-warningmessage';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec79b8e0-6970-4494-8d31-1f704273ca48';
    $display->content['new-ec79b8e0-6970-4494-8d31-1f704273ca48'] = $pane;
    $display->panels['cityott_two_66_33_top'][0] = 'new-ec79b8e0-6970-4494-8d31-1f704273ca48';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:toc_pan_page:default'] = $panelizer;

  return $export;
}
