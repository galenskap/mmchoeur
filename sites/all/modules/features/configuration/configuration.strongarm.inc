<?php
/**
 * @file
 * configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_chanson';
  $strongarm->value = 'edit-simplify--2';
  $export['additional_settings__active_tab_chanson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'adminimal_admin_menu_core-toolbar-disabled';
  $strongarm->value = TRUE;
  $export['adminimal_admin_menu_core-toolbar-disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = TRUE;
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = '0';
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_webform';
  $strongarm->value = '0';
  $export['comment_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'configurable_timezones';
  $strongarm->value = 0;
  $export['configurable_timezones'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'SgIDc4xmkPwzda8py5FCMbPbDf1I_gRZlPOOXtJRVro';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1538476809;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'pfywmh';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1538465644;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Berlin';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '1';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_nodes_main';
  $strongarm->value = '10';
  $export['default_nodes_main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = '1h8rbAlcqdQKdq4OOKkY6g5C2VjxuWzaUkMmIdzLNtc';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'email__active_tab';
  $strongarm->value = 'edit-email-admin-created';
  $export['email__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'empty_timezone_message';
  $strongarm->value = 0;
  $export['empty_timezone_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_menu_links_menus';
  $strongarm->value = array(
    'devel' => 'devel',
    'features' => 'features',
    'management' => 'management',
    'main-menu' => 'main-menu',
    'navigation' => 'navigation',
    'user-menu' => 'user-menu',
  );
  $export['features_admin_menu_links_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ckeditor_profile';
  $strongarm->value = 1;
  $export['features_admin_show_component_ckeditor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_context';
  $strongarm->value = 1;
  $export['features_admin_show_component_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ctools';
  $strongarm->value = 1;
  $export['features_admin_show_component_ctools'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_dependencies';
  $strongarm->value = 1;
  $export['features_admin_show_component_dependencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_base';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_base'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_group';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_instance';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_filter';
  $strongarm->value = 1;
  $export['features_admin_show_component_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_image';
  $strongarm->value = 1;
  $export['features_admin_show_component_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_language';
  $strongarm->value = 1;
  $export['features_admin_show_component_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_menu_custom';
  $strongarm->value = 1;
  $export['features_admin_show_component_menu_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_menu_links';
  $strongarm->value = 1;
  $export['features_admin_show_component_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_node';
  $strongarm->value = 1;
  $export['features_admin_show_component_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_taxonomy';
  $strongarm->value = 1;
  $export['features_admin_show_component_taxonomy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_user_permission';
  $strongarm->value = 1;
  $export['features_admin_show_component_user_permission'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_user_role';
  $strongarm->value = 1;
  $export['features_admin_show_component_user_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_entities';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_entities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_variable';
  $strongarm->value = 1;
  $export['features_admin_show_component_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_views_view';
  $strongarm->value = 1;
  $export['features_admin_show_component_views_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'configuration' => array(
      'variable' => 'f1a63dde336668353c2e67e1ad3ab22f',
      'ckeditor_profile' => 'a28bd47280ee3633117f37e6bc975ac5',
      'filter' => 'e1ba718b9bb5189bfb3604dcce922498',
      'language' => 'e4c353249924119776a68a95e72ee3a2',
      'dependencies' => '52fb240bd26c23ba9004cb6eb640a42f',
    ),
    'roles_et_permissions' => array(
      'user_role' => '60b78d3df26a170e8b036efb2a6fd053',
      'user_permission' => '39f940ea2a51d1df8f5c1fc6d96c33cc',
      'dependencies' => 'c449e82b68412e3efc32500b730fb22f',
    ),
    'pages' => array(
      'node' => 'c2af0ddfb13d8c9b1808db65e454c511',
      'field_base' => 'ec8983037866d3303225a19166a82523',
      'field_instance' => '67452de60420c19dbd9b744a5175b0f4',
      'dependencies' => 'f02ca024e6f101b15aae231c0093b04f',
      'variable' => 'e234e0ad87652719509618b76ce4a0f6',
    ),
    'taxonomies' => array(
      'taxonomy' => '280f51761391515fe882b4683fc0f580',
      'dependencies' => '85632e15665831b474ea6ca9f898b367',
      'field_base' => '5a19b7b26bd901d1fab6b0bc92285128',
      'field_instance' => '59d3370881a30a29eabc7cbb6f554b07',
    ),
    'chansons' => array(
      'node' => '3796aa26ccb5c0461da34186b2455d05',
      'variable' => 'e3f0fa7118d39c6dd8b516391785576a',
      'field_base' => 'ac4dce8191575bc134e1ac897e30cdb7',
      'field_instance' => '2f55b57af369da40977078e74fbeaf15',
      'dependencies' => 'a3074f21f47940513843afbde77ab748',
      'taxonomy' => '3e55960f30076cb0299e8543d9d65e80',
    ),
    'slider' => array(
      'node' => '54940451e55c6b7e2d2be073094f71ea',
      'variable' => 'ca9573fdaa467f9ffdc9bf34d8d992d4',
      'field_base' => 'de96797ce2772667988801179020a43c',
      'field_instance' => '751a40229e078c9326f48a9699e6cc51',
      'dependencies' => 'd0793a4f6f6d7f626cf1626f673f4b02',
      'image' => 'fa2fe591385c6f56c16110f23f899813',
    ),
    'video' => array(
      'node' => '55b2588f4f9b34831f62516d36641c2e',
      'variable' => 'd65a5416bc16b0a8c2db8ef0f6349c13',
      'field_base' => '8df749b6f7350caff78f63b00103498a',
      'field_instance' => '9aed1ab4342a94ae89a764c3a0d1b6e3',
      'dependencies' => 'ca842a063138778144ff74a681179c53',
    ),
    'block_de_home' => array(
      'fe_block_boxes' => '1e618a9c26b6ce4a78ba34d656df8c01',
      'fe_block_settings' => 'f61d7ec98c0d47a8c84a342ffcd307e4',
      'dependencies' => 'ab820555367bfb55d9833cd00668f1f6',
    ),
    'menu_seeding' => array(
      'menu_custom' => 'f15189ea1af8e55c86b058b96c2c76bb',
      'dependencies' => '90a963344c5a24d4f52dbc7ec6dcc304',
      'fe_block_settings' => '8bef39875290b7a40703c4b2706fe061',
      'menu_links' => 'd54bda627476dce3e8a67294a68325af',
    ),
    'seeding' => array(
      'node_export_features' => 'd2e30e284f43a666b8ad9ad840bea8b6',
      'dependencies' => 'e1321dac2cc31008a382ee292346ac5c',
      'node' => 'e2e5ff80c955b21b0e3309b7952f73ac',
    ),
    'vues_de_home' => array(
      'dependencies' => 'bf55b837b8230c14617afe2ba379886f',
      'views_view' => '14032eb2dc658abdc4f0b731284d06a2',
      'fe_block_settings' => 'cd3b5c6eb4ab594dbb4f1f01ad49c386',
    ),
    'partotheque' => array(
      'dependencies' => 'f334ac27b969221f20f7aa53080cd124',
      'views_view' => '1d3e9fa359947fbced874c3644601d1e',
    ),
    'repertoire' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
      'views_view' => '407aa6e6b8f88d67288482f27507cedf',
    ),
    'evenements' => array(
      'node' => '9e0c58ea44a7cb142d89109cf386f318',
      'variable' => 'b1a3e932f02cbfa36cd3031b3fda80df',
      'field_base' => '155b6ab911f5f6b20c12997bb31bdf3b',
      'field_instance' => '6b75e43729a8ef25a7b6bb44d8fdbc89',
      'dependencies' => 'e1ca0b21205135f91f20111efe29c548',
    ),
    'agenda' => array(
      'dependencies' => 'e90af34b662c537eb62378b75a139fe1',
    ),
    'espace_choristes' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
    ),
    'trombinoscope' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ckeditor_profile';
  $strongarm->value = 0;
  $export['features_component_locked_ckeditor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_context';
  $strongarm->value = 0;
  $export['features_component_locked_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_dependencies';
  $strongarm->value = 0;
  $export['features_component_locked_dependencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_base';
  $strongarm->value = 0;
  $export['features_component_locked_field_base'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_group';
  $strongarm->value = 0;
  $export['features_component_locked_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_instance';
  $strongarm->value = 0;
  $export['features_component_locked_field_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_filter';
  $strongarm->value = 0;
  $export['features_component_locked_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_image';
  $strongarm->value = 0;
  $export['features_component_locked_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_language';
  $strongarm->value = 0;
  $export['features_component_locked_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_menu_custom';
  $strongarm->value = 0;
  $export['features_component_locked_menu_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_menu_links';
  $strongarm->value = 0;
  $export['features_component_locked_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_node';
  $strongarm->value = 0;
  $export['features_component_locked_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_taxonomy';
  $strongarm->value = 0;
  $export['features_component_locked_taxonomy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_user_permission';
  $strongarm->value = 0;
  $export['features_component_locked_user_permission'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_user_role';
  $strongarm->value = 0;
  $export['features_component_locked_user_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_entities';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_entities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_variable';
  $strongarm->value = 0;
  $export['features_component_locked_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_views_view';
  $strongarm->value = 0;
  $export['features_component_locked_views_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_default_export_path';
  $strongarm->value = 'sites/all/modules/features';
  $export['features_default_export_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_lock_mode';
  $strongarm->value = 'all';
  $export['features_lock_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_modules_changed';
  $strongarm->value = FALSE;
  $export['features_modules_changed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_rebuild_modules_page';
  $strongarm->value = 0;
  $export['features_rebuild_modules_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_rebuild_on_flush';
  $strongarm->value = 1;
  $export['features_rebuild_on_flush'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_partitions';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_partitions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_piano';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_piano'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_repetitions';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_repetitions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_profiles';
  $strongarm->value = array(
    1 => array(
      'name' => 'User-1',
      'usertab' => 1,
      'filesize' => 0,
      'quota' => 0,
      'tuquota' => 0,
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => 0,
      'directories' => array(
        0 => array(
          'name' => '.',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
    ),
    2 => array(
      'name' => 'Sample profile',
      'usertab' => 1,
      'filesize' => 1,
      'quota' => 2,
      'tuquota' => 0,
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => 1,
      'directories' => array(
        0 => array(
          'name' => 'u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 0,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
  );
  $export['imce_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'standard';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1474472269;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'javascript_parsed';
  $strongarm->value = array(
    0 => 'misc/drupal.js',
    1 => 'misc/jquery.js',
    2 => 'misc/jquery.once.js',
    3 => 'sites/all/themes/adminimal_theme/js/jRespond.js',
    4 => 'sites/all/themes/adminimal_theme/js/adminimal_theme.js',
    5 => 'sites/all/modules/contrib/devel/devel_krumo.js',
    6 => 'sites/all/modules/contrib/adminimal_admin_menu/js/jquery.min.js',
    7 => 'sites/all/modules/contrib/adminimal_admin_menu/js/slicknav/jquery-no-conflict.slicknav.js',
    8 => 'sites/all/modules/contrib/adminimal_admin_menu/js/adminimal_admin_menu.js',
    9 => 'misc/form.js',
    10 => 'misc/collapse.js',
    11 => 'sites/all/themes/adminimal_theme/skins/default/default.js',
    12 => 'sites/all/modules/contrib/admin_menu/admin_menu.js',
    13 => 'sites/all/themes/mmchoeur/build/all.js',
    14 => 'sites/all/modules/contrib/features/features.js',
    15 => 'misc/tableheader.js',
    16 => 'misc/vertical-tabs.js',
    17 => 'misc/machine-name.js',
    18 => 'misc/autocomplete.js',
    19 => 'misc/jquery.cookie.js',
    20 => 'misc/jquery.form.js',
    21 => 'misc/progress.js',
    22 => 'misc/ajax.js',
    23 => 'misc/ui/jquery.ui.core.min.js',
    24 => 'misc/ui/jquery.ui.widget.min.js',
    25 => 'misc/ui/jquery.ui.button.min.js',
    26 => 'misc/ui/jquery.ui.mouse.min.js',
    27 => 'misc/ui/jquery.ui.draggable.min.js',
    28 => 'misc/ui/jquery.ui.position.min.js',
    29 => 'misc/ui/jquery.ui.resizable.min.js',
    30 => 'misc/ui/jquery.ui.dialog.min.js',
    31 => 'sites/all/modules/contrib/views/js/jquery.ui.dialog.patch.js',
  );
  $export['javascript_parsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_download_store';
  $strongarm->value = 'sites/all/translations';
  $export['l10n_update_download_store'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_last_check';
  $strongarm->value = 1532176111;
  $export['l10n_update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_rebuild_projects';
  $strongarm->value = 1;
  $export['l10n_update_rebuild_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 1;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => '0',
    'javascript' => 'GwnwxGBVWYuQkwe87UKLbJz0jIED0oUwjs1hl8vXeqg',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array();
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailsystem_theme';
  $strongarm->value = 'current';
  $export['mailsystem_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mail_system';
  $strongarm->value = array(
    'default-system' => 'MimeMailSystem__SmtpMailSystem',
    'htmlmail' => 'HTMLMailSystem',
    'mimemail' => 'MimeMailSystem',
  );
  $export['mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 493,
    2 => 250,
    3 => 247,
    4 => 246,
    5 => 245,
    6 => 125,
    7 => 124,
    8 => 123,
    9 => 122,
    10 => 121,
    11 => 117,
    12 => 63,
    13 => 62,
    14 => 61,
    15 => 60,
    16 => 59,
    17 => 58,
    18 => 45,
    19 => 44,
    20 => 43,
    21 => 31,
    22 => 30,
    23 => 29,
    24 => 28,
    25 => 27,
    26 => 26,
    27 => 24,
    28 => 23,
    29 => 22,
    30 => 21,
    31 => 15,
    32 => 14,
    33 => 13,
    34 => 11,
    35 => 10,
    36 => 7,
    37 => 6,
    38 => 5,
    39 => 3,
    40 => 2,
    41 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array();
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_cron_last';
  $strongarm->value = '1535801672';
  $export['node_cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_view_permissions_article';
  $strongarm->value = 0;
  $export['node_view_permissions_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_view_permissions_chanson';
  $strongarm->value = 1;
  $export['node_view_permissions_chanson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_view_permissions_page';
  $strongarm->value = 1;
  $export['node_view_permissions_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_view_permissions_webform';
  $strongarm->value = 0;
  $export['node_view_permissions_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_chanson_pattern';
  $strongarm->value = 'partotheque/[node:title]';
  $export['pathauto_node_chanson_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_slider_pattern';
  $strongarm->value = '';
  $export['pathauto_node_slider_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_videos_pattern';
  $strongarm->value = '';
  $export['pathauto_node_videos_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_webform_pattern';
  $strongarm->value = '';
  $export['pathauto_node_webform_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pupitres_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pupitres_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_saisons_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_saisons_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_chanson';
  $strongarm->value = 'Enregistrer et ajouter les champs';
  $export['save_continue_chanson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_chanson';
  $strongarm->value = array();
  $export['simplify_comments_chanson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_chanson';
  $strongarm->value = array(
    0 => 'format',
    1 => 'options',
    2 => 'comment',
    3 => 'menu',
  );
  $export['simplify_nodes_chanson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_taxonomy_pupitres';
  $strongarm->value = array();
  $export['simplify_taxonomy_pupitres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_taxonomy_saisons';
  $strongarm->value = array();
  $export['simplify_taxonomy_saisons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_taxonomy_tags';
  $strongarm->value = array();
  $export['simplify_taxonomy_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = '';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = '';
  $export['site_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'FR';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'intruss@gmail.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Music\'M Choeur';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Chorale à Saint-Maur des Fossés';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_previous_mail_system';
  $strongarm->value = 'DefaultMailSystem';
  $export['smtp_previous_mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'mmchoeur';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1538476815;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_email_notification';
  $strongarm->value = 1529226926;
  $export['update_last_email_notification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'admin@example.com',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_default_timezone';
  $strongarm->value = '0';
  $export['user_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 1;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '0';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_chanson';
  $strongarm->value = 0;
  $export['webform_node_chanson'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_webform';
  $strongarm->value = TRUE;
  $export['webform_node_webform'] = $strongarm;

  return $export;
}
