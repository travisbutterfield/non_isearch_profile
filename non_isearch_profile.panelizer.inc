<?php

/**
 * @file
 * non_isearch_profile.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function non_isearch_profile_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'non_isearch_profile';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:non_isearch_profile:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'isearch_profile_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'maincontent' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'default' => NULL,
      'header' => NULL,
      'photo' => NULL,
      'contact' => NULL,
      'social' => NULL,
      'sidebar' => NULL,
      'postheaderrow1' => NULL,
      'toprow1' => NULL,
      'toprow1b' => NULL,
      'toprow2col1' => NULL,
      'toprow2col2' => NULL,
      'toprow3col1' => NULL,
      'toprow3col2' => NULL,
      'toprow4col1' => NULL,
      'toprow4col2' => NULL,
      'toprow5col1' => NULL,
      'toprow5col2' => NULL,
      'toprow5col3' => NULL,
      'toprow5b' => NULL,
      'toprow6' => NULL,
      'middlerow1' => NULL,
      'middlerow1b' => NULL,
      'middlerow2col1' => NULL,
      'middlerow2col2' => NULL,
      'middlerow3col1' => NULL,
      'middlerow3col2' => NULL,
      'middlerow4col1' => NULL,
      'middlerow4col2' => NULL,
      'middlerow5col1' => NULL,
      'middlerow5col2' => NULL,
      'middlerow5col3' => NULL,
      'middlerow5b' => NULL,
      'middlerow6' => NULL,
      'bottomrow1' => NULL,
      'bottomrow1b' => NULL,
      'bottomrow2col1' => NULL,
      'bottomrow2col2' => NULL,
      'bottomrow3col1' => NULL,
      'bottomrow3col2' => NULL,
      'bottomrow4col1' => NULL,
      'bottomrow4col2' => NULL,
      'bottomrow5col1' => NULL,
      'bottomrow5col2' => NULL,
      'bottomrow5col3' => NULL,
      'bottomrow5b' => NULL,
      'bottomrow6' => NULL,
      'prefooterrow1' => NULL,
      'affiliations' => NULL,
    ),
    'affiliations' => array(
      'style' => '0',
    ),
    'maincontent' => array(
      'style' => 'tabs-extended',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '06eb49ec-2e10-43f0-8125-8bac8f024d0a';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:non_isearch_profile:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b51f0e94-5f79-48e0-afbc-c2a411a264dd';
  $pane->panel = 'affiliations';
  $pane->type = 'views_panes';
  $pane->subtype = 'non_isearch_affiliations-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b51f0e94-5f79-48e0-afbc-c2a411a264dd';
  $display->content['new-b51f0e94-5f79-48e0-afbc-c2a411a264dd'] = $pane;
  $display->panels['affiliations'][0] = 'new-b51f0e94-5f79-48e0-afbc-c2a411a264dd';
  $pane = new stdClass();
  $pane->pid = 'new-86eb600d-2ccd-43c5-80b2-c2c8f5bf595c';
  $pane->panel = 'contact';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_nonisearch_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'email_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86eb600d-2ccd-43c5-80b2-c2c8f5bf595c';
  $display->content['new-86eb600d-2ccd-43c5-80b2-c2c8f5bf595c'] = $pane;
  $display->panels['contact'][0] = 'new-86eb600d-2ccd-43c5-80b2-c2c8f5bf595c';
  $pane = new stdClass();
  $pane->pid = 'new-b46e32d9-4947-4713-ac63-3f70f60eae2e';
  $pane->panel = 'header';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h2',
    'id' => '',
    'class' => '',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b46e32d9-4947-4713-ac63-3f70f60eae2e';
  $display->content['new-b46e32d9-4947-4713-ac63-3f70f60eae2e'] = $pane;
  $display->panels['header'][0] = 'new-b46e32d9-4947-4713-ac63-3f70f60eae2e';
  $pane = new stdClass();
  $pane->pid = 'new-9caa7eb5-fbf8-4476-b21d-82fa8bf521a6';
  $pane->panel = 'maincontent';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:61e05864-8ba7-4858-b9ca-3b9b078b4ca3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9caa7eb5-fbf8-4476-b21d-82fa8bf521a6';
  $display->content['new-9caa7eb5-fbf8-4476-b21d-82fa8bf521a6'] = $pane;
  $display->panels['maincontent'][0] = 'new-9caa7eb5-fbf8-4476-b21d-82fa8bf521a6';
  $pane = new stdClass();
  $pane->pid = 'new-26f3251f-e893-4c20-bdcd-86571448feb4';
  $pane->panel = 'maincontent';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_bio';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => 'Bio',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '26f3251f-e893-4c20-bdcd-86571448feb4';
  $display->content['new-26f3251f-e893-4c20-bdcd-86571448feb4'] = $pane;
  $display->panels['maincontent'][1] = 'new-26f3251f-e893-4c20-bdcd-86571448feb4';
  $pane = new stdClass();
  $pane->pid = 'new-860b8249-892e-476b-bddb-679890ae8de5';
  $pane->panel = 'photo';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_headshot';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '150x150',
      'image_link' => '',
    ),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '860b8249-892e-476b-bddb-679890ae8de5';
  $display->content['new-860b8249-892e-476b-bddb-679890ae8de5'] = $pane;
  $display->panels['photo'][0] = 'new-860b8249-892e-476b-bddb-679890ae8de5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:non_isearch_profile:default'] = $panelizer;

  return $export;
}
