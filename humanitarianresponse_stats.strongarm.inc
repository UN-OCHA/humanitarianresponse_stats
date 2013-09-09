<?php
/**
 * @file
 * humanitarianresponse_stats.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_stats_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_cache';
  $strongarm->value = 1;
  $export['piwik_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_page_title_hierarchy';
  $strongarm->value = 1;
  $export['piwik_page_title_hierarchy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_reports_token_auth';
  $strongarm->value = '6c4125acf8de9efd92a3d56db0b23867';
  $export['piwik_reports_token_auth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_url_http';
  $strongarm->value = 'http://stats.humanitarianresponse.info/';
  $export['piwik_url_http'] = $strongarm;
  
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'piwik_url_https';
  $strongarm->value = 'https://stats.humanitarianresponse.info/';
  $export['piwik_url_https'] = $strongarm;

  return $export;
}
