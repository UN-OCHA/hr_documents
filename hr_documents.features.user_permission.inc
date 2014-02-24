<?php
/**
 * @file
 * hr_documents.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_documents_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use search_api_autocomplete for search_api_views_hr_documents'.
  $permissions['use search_api_autocomplete for search_api_views_hr_documents'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_hr_documents',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  return $permissions;
}
