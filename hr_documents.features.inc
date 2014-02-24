<?php
/**
 * @file
 * hr_documents.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_documents_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hr_documents_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hr_documents_node_info() {
  $items = array(
    'hr_document' => array(
      'name' => t('Document'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function hr_documents_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_hr_documents'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_hr_documents",
    "name" : "Documents",
    "index_id" : "default_node_index",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : {
      "result count" : true,
      "fields" : [],
      "results" : 1,
      "custom" : { "display" : "default" }
    }
  }');
  return $items;
}
