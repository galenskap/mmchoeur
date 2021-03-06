<?php
/**
 * @file
 * repertoire.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function repertoire_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'repertoire';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Répertoire';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Répertoire de la saison';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Entête: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Texte d\'introduction à notre répertoire';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Contenu: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'saisons' => 'saisons',
    'pupitres' => 0,
  );
  /* Champ: Contenu: Style */
  $handler->display->display_options['fields']['field_style']['id'] = 'field_style';
  $handler->display->display_options['fields']['field_style']['table'] = 'field_data_field_style';
  $handler->display->display_options['fields']['field_style']['field'] = 'field_style';
  $handler->display->display_options['fields']['field_style']['label'] = '';
  $handler->display->display_options['fields']['field_style']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_style']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_style']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_style']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_style']['separator'] = ' / ';
  /* Champ: Contenu: Auteur */
  $handler->display->display_options['fields']['field_auteur']['id'] = 'field_auteur';
  $handler->display->display_options['fields']['field_auteur']['table'] = 'field_data_field_auteur';
  $handler->display->display_options['fields']['field_auteur']['field'] = 'field_auteur';
  $handler->display->display_options['fields']['field_auteur']['label'] = '';
  $handler->display->display_options['fields']['field_auteur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_auteur']['element_label_colon'] = FALSE;
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong> - [field_auteur]<span class="style">[field_style]</span>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Terme de taxonomie: Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Saison ';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Terme de taxonomie: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Vocabulaire de taxonomie: Identifiant (ID) de vocabulaire */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['vid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'repertoire';

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Terme de taxonomie: Saison courante (field_saison_courante) */
  $handler->display->display_options['filters']['field_saison_courante_value']['id'] = 'field_saison_courante_value';
  $handler->display->display_options['filters']['field_saison_courante_value']['table'] = 'field_data_field_saison_courante';
  $handler->display->display_options['filters']['field_saison_courante_value']['field'] = 'field_saison_courante_value';
  $handler->display->display_options['filters']['field_saison_courante_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_saison_courante_value']['value'] = array(
    1 => '1',
  );
  $translatables['repertoire'] = array(
    t('Master'),
    t('Répertoire de la saison'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Texte d\'introduction à notre répertoire'),
    t('term'),
    t('<strong>[title]</strong> - [field_auteur]<span class="style">[field_style]</span>'),
    t('Saison '),
    t('Tout'),
    t('Page'),
    t('Bloc'),
  );
  $export['repertoire'] = $view;

  return $export;
}
