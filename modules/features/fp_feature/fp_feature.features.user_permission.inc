<?php
/**
 * @file
 * fp_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fp_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create body'.
  $permissions['create body'] = array(
    'name' => 'create body',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_dollars_spent'.
  $permissions['create field_dollars_spent'] = array(
    'name' => 'create field_dollars_spent',
    'roles' => array(
      'content creator' => 'content creator',
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_family_sizes'.
  $permissions['create field_family_sizes'] = array(
    'name' => 'create field_family_sizes',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_sample_file'.
  $permissions['create field_sample_file'] = array(
    'name' => 'create field_sample_file',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_times_visited'.
  $permissions['create field_times_visited'] = array(
    'name' => 'create field_times_visited',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_value_added'.
  $permissions['create field_value_added'] = array(
    'name' => 'create field_value_added',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_yes_or_no'.
  $permissions['create field_yes_or_no'] = array(
    'name' => 'create field_yes_or_no',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit body'.
  $permissions['edit body'] = array(
    'name' => 'edit body',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_dollars_spent'.
  $permissions['edit field_dollars_spent'] = array(
    'name' => 'edit field_dollars_spent',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_family_sizes'.
  $permissions['edit field_family_sizes'] = array(
    'name' => 'edit field_family_sizes',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_sample_file'.
  $permissions['edit field_sample_file'] = array(
    'name' => 'edit field_sample_file',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_times_visited'.
  $permissions['edit field_times_visited'] = array(
    'name' => 'edit field_times_visited',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_value_added'.
  $permissions['edit field_value_added'] = array(
    'name' => 'edit field_value_added',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_yes_or_no'.
  $permissions['edit field_yes_or_no'] = array(
    'name' => 'edit field_yes_or_no',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own body'.
  $permissions['edit own body'] = array(
    'name' => 'edit own body',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_dollars_spent'.
  $permissions['edit own field_dollars_spent'] = array(
    'name' => 'edit own field_dollars_spent',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_family_sizes'.
  $permissions['edit own field_family_sizes'] = array(
    'name' => 'edit own field_family_sizes',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_sample_file'.
  $permissions['edit own field_sample_file'] = array(
    'name' => 'edit own field_sample_file',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_times_visited'.
  $permissions['edit own field_times_visited'] = array(
    'name' => 'edit own field_times_visited',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_value_added'.
  $permissions['edit own field_value_added'] = array(
    'name' => 'edit own field_value_added',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_yes_or_no'.
  $permissions['edit own field_yes_or_no'] = array(
    'name' => 'edit own field_yes_or_no',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view body'.
  $permissions['view body'] = array(
    'name' => 'view body',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_dollars_spent'.
  $permissions['view field_dollars_spent'] = array(
    'name' => 'view field_dollars_spent',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_family_sizes'.
  $permissions['view field_family_sizes'] = array(
    'name' => 'view field_family_sizes',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_sample_file'.
  $permissions['view field_sample_file'] = array(
    'name' => 'view field_sample_file',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_times_visited'.
  $permissions['view field_times_visited'] = array(
    'name' => 'view field_times_visited',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_value_added'.
  $permissions['view field_value_added'] = array(
    'name' => 'view field_value_added',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_yes_or_no'.
  $permissions['view field_yes_or_no'] = array(
    'name' => 'view field_yes_or_no',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own body'.
  $permissions['view own body'] = array(
    'name' => 'view own body',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_dollars_spent'.
  $permissions['view own field_dollars_spent'] = array(
    'name' => 'view own field_dollars_spent',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_family_sizes'.
  $permissions['view own field_family_sizes'] = array(
    'name' => 'view own field_family_sizes',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sample_file'.
  $permissions['view own field_sample_file'] = array(
    'name' => 'view own field_sample_file',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_times_visited'.
  $permissions['view own field_times_visited'] = array(
    'name' => 'view own field_times_visited',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_value_added'.
  $permissions['view own field_value_added'] = array(
    'name' => 'view own field_value_added',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_yes_or_no'.
  $permissions['view own field_yes_or_no'] = array(
    'name' => 'view own field_yes_or_no',
    'roles' => array(
      'site builder' => 'site builder',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
