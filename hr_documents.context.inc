<?php
/**
 * @file
 * hr_documents.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_documents_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_documents_space';
  $context->description = 'Documents page per space';
  $context->tag = 'Documents';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'hr_documents:list' => 'hr_documents:list',
        'hr_documents:master' => 'hr_documents:master',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-hr_documents-master' => array(
          'module' => 'views',
          'delta' => '-exp-hr_documents-master',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'current_search-hr_current_search' => array(
          'module' => 'current_search',
          'delta' => 'hr_current_search',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-2VJqM7IlPMSIoTIQrsoqy1dgG563hXbS' => array(
          'module' => 'facetapi',
          'delta' => '2VJqM7IlPMSIoTIQrsoqy1dgG563hXbS',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ' => array(
          'module' => 'facetapi',
          'delta' => 'ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-sp6ljjoCBKBVws0uia1DCKcDmln6TeUq' => array(
          'module' => 'facetapi',
          'delta' => 'sp6ljjoCBKBVws0uia1DCKcDmln6TeUq',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-w7XuwcVu1l6DNu4aCenMydri96KBLxYh' => array(
          'module' => 'facetapi',
          'delta' => 'w7XuwcVu1l6DNu4aCenMydri96KBLxYh',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17' => array(
          'module' => 'facetapi',
          'delta' => 'uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-9GGN5HfHaQpjLAfMWHJknvdGmR74ha9v' => array(
          'module' => 'facetapi',
          'delta' => '9GGN5HfHaQpjLAfMWHJknvdGmR74ha9v',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-b5bh0kCY1bW8OCpa4wz1BXZJB31r0aAK' => array(
          'module' => 'facetapi',
          'delta' => 'b5bh0kCY1bW8OCpa4wz1BXZJB31r0aAK',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-SEcKjZK5tfurGpvrhp6Z9y3447HT7e2S' => array(
          'module' => 'facetapi',
          'delta' => 'SEcKjZK5tfurGpvrhp6Z9y3447HT7e2S',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'facetapi-9ew5LitJZ6pWU71gbHp1XW9oAOBwV11z' => array(
          'module' => 'facetapi',
          'delta' => '9ew5LitJZ6pWU71gbHp1XW9oAOBwV11z',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');
  t('Documents page per space');
  $export['hr_documents_space'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_documents_space_table';
  $context->description = 'Documents table per space';
  $context->tag = 'Documents';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'hr_documents:table' => 'hr_documents:table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-hr_documents-table' => array(
          'module' => 'views',
          'delta' => '-exp-hr_documents-table',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'current_search-hr_current_search' => array(
          'module' => 'current_search',
          'delta' => 'hr_current_search',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-2VJqM7IlPMSIoTIQrsoqy1dgG563hXbS' => array(
          'module' => 'facetapi',
          'delta' => '2VJqM7IlPMSIoTIQrsoqy1dgG563hXbS',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ' => array(
          'module' => 'facetapi',
          'delta' => 'ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-sp6ljjoCBKBVws0uia1DCKcDmln6TeUq' => array(
          'module' => 'facetapi',
          'delta' => 'sp6ljjoCBKBVws0uia1DCKcDmln6TeUq',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-w7XuwcVu1l6DNu4aCenMydri96KBLxYh' => array(
          'module' => 'facetapi',
          'delta' => 'w7XuwcVu1l6DNu4aCenMydri96KBLxYh',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17' => array(
          'module' => 'facetapi',
          'delta' => 'uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-9GGN5HfHaQpjLAfMWHJknvdGmR74ha9v' => array(
          'module' => 'facetapi',
          'delta' => '9GGN5HfHaQpjLAfMWHJknvdGmR74ha9v',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-b5bh0kCY1bW8OCpa4wz1BXZJB31r0aAK' => array(
          'module' => 'facetapi',
          'delta' => 'b5bh0kCY1bW8OCpa4wz1BXZJB31r0aAK',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-SEcKjZK5tfurGpvrhp6Z9y3447HT7e2S' => array(
          'module' => 'facetapi',
          'delta' => 'SEcKjZK5tfurGpvrhp6Z9y3447HT7e2S',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'facetapi-9ew5LitJZ6pWU71gbHp1XW9oAOBwV11z' => array(
          'module' => 'facetapi',
          'delta' => '9ew5LitJZ6pWU71gbHp1XW9oAOBwV11z',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');
  t('Documents table per space');
  $export['hr_documents_space_table'] = $context;

  return $export;
}
