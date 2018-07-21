<?php
/**
 * @file
 * agenda.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agenda_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'agenda';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agenda';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Contenu: Date */
  $handler->display->display_options['fields']['field_date_agenda']['id'] = 'field_date_agenda';
  $handler->display->display_options['fields']['field_date_agenda']['table'] = 'field_data_field_date_agenda';
  $handler->display->display_options['fields']['field_date_agenda']['field'] = 'field_date_agenda';
  $handler->display->display_options['fields']['field_date_agenda']['label'] = '';
  $handler->display->display_options['fields']['field_date_agenda']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_agenda']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'l j F Y - H:i',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu: Adresse */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['hide_empty'] = TRUE;
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Contenu: Date (field_date_agenda) */
  $handler->display->display_options['sorts']['field_date_agenda_value']['id'] = 'field_date_agenda_value';
  $handler->display->display_options['sorts']['field_date_agenda_value']['table'] = 'field_data_field_date_agenda';
  $handler->display->display_options['sorts']['field_date_agenda_value']['field'] = 'field_date_agenda_value';
  $handler->display->display_options['sorts']['field_date_agenda_value']['expose']['label'] = 'Date';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'evenement' => 'evenement',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'agenda';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Agenda';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Home - agenda */
  $handler = $view->new_display('block', 'Home - agenda', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Home - Agenda';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Tout l\'agenda';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: Date */
  $handler->display->display_options['fields']['field_date_agenda']['id'] = 'field_date_agenda';
  $handler->display->display_options['fields']['field_date_agenda']['table'] = 'field_data_field_date_agenda';
  $handler->display->display_options['fields']['field_date_agenda']['field'] = 'field_date_agenda';
  $handler->display->display_options['fields']['field_date_agenda']['label'] = '';
  $handler->display->display_options['fields']['field_date_agenda']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_agenda']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => 'l j F Y - H:i',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu: Adresse */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['label'] = '';
  $handler->display->display_options['fields']['field_adresse']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adresse']['hide_empty'] = TRUE;
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenu: Date (field_date_agenda) */
  $handler->display->display_options['sorts']['field_date_agenda_value']['id'] = 'field_date_agenda_value';
  $handler->display->display_options['sorts']['field_date_agenda_value']['table'] = 'field_data_field_date_agenda';
  $handler->display->display_options['sorts']['field_date_agenda_value']['field'] = 'field_date_agenda_value';
  $handler->display->display_options['sorts']['field_date_agenda_value']['expose']['label'] = 'Date';
  $translatables['agenda'] = array(
    t('Master'),
    t('Agenda'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Adresse'),
    t('Date'),
    t('Page'),
    t('Home - agenda'),
    t('Home - Agenda'),
    t('Tout l\'agenda'),
  );
  $export['agenda'] = $view;

  return $export;
}
