<?php
/**
 * @file
 * partotheque.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function partotheque_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'partotheque';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partothèque';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partothèque';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Contenu: Style */
  $handler->display->display_options['fields']['field_style']['id'] = 'field_style';
  $handler->display->display_options['fields']['field_style']['table'] = 'field_data_field_style';
  $handler->display->display_options['fields']['field_style']['field'] = 'field_style';
  $handler->display->display_options['fields']['field_style']['label'] = '';
  $handler->display->display_options['fields']['field_style']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_style']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_style']['element_class'] = 'styles';
  $handler->display->display_options['fields']['field_style']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_style']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_style']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_style']['separator'] = ' / ';
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu: Auteur */
  $handler->display->display_options['fields']['field_auteur']['id'] = 'field_auteur';
  $handler->display->display_options['fields']['field_auteur']['table'] = 'field_data_field_auteur';
  $handler->display->display_options['fields']['field_auteur']['field'] = 'field_auteur';
  $handler->display->display_options['fields']['field_auteur']['label'] = '';
  $handler->display->display_options['fields']['field_auteur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_auteur']['element_label_colon'] = FALSE;
  /* Champ: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] - [field_auteur] <span class="style">[field_style]</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Champ: Content revision: Date de mise à jour */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Modifié le : ';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'm/d/Y';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Champ: Contenu: Lien */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Voir le détail';
  /* Sort criterion: Contenu: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Titre';
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
    'chanson' => 'chanson',
  );
  /* Filter criterion: Contenu: Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Rechercher par nom';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Contenu: Saisons (field_saison) */
  $handler->display->display_options['filters']['field_saison_tid']['id'] = 'field_saison_tid';
  $handler->display->display_options['filters']['field_saison_tid']['table'] = 'field_data_field_saison';
  $handler->display->display_options['filters']['field_saison_tid']['field'] = 'field_saison_tid';
  $handler->display->display_options['filters']['field_saison_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_saison_tid']['expose']['operator_id'] = 'field_saison_tid_op';
  $handler->display->display_options['filters']['field_saison_tid']['expose']['label'] = 'Saison';
  $handler->display->display_options['filters']['field_saison_tid']['expose']['operator'] = 'field_saison_tid_op';
  $handler->display->display_options['filters']['field_saison_tid']['expose']['identifier'] = 'field_saison_tid';
  $handler->display->display_options['filters']['field_saison_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_saison_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_saison_tid']['vocabulary'] = 'saisons';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'partotheque';
  $translatables['partotheque'] = array(
    t('Master'),
    t('Partothèque'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('[title] - [field_auteur] <span class="style">[field_style]</span>'),
    t('Modifié le : '),
    t('Voir le détail'),
    t('Date'),
    t('Titre'),
    t('Rechercher par nom'),
    t('Saison'),
    t('Page'),
  );
  $export['partotheque'] = $view;

  return $export;
}
