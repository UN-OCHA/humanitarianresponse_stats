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
  $strongarm->name = 'piwik_pages';
  $strongarm->value = 'admin
admin/*
batch
node/add*
node/*/*
user/*/*';
  $export['piwik_pages'] = $strongarm;

  return $export;
}
