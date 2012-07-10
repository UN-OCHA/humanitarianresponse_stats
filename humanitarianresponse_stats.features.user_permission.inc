<?php
/**
 * @file
 * humanitarianresponse_stats.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_stats_user_default_permissions() {
  $permissions = array();

  // Exported permission: access piwik reports.
  $permissions['access piwik reports'] = array(
    'name' => 'access piwik reports',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'piwik_reports',
  );

  return $permissions;
}
