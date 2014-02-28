<?php
/**
 * @file
 * hr_documents.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function hr_documents_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:hr_document:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'hr_document';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6a4de020-4f65-496e-af53-3ddfef226a2f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ce771c23-c72b-4aba-8d2a-4e9958fb0e03';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_list_default',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ce771c23-c72b-4aba-8d2a-4e9958fb0e03';
    $display->content['new-ce771c23-c72b-4aba-8d2a-4e9958fb0e03'] = $pane;
    $display->panels['center'][0] = 'new-ce771c23-c72b-4aba-8d2a-4e9958fb0e03';
    $pane = new stdClass();
    $pane->pid = 'new-d70ed78b-5d77-4d45-8dc1-5a49de613ce1';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd70ed78b-5d77-4d45-8dc1-5a49de613ce1';
    $display->content['new-d70ed78b-5d77-4d45-8dc1-5a49de613ce1'] = $pane;
    $display->panels['center'][1] = 'new-d70ed78b-5d77-4d45-8dc1-5a49de613ce1';
    $pane = new stdClass();
    $pane->pid = 'new-015939cc-09d1-4599-b59b-a3e633184827';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bundles';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '015939cc-09d1-4599-b59b-a3e633184827';
    $display->content['new-015939cc-09d1-4599-b59b-a3e633184827'] = $pane;
    $display->panels['center'][2] = 'new-015939cc-09d1-4599-b59b-a3e633184827';
    $pane = new stdClass();
    $pane->pid = 'new-6cb728af-412d-4a86-b94d-613978d113ec';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6cb728af-412d-4a86-b94d-613978d113ec';
    $display->content['new-6cb728af-412d-4a86-b94d-613978d113ec'] = $pane;
    $display->panels['center'][3] = 'new-6cb728af-412d-4a86-b94d-613978d113ec';
    $pane = new stdClass();
    $pane->pid = 'new-ee72d629-e314-4eed-abc1-630ca0b5e474';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_coordination_hubs';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ee72d629-e314-4eed-abc1-630ca0b5e474';
    $display->content['new-ee72d629-e314-4eed-abc1-630ca0b5e474'] = $pane;
    $display->panels['center'][4] = 'new-ee72d629-e314-4eed-abc1-630ca0b5e474';
    $pane = new stdClass();
    $pane->pid = 'new-ef0ff3ea-1b0f-47f3-b6d0-0f709b11c66d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_disasters';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ef0ff3ea-1b0f-47f3-b6d0-0f709b11c66d';
    $display->content['new-ef0ff3ea-1b0f-47f3-b6d0-0f709b11c66d'] = $pane;
    $display->panels['center'][5] = 'new-ef0ff3ea-1b0f-47f3-b6d0-0f709b11c66d';
    $pane = new stdClass();
    $pane->pid = 'new-481ea9a0-a172-4510-856e-5ef45a9e0992';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_methods';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '481ea9a0-a172-4510-856e-5ef45a9e0992';
    $display->content['new-481ea9a0-a172-4510-856e-5ef45a9e0992'] = $pane;
    $display->panels['center'][6] = 'new-481ea9a0-a172-4510-856e-5ef45a9e0992';
    $pane = new stdClass();
    $pane->pid = 'new-0ac28c56-0f31-4a25-9bc9-d0c52c25528e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_themes';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '0ac28c56-0f31-4a25-9bc9-d0c52c25528e';
    $display->content['new-0ac28c56-0f31-4a25-9bc9-d0c52c25528e'] = $pane;
    $display->panels['center'][7] = 'new-0ac28c56-0f31-4a25-9bc9-d0c52c25528e';
    $pane = new stdClass();
    $pane->pid = 'new-43d3ff65-792d-43b2-97fa-a4ac235fe40a';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_locations';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '43d3ff65-792d-43b2-97fa-a4ac235fe40a';
    $display->content['new-43d3ff65-792d-43b2-97fa-a4ac235fe40a'] = $pane;
    $display->panels['center'][8] = 'new-43d3ff65-792d-43b2-97fa-a4ac235fe40a';
    $pane = new stdClass();
    $pane->pid = 'new-b39f9735-02e9-4341-9fc7-af3e14f50623';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organizations';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'b39f9735-02e9-4341-9fc7-af3e14f50623';
    $display->content['new-b39f9735-02e9-4341-9fc7-af3e14f50623'] = $pane;
    $display->panels['center'][9] = 'new-b39f9735-02e9-4341-9fc7-af3e14f50623';
    $pane = new stdClass();
    $pane->pid = 'new-30e70384-f967-4691-897a-178eda9dbd02';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document_type';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '30e70384-f967-4691-897a-178eda9dbd02';
    $display->content['new-30e70384-f967-4691-897a-178eda9dbd02'] = $pane;
    $display->panels['center'][10] = 'new-30e70384-f967-4691-897a-178eda9dbd02';
    $pane = new stdClass();
    $pane->pid = 'new-a31c102d-0188-4ac5-a9da-eb0f29cf65d8';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_publication_date';
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
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'a31c102d-0188-4ac5-a9da-eb0f29cf65d8';
    $display->content['new-a31c102d-0188-4ac5-a9da-eb0f29cf65d8'] = $pane;
    $display->panels['center'][11] = 'new-a31c102d-0188-4ac5-a9da-eb0f29cf65d8';
    $pane = new stdClass();
    $pane->pid = 'new-7626cf37-ba26-460b-a73c-f14c910815ee';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '7626cf37-ba26-460b-a73c-f14c910815ee';
    $display->content['new-7626cf37-ba26-460b-a73c-f14c910815ee'] = $pane;
    $display->panels['center'][12] = 'new-7626cf37-ba26-460b-a73c-f14c910815ee';
    $pane = new stdClass();
    $pane->pid = 'new-89b1915e-c00c-4547-a9f6-01a57140b2b9';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files_collection';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'field_collection_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => TRUE,
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '89b1915e-c00c-4547-a9f6-01a57140b2b9';
    $display->content['new-89b1915e-c00c-4547-a9f6-01a57140b2b9'] = $pane;
    $display->panels['center'][13] = 'new-89b1915e-c00c-4547-a9f6-01a57140b2b9';
    $pane = new stdClass();
    $pane->pid = 'new-4ab4b07f-e6c9-48ac-8d02-d76e7ae37d1c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '4ab4b07f-e6c9-48ac-8d02-d76e7ae37d1c';
    $display->content['new-4ab4b07f-e6c9-48ac-8d02-d76e7ae37d1c'] = $pane;
    $display->panels['center'][14] = 'new-4ab4b07f-e6c9-48ac-8d02-d76e7ae37d1c';
    $pane = new stdClass();
    $pane->pid = 'new-18dae13d-725c-48e4-949b-26c94614cf07';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '18dae13d-725c-48e4-949b-26c94614cf07';
    $display->content['new-18dae13d-725c-48e4-949b-26c94614cf07'] = $pane;
    $display->panels['center'][15] = 'new-18dae13d-725c-48e4-949b-26c94614cf07';
    $pane = new stdClass();
    $pane->pid = 'new-1af0a221-17ac-4055-8646-8570f233d1f0';
    $pane->panel = 'center';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:hr_core_share_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '1af0a221-17ac-4055-8646-8570f233d1f0';
    $display->content['new-1af0a221-17ac-4055-8646-8570f233d1f0'] = $pane;
    $display->panels['center'][16] = 'new-1af0a221-17ac-4055-8646-8570f233d1f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-18dae13d-725c-48e4-949b-26c94614cf07';
  $panelizer->display = $display;
  $export['node:hr_document:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:hr_document:default:search_result';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'hr_document';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'search_result';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '2',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '7',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f489438d-fe9c-404a-9533-b18df9cba25a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-52893498-e312-4959-a75f-baecfa257bed';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_documents_panes-thumbnail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52893498-e312-4959-a75f-baecfa257bed';
    $display->content['new-52893498-e312-4959-a75f-baecfa257bed'] = $pane;
    $display->panels['left'][0] = 'new-52893498-e312-4959-a75f-baecfa257bed';
    $pane = new stdClass();
    $pane->pid = 'new-34a09403-e834-46d6-99bc-64a1c989dec0';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organizations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '34a09403-e834-46d6-99bc-64a1c989dec0';
    $display->content['new-34a09403-e834-46d6-99bc-64a1c989dec0'] = $pane;
    $display->panels['right'][0] = 'new-34a09403-e834-46d6-99bc-64a1c989dec0';
    $pane = new stdClass();
    $pane->pid = 'new-f0c63796-e209-43e3-9208-9ee02a102866';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_publication_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'short',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = 'f0c63796-e209-43e3-9208-9ee02a102866';
    $display->content['new-f0c63796-e209-43e3-9208-9ee02a102866'] = $pane;
    $display->panels['right'][1] = 'new-f0c63796-e209-43e3-9208-9ee02a102866';
    $pane = new stdClass();
    $pane->pid = 'new-106c9a69-3fd4-46ae-8416-68ad95c2a463';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '106c9a69-3fd4-46ae-8416-68ad95c2a463';
    $display->content['new-106c9a69-3fd4-46ae-8416-68ad95c2a463'] = $pane;
    $display->panels['right'][2] = 'new-106c9a69-3fd4-46ae-8416-68ad95c2a463';
    $pane = new stdClass();
    $pane->pid = 'new-a0ca7cda-e33d-48d0-81a0-5cec828a5c74';
    $pane->panel = 'right';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:hr_core_share_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
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
    $pane->uuid = 'a0ca7cda-e33d-48d0-81a0-5cec828a5c74';
    $display->content['new-a0ca7cda-e33d-48d0-81a0-5cec828a5c74'] = $pane;
    $display->panels['right'][3] = 'new-a0ca7cda-e33d-48d0-81a0-5cec828a5c74';
    $pane = new stdClass();
    $pane->pid = 'new-f7f31cb8-1e60-4a7b-860b-5b078cc1cf30';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files_collection';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => 1,
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f7f31cb8-1e60-4a7b-860b-5b078cc1cf30';
    $display->content['new-f7f31cb8-1e60-4a7b-860b-5b078cc1cf30'] = $pane;
    $display->panels['right'][4] = 'new-f7f31cb8-1e60-4a7b-860b-5b078cc1cf30';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-34a09403-e834-46d6-99bc-64a1c989dec0';
  $panelizer->display = $display;
  $export['node:hr_document:default:search_result'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:hr_document:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'hr_document';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '62b777f8-e25b-4077-b09c-a0ef2e31b103';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a6d6044f-229c-494e-b8f6-e892449ba0e2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_documents_panes-thumbnail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a6d6044f-229c-494e-b8f6-e892449ba0e2';
    $display->content['new-a6d6044f-229c-494e-b8f6-e892449ba0e2'] = $pane;
    $display->panels['middle'][0] = 'new-a6d6044f-229c-494e-b8f6-e892449ba0e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:hr_document:default:teaser'] = $panelizer;

  return $export;
}
