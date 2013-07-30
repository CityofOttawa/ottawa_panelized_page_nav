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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b33d1421-bf54-d384-e530-7f7d09753f54';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-70d6d1a3-6fa5-6044-7952-a80e15bb2561';
    $pane->panel = 'center';
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '70d6d1a3-6fa5-6044-7952-a80e15bb2561';
    $display->content['new-70d6d1a3-6fa5-6044-7952-a80e15bb2561'] = $pane;
    $display->panels['center'][0] = 'new-70d6d1a3-6fa5-6044-7952-a80e15bb2561';
    $pane = new stdClass();
    $pane->pid = 'new-52e961e6-c236-9fd4-59d8-f4dd21e1192a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_revised';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52e961e6-c236-9fd4-59d8-f4dd21e1192a';
    $display->content['new-52e961e6-c236-9fd4-59d8-f4dd21e1192a'] = $pane;
    $display->panels['center'][1] = 'new-52e961e6-c236-9fd4-59d8-f4dd21e1192a';
    $pane = new stdClass();
    $pane->pid = 'new-2a7caf8e-06b0-f7e4-0dcf-58b421696893';
    $pane->panel = 'center';
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2a7caf8e-06b0-f7e4-0dcf-58b421696893';
    $display->content['new-2a7caf8e-06b0-f7e4-0dcf-58b421696893'] = $pane;
    $display->panels['center'][2] = 'new-2a7caf8e-06b0-f7e4-0dcf-58b421696893';
    $pane = new stdClass();
    $pane->pid = 'new-368a4541-b288-4004-71bf-dc7bd4180f8d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '368a4541-b288-4004-71bf-dc7bd4180f8d';
    $display->content['new-368a4541-b288-4004-71bf-dc7bd4180f8d'] = $pane;
    $display->panels['center'][3] = 'new-368a4541-b288-4004-71bf-dc7bd4180f8d';
    $pane = new stdClass();
    $pane->pid = 'new-ac0ab281-a359-e0a4-add1-d3b8356c4163';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_legacy_permalink';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ac0ab281-a359-e0a4-add1-d3b8356c4163';
    $display->content['new-ac0ab281-a359-e0a4-add1-d3b8356c4163'] = $pane;
    $display->panels['center'][4] = 'new-ac0ab281-a359-e0a4-add1-d3b8356c4163';
    $pane = new stdClass();
    $pane->pid = 'new-61ac623d-cf9f-bd44-0176-7b24c3ba320e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_legacy_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61ac623d-cf9f-bd44-0176-7b24c3ba320e';
    $display->content['new-61ac623d-cf9f-bd44-0176-7b24c3ba320e'] = $pane;
    $display->panels['center'][5] = 'new-61ac623d-cf9f-bd44-0176-7b24c3ba320e';
    $pane = new stdClass();
    $pane->pid = 'new-e3b3f8e3-95aa-a344-ada6-f9362e1e8931';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_legacy_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e3b3f8e3-95aa-a344-ada6-f9362e1e8931';
    $display->content['new-e3b3f8e3-95aa-a344-ada6-f9362e1e8931'] = $pane;
    $display->panels['center'][6] = 'new-e3b3f8e3-95aa-a344-ada6-f9362e1e8931';
    $pane = new stdClass();
    $pane->pid = 'new-f917a54b-49b4-9464-ed40-5319b2e45d64';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_legacy_neighbourhood';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f917a54b-49b4-9464-ed40-5319b2e45d64';
    $display->content['new-f917a54b-49b4-9464-ed40-5319b2e45d64'] = $pane;
    $display->panels['center'][7] = 'new-f917a54b-49b4-9464-ed40-5319b2e45d64';
    $pane = new stdClass();
    $pane->pid = 'new-f934d7bf-48a4-b544-c16d-c9e0b62cf16a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_legacy_seasonal';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f934d7bf-48a4-b544-c16d-c9e0b62cf16a';
    $display->content['new-f934d7bf-48a4-b544-c16d-c9e0b62cf16a'] = $pane;
    $display->panels['center'][8] = 'new-f934d7bf-48a4-b544-c16d-c9e0b62cf16a';
    $pane = new stdClass();
    $pane->pid = 'new-751729a2-9234-fb04-a9de-0e9e4484ea5a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_legacy_books';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '751729a2-9234-fb04-a9de-0e9e4484ea5a';
    $display->content['new-751729a2-9234-fb04-a9de-0e9e4484ea5a'] = $pane;
    $display->panels['center'][9] = 'new-751729a2-9234-fb04-a9de-0e9e4484ea5a';
    $pane = new stdClass();
    $pane->pid = 'new-3be16aff-f680-9a34-1d44-1155d485bf92';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_file_attachments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3be16aff-f680-9a34-1d44-1155d485bf92';
    $display->content['new-3be16aff-f680-9a34-1d44-1155d485bf92'] = $pane;
    $display->panels['center'][10] = 'new-3be16aff-f680-9a34-1d44-1155d485bf92';
    $pane = new stdClass();
    $pane->pid = 'new-11762ebe-0a1d-3f84-c14f-24155bc65833';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topic_weight';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'decimal_separator' => '.',
        'prefix_suffix' => TRUE,
        'scale' => 0,
        'thousand_separator' => ' ',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '11762ebe-0a1d-3f84-c14f-24155bc65833';
    $display->content['new-11762ebe-0a1d-3f84-c14f-24155bc65833'] = $pane;
    $display->panels['center'][11] = 'new-11762ebe-0a1d-3f84-c14f-24155bc65833';
    $pane = new stdClass();
    $pane->pid = 'new-c3f7230f-c6f5-a764-71d9-d61830bc6891';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cluster_weight';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'decimal_separator' => '.',
        'prefix_suffix' => TRUE,
        'scale' => 0,
        'thousand_separator' => ' ',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3f7230f-c6f5-a764-71d9-d61830bc6891';
    $display->content['new-c3f7230f-c6f5-a764-71d9-d61830bc6891'] = $pane;
    $display->panels['center'][12] = 'new-c3f7230f-c6f5-a764-71d9-d61830bc6891';
    $pane = new stdClass();
    $pane->pid = 'new-f01560c1-0b84-f804-95ec-d40c72281018';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_legacy_source_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f01560c1-0b84-f804-95ec-d40c72281018';
    $display->content['new-f01560c1-0b84-f804-95ec-d40c72281018'] = $pane;
    $display->panels['center'][13] = 'new-f01560c1-0b84-f804-95ec-d40c72281018';
    $pane = new stdClass();
    $pane->pid = 'new-499f068d-4dd3-8964-4dd0-93feca6719f5';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_issues';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '499f068d-4dd3-8964-4dd0-93feca6719f5';
    $display->content['new-499f068d-4dd3-8964-4dd0-93feca6719f5'] = $pane;
    $display->panels['center'][14] = 'new-499f068d-4dd3-8964-4dd0-93feca6719f5';
    $pane = new stdClass();
    $pane->pid = 'new-7fd4bd55-3d33-54f4-0d3e-147763dd527c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_issues_severity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7fd4bd55-3d33-54f4-0d3e-147763dd527c';
    $display->content['new-7fd4bd55-3d33-54f4-0d3e-147763dd527c'] = $pane;
    $display->panels['center'][15] = 'new-7fd4bd55-3d33-54f4-0d3e-147763dd527c';
    $pane = new stdClass();
    $pane->pid = 'new-20948743-4275-a7c4-790f-6ab315f40066';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_page_issues_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '20948743-4275-a7c4-790f-6ab315f40066';
    $display->content['new-20948743-4275-a7c4-790f-6ab315f40066'] = $pane;
    $display->panels['center'][16] = 'new-20948743-4275-a7c4-790f-6ab315f40066';
    $pane = new stdClass();
    $pane->pid = 'new-d6f5ae25-0062-da34-c531-b5a8466c66ae';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_by';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd6f5ae25-0062-da34-c531-b5a8466c66ae';
    $display->content['new-d6f5ae25-0062-da34-c531-b5a8466c66ae'] = $pane;
    $display->panels['center'][17] = 'new-d6f5ae25-0062-da34-c531-b5a8466c66ae';
    $pane = new stdClass();
    $pane->pid = 'new-3bf95b93-801d-f944-01f5-e894318790e3';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_publish_on';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3bf95b93-801d-f944-01f5-e894318790e3';
    $display->content['new-3bf95b93-801d-f944-01f5-e894318790e3'] = $pane;
    $display->panels['center'][18] = 'new-3bf95b93-801d-f944-01f5-e894318790e3';
    $pane = new stdClass();
    $pane->pid = 'new-36983f8f-d437-a834-010f-e30691a07590';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_archived_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '36983f8f-d437-a834-010f-e30691a07590';
    $display->content['new-36983f8f-d437-a834-010f-e30691a07590'] = $pane;
    $display->panels['center'][19] = 'new-36983f8f-d437-a834-010f-e30691a07590';
    $pane = new stdClass();
    $pane->pid = 'new-86ee8322-9b54-c164-d528-ed80365b806a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_show_table_of_contents';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '86ee8322-9b54-c164-d528-ed80365b806a';
    $display->content['new-86ee8322-9b54-c164-d528-ed80365b806a'] = $pane;
    $display->panels['center'][20] = 'new-86ee8322-9b54-c164-d528-ed80365b806a';
    $pane = new stdClass();
    $pane->pid = 'new-f3283a9e-86a0-ab74-6939-0d36a11e6843';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_abstract';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f3283a9e-86a0-ab74-6939-0d36a11e6843';
    $display->content['new-f3283a9e-86a0-ab74-6939-0d36a11e6843'] = $pane;
    $display->panels['center'][21] = 'new-f3283a9e-86a0-ab74-6939-0d36a11e6843';
    $pane = new stdClass();
    $pane->pid = 'new-bcbd96e1-3ce8-9884-8d66-21d3c6cb9da5';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_update_last_revised';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bcbd96e1-3ce8-9884-8d66-21d3c6cb9da5';
    $display->content['new-bcbd96e1-3ce8-9884-8d66-21d3c6cb9da5'] = $pane;
    $display->panels['center'][22] = 'new-bcbd96e1-3ce8-9884-8d66-21d3c6cb9da5';
    $pane = new stdClass();
    $pane->pid = 'new-e141b753-c4ea-88c4-a9af-e78d7e6f481e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_responsible';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e141b753-c4ea-88c4-a9af-e78d7e6f481e';
    $display->content['new-e141b753-c4ea-88c4-a9af-e78d7e6f481e'] = $pane;
    $display->panels['center'][23] = 'new-e141b753-c4ea-88c4-a9af-e78d7e6f481e';
    $pane = new stdClass();
    $pane->pid = 'new-1d6d2762-9f77-d2d4-e944-f6de09bd6b12';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d6d2762-9f77-d2d4-e944-f6de09bd6b12';
    $display->content['new-1d6d2762-9f77-d2d4-e944-f6de09bd6b12'] = $pane;
    $display->panels['center'][24] = 'new-1d6d2762-9f77-d2d4-e944-f6de09bd6b12';
    $pane = new stdClass();
    $pane->pid = 'new-40560074-9a8f-cc04-4544-0e813e64b2ad';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cluster';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '40560074-9a8f-cc04-4544-0e813e64b2ad';
    $display->content['new-40560074-9a8f-cc04-4544-0e813e64b2ad'] = $pane;
    $display->panels['center'][25] = 'new-40560074-9a8f-cc04-4544-0e813e64b2ad';
    $pane = new stdClass();
    $pane->pid = 'new-d6ecd8e1-3560-9b14-31ab-ee399629e8c1';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd6ecd8e1-3560-9b14-31ab-ee399629e8c1';
    $display->content['new-d6ecd8e1-3560-9b14-31ab-ee399629e8c1'] = $pane;
    $display->panels['center'][26] = 'new-d6ecd8e1-3560-9b14-31ab-ee399629e8c1';
    $pane = new stdClass();
    $pane->pid = 'new-bd4336f1-d507-cef4-cd38-841aa3b16495';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bd4336f1-d507-cef4-cd38-841aa3b16495';
    $display->content['new-bd4336f1-d507-cef4-cd38-841aa3b16495'] = $pane;
    $display->panels['center'][27] = 'new-bd4336f1-d507-cef4-cd38-841aa3b16495';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bd4336f1-d507-cef4-cd38-841aa3b16495';
  $panelizer->display = $display;
  $export['node:toc_pan_page:default'] = $panelizer;

  return $export;
}