<?php
/**
 * @file
 * seeding.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function seeding_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'field_url_youtube\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://www.youtube.com/watch?v=rafxXc75KZo\',
            \'format\' => NULL,
            \'safe_value\' => \'https://www.youtube.com/watch?v=rafxXc75KZo\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Concert du 26 juin 2016\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'videos\',
      \'uid\' => \'1\',
      \'uuid\' => \'0911c673-ae7b-41de-a1a9-7de3c8b1160f\',
      \'vid\' => NULL,
      \'vuuid\' => \'7c705318-ce73-4747-abfe-13cb597d7d7f\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'field_url_youtube\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://www.youtube.com/watch?v=x36RzaXQqLk\',
            \'format\' => NULL,
            \'safe_value\' => \'https://www.youtube.com/watch?v=x36RzaXQqLk\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Fête de la musique 2016\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'videos\',
      \'uid\' => \'1\',
      \'uuid\' => \'254e5b12-6f06-4f03-b145-eb2a697bb852\',
      \'vid\' => NULL,
      \'vuuid\' => \'baeaf668-1db8-4668-acc2-a441eefd5613\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'field_url_youtube\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://www.youtube.com/watch?v=LWUqs1gNen4&t=1079s\',
            \'format\' => NULL,
            \'safe_value\' => \'https://www.youtube.com/watch?v=LWUqs1gNen4&amp;t=1079s\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Concert à Fontenay, le 22 mai 2016\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'videos\',
      \'uid\' => \'1\',
      \'uuid\' => \'3810c908-04af-4a67-88a8-0a03df192f9a\',
      \'vid\' => NULL,
      \'vuuid\' => \'d1c72ca5-4f51-4a9c-832d-2dbdd3fb0839\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>La chorale Music\'M Choeur sera présente à la journée des associations de la ville. N\'hésitez pas à passer sur notre stand pour glaner des renseignements et poser vos questions !</p>\\r\\n\\r\\n<p>Choristes habitués, venez nombreux pour présenter notre chorale à de potentielles recrues :)</p>\\r\\n\\r\\n<p>Plus de renseignements sur l\'<a href=\\"https://www.saint-maur.com/actualites.html\\" rel=\\"nofollow\\" target=\\"_blank\\">agenda de la ville de Saint-Maur des Fossés</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>La chorale Music\'M Choeur sera présente à la journée des associations de la ville. N\'hésitez pas à passer sur notre stand pour glaner des renseignements et poser vos questions !</p>\\n<p>Choristes habitués, venez nombreux pour présenter notre chorale à de potentielles recrues :)</p>\\n<p>Plus de renseignements sur l\'<a href=\\"https://www.saint-maur.com/actualites.html\\" rel=\\"nofollow\\" target=\\"_blank\\">agenda de la ville de Saint-Maur des Fossés</a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'field_adresse\' => array(
        \'und\' => array(
          array(
            \'value\' => \' Place des Marronniers, 94100 Saint-Maur-des-Fossés \',
            \'format\' => NULL,
            \'safe_value\' => \' Place des Marronniers, 94100 Saint-Maur-des-Fossés \',
          ),
        ),
      ),
      \'field_date_agenda\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2018-09-09 09:00:00\',
            \'timezone\' => \'Europe/Berlin\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Journée des associations\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'evenement\',
      \'uid\' => \'1\',
      \'uuid\' => \'3cb61ca3-af0e-4650-ad38-1a48fda51767\',
      \'vid\' => NULL,
      \'vuuid\' => \'038aa10b-0143-4d96-adbf-ce4f005cf513\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'4\',
            \'uid\' => \'1\',
            \'filename\' => \'1465492736.jpg\',
            \'uri\' => \'public://1465492736.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1102187\',
            \'status\' => \'1\',
            \'timestamp\' => \'1529434566\',
            \'uuid\' => \'bf01fd89-4dba-44e6-a058-aa9bc22247a8\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1920\',
            \'height\' => \'1080\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Concert du 26 juin 2016\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'slider\',
      \'uid\' => \'1\',
      \'uuid\' => \'3e0245fa-1fb7-40af-a557-7e0cb878f9ba\',
      \'vid\' => NULL,
      \'vuuid\' => \'218269ce-8267-4081-b60f-35a1f07f81a7\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'field_auteur\' => array(
        \'und\' => array(
          array(
            \'value\' => \'J-J. Goldman\',
            \'format\' => NULL,
            \'safe_value\' => \'J-J. Goldman\',
          ),
        ),
      ),
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2001\',
            \'format\' => NULL,
            \'safe_value\' => \'2001\',
          ),
        ),
      ),
      \'field_paroles\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtecenter\\"><em>(tous ensemble, 1 fois)</em><br />\\r\\nSouviens toi, était-ce Mai, Novembre? Ici ou là? Etait-ce un Lundi?<br />\\r\\nJe ne me souviens que d\'un mur immense mais nous étions ensemble,<br />\\r\\nEnsemble,<br />\\r\\nnous l\'avons franchi.</p>\\r\\n\\r\\n<p class=\\"rtecenter\\"><br />\\r\\n<em>(en canon à 3 voix, 3 fois)</em><br />\\r\\nSouviens toi, était-ce Mai, Novembre? Ici <strong><em>(CANON) </em></strong>ou là? Etait-ce un Lundi?<br />\\r\\nJe ne me souviens que d\'un mur immense mais nous étions ensemble.<br />\\r\\nEnsemble,<br />\\r\\nnous l\'avons franchi.</p>\\r\\n\\r\\n<p class=\\"rtecenter\\"><br />\\r\\n<em>(en canon à 3 voix, 3 fois)</em><br />\\r\\nReviens moi <strong><em>(CANON) </em></strong>de tes voyages si loin. Reviens moi, tout s\'ajoute à ma vie.<br />\\r\\nJ\'ai besoin de nos chemins qui se croisent. Quand le temps nous rassemble,<br />\\r\\nEnsemble,<br />\\r\\ntout est plus joli.</p>\\r\\n\\r\\n<p class=\\"rtecenter\\"><br />\\r\\n<em>(tous ensemble, 1 fois)</em><br />\\r\\nReviens moi de tes voyages si loin. Reviens moi, tout s\'ajoute à ma vie.<br />\\r\\nEnsemble <em>(canon à 3 voix) </em>Ensemble <em>(canon à 3 voix)</em><br />\\r\\nEnsemble (canon à 3 voix) Ensemble (canon à 3 voix) Ensemble (canon à 3 voix)<br />\\r\\nEnsemble (canon à 3 voix)<br />\\r\\nEnsemble (canon à 3 voix) Ensemble (canon à 3 voix) Ensemble (canon à 3 voix)</p>\\r\\n\\r\\n<p class=\\"rtecenter\\"><br />\\r\\n<em>(ton au dessus)<br />\\r\\n(plus lentement)</em><br />\\r\\nJe ne me souviens que d\'un mur immense mais nous étions ensemble,<br />\\r\\nEnsemble,<br />\\r\\nNous l\'avons franchi<br />\\r\\n(vx1)<br />\\r\\n(vx2)<br />\\r\\n(vx3)<br />\\r\\nSouviens toi<br />\\r\\nEnsemble,<br />\\r\\nNous l\'avons franchi<br />\\r\\nSouviens toi<br />\\r\\nEnsemble,<br />\\r\\nNous l\'avons franchi</p>\\r\\n\\r\\n<p class=\\"rtecenter\\"><br />\\r\\n<em>(tous ensemble, fort)</em><br />\\r\\nENSEMBLE</p>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<p class=\\"rtecenter\\"><em>(tous ensemble, 1 fois)</em><br />\\nSouviens toi, était-ce Mai, Novembre? Ici ou là? Etait-ce un Lundi?<br />\\nJe ne me souviens que d\'un mur immense mais nous étions ensemble,<br />\\nEnsemble,<br />\\nnous l\'avons franchi.</p>\\n<p class=\\"rtecenter\\">\\n<em>(en canon à 3 voix, 3 fois)</em><br />\\nSouviens toi, était-ce Mai, Novembre? Ici <strong><em>(CANON) </em></strong>ou là? Etait-ce un Lundi?<br />\\nJe ne me souviens que d\'un mur immense mais nous étions ensemble.<br />\\nEnsemble,<br />\\nnous l\'avons franchi.</p>\\n<p class=\\"rtecenter\\">\\n<em>(en canon à 3 voix, 3 fois)</em><br />\\nReviens moi <strong><em>(CANON) </em></strong>de tes voyages si loin. Reviens moi, tout s\'ajoute à ma vie.<br />\\nJ\'ai besoin de nos chemins qui se croisent. Quand le temps nous rassemble,<br />\\nEnsemble,<br />\\ntout est plus joli.</p>\\n<p class=\\"rtecenter\\">\\n<em>(tous ensemble, 1 fois)</em><br />\\nReviens moi de tes voyages si loin. Reviens moi, tout s\'ajoute à ma vie.<br />\\nEnsemble <em>(canon à 3 voix) </em>Ensemble <em>(canon à 3 voix)</em><br />\\nEnsemble (canon à 3 voix) Ensemble (canon à 3 voix) Ensemble (canon à 3 voix)<br />\\nEnsemble (canon à 3 voix)<br />\\nEnsemble (canon à 3 voix) Ensemble (canon à 3 voix) Ensemble (canon à 3 voix)</p>\\n<p class=\\"rtecenter\\">\\n<em>(ton au dessus)<br />\\n(plus lentement)</em><br />\\nJe ne me souviens que d\'un mur immense mais nous étions ensemble,<br />\\nEnsemble,<br />\\nNous l\'avons franchi<br />\\n(vx1)<br />\\n(vx2)<br />\\n(vx3)<br />\\nSouviens toi<br />\\nEnsemble,<br />\\nNous l\'avons franchi<br />\\nSouviens toi<br />\\nEnsemble,<br />\\nNous l\'avons franchi</p>\\n<p class=\\"rtecenter\\">\\n<em>(tous ensemble, fort)</em><br />\\nENSEMBLE</p>\\n",
          ),
        ),
      ),
      \'field_partitions\' => array(
        \'und\' => array(
          array(
            \'value\' => \'3\',
            \'revision_id\' => \'3\',
          ),
        ),
      ),
      \'field_piano\' => array(),
      \'field_repetitions\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4\',
            \'revision_id\' => \'4\',
          ),
        ),
      ),
      \'field_saison\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
        ),
      ),
      \'field_style\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'11\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Ensemble\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'chanson\',
      \'uid\' => \'1\',
      \'uuid\' => \'531caae5-1654-4f0e-9d22-d4f6771e564d\',
      \'vid\' => NULL,
      \'vuuid\' => \'466ea21e-8419-4620-bafd-1b532ce6217e\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'field_auteur\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Girolamo Frescobaldi\',
            \'format\' => NULL,
            \'safe_value\' => \'Girolamo Frescobaldi\',
          ),
        ),
      ),
      \'field_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1630\',
            \'format\' => NULL,
            \'safe_value\' => \'1630\',
          ),
        ),
      ),
      \'field_paroles\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Se l\'aura spira tutta vezzosa, la fresca rosa ridente sta<br />\\r\\nLa siepe ombrosa di bei smeraldi d\'estivi caldi timor non ha<br />\\r\\n<br />\\r\\nA balli, a balli, ninte gradite, fior di beltà<br />\\r\\nOr, che sì chiaro il vago fonte dall\'alto monte al mar sen\'va</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Se l\'aura spira tutta vezzosa, la fresca rosa ridente sta<br />\\nLa siepe ombrosa di bei smeraldi d\'estivi caldi timor non ha</p>\\n<p>A balli, a balli, ninte gradite, fior di beltà<br />\\nOr, che sì chiaro il vago fonte dall\'alto monte al mar sen\'va</p>\\n",
          ),
        ),
      ),
      \'field_partitions\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
            \'revision_id\' => \'1\',
          ),
        ),
      ),
      \'field_piano\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
            \'revision_id\' => \'2\',
          ),
        ),
      ),
      \'field_repetitions\' => array(),
      \'field_saison\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'field_style\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => "Se l\'aura spira",
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'chanson\',
      \'uid\' => \'1\',
      \'uuid\' => \'655b4cab-c5fe-4bc6-ac46-08a6ed471aef\',
      \'vid\' => NULL,
      \'vuuid\' => \'6b0d8c2a-ba85-4f4a-81fa-43ef9d280d71\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Contact\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'webform\',
      \'uid\' => \'1\',
      \'uuid\' => \'908933c2-443f-4896-a470-69afa63d55d2\',
      \'vid\' => NULL,
      \'vuuid\' => \'03abe796-def4-4923-9ac4-0ab32d7d131f\',
      \'webform\' => array(
        \'nid\' => \'11\',
        \'next_serial\' => \'1\',
        \'confirmation\' => "<p>Votre message a bien été envoyé.</p>\\r\\n\\r\\n<p>Merci de nous avoir contactés !</p>\\r\\n",
        \'confirmation_format\' => \'full_html\',
        \'redirect_url\' => \'<confirmation>\',
        \'status\' => \'1\',
        \'block\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'0\',
        \'confidential\' => \'0\',
        \'submit_text\' => \'Envoyer\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'progressbar_bar\' => \'1\',
        \'progressbar_page_number\' => \'0\',
        \'progressbar_percent\' => \'0\',
        \'progressbar_pagebreak_labels\' => \'1\',
        \'progressbar_include_confirmation\' => \'1\',
        \'progressbar_label_first\' => \'Start\',
        \'progressbar_label_confirmation\' => \'Complete\',
        \'preview\' => \'0\',
        \'preview_next_button_label\' => \'\',
        \'preview_prev_button_label\' => \'\',
        \'preview_title\' => \'\',
        \'preview_message\' => \'\',
        \'preview_message_format\' => \'filtered_html\',
        \'preview_excluded_components\' => array(),
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(
          1 => array(
            \'nid\' => \'11\',
            \'eid\' => \'1\',
            \'email\' => \'shakshirley+chorale@gmail.com\',
            \'subject\' => \'Nouveau message sur musicmchoeur\',
            \'from_name\' => \'default\',
            \'from_address\' => \'default\',
            \'template\' => \'default\',
            \'excluded_components\' => array(),
            \'html\' => \'0\',
            \'attachments\' => \'0\',
            \'exclude_empty\' => \'0\',
            \'extra\' => FALSE,
            \'status\' => \'1\',
          ),
        ),
        \'components\' => array(
          1 => array(
            \'nid\' => 11,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'name\',
            \'name\' => \'Nom\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'minlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'0\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 11,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'email\',
            \'name\' => \'Email\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'multiple\' => 0,
              \'format\' => \'short\',
              \'width\' => \'\',
              \'unique\' => 0,
              \'disabled\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
          3 => array(
            \'nid\' => 11,
            \'cid\' => \'3\',
            \'pid\' => \'0\',
            \'form_key\' => \'telephone\',
            \'name\' => \'Téléphone\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'minlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'2\',
            \'page_num\' => 1,
          ),
          4 => array(
            \'nid\' => 11,
            \'cid\' => \'4\',
            \'pid\' => \'0\',
            \'form_key\' => \'message\',
            \'name\' => \'Message\',
            \'type\' => \'textarea\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'description_above\' => 0,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'cols\' => \'\',
              \'rows\' => \'\',
              \'resizable\' => 1,
              \'disabled\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'3\',
            \'page_num\' => 1,
          ),
        ),
        \'conditionals\' => array(),
      ),
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div>\\r\\n<h2>Une bien belle aventure</h2>\\r\\n\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut sit amet velit et dolor egestas vulputate. Quisque accumsan erat et metus vehicula, id cursus purus finibus. Nulla ut gravida nulla. Cras lacus velit, tincidunt et justo vitae, mollis feugiat felis. Nunc porttitor et tellus sit amet imperdiet. Suspendisse bibendum luctus libero, nec blandit lectus aliquet vitae. Aliquam ornare dapibus mauris, sed tristique est. Vivamus tempus risus nibh, in pellentesque justo iaculis non. Sed eleifend congue risus varius imperdiet. Quisque vel justo at mi porttitor tincidunt at id diam. Proin tempor posuere metus, quis ultricies quam euismod nec. Donec porta aliquet justo, at varius neque tempor et. Ut dictum luctus maximus. Vivamus quis sapien eget felis dictum interdum et vel purus. Maecenas et vestibulum ante. Proin tincidunt ex sed urna aliquet facilisis.</p>\\r\\n\\r\\n<h3>Ouverte à tous</h3>\\r\\n\\r\\n<p>Vivamus eget tortor non felis fringilla efficitur sit amet ac nunc. Sed nec risus nunc. Suspendisse aliquet consequat augue et vehicula. Suspendisse convallis cursus sem nec dapibus. Etiam vel lacus lacinia enim rhoncus consequat. Aliquam feugiat sagittis justo non mollis. In hac habitasse platea dictumst. Quisque iaculis, urna non vehicula pulvinar, arcu ex varius velit, eget venenatis libero massa at magna.</p>\\r\\n\\r\\n<p><img alt=\\"test\\" height=\\"180\\" src=\\"/sites/default/files/large_img_8247craigs_prants_place.jpg\\" width=\\"180\\" /></p>\\r\\n\\r\\n<h3>Blabla bla bla</h3>\\r\\n\\r\\n<p>Morbi hendrerit libero vitae augue molestie feugiat. Etiam ac lectus orci. Integer consequat ac elit vitae tincidunt. Maecenas vitae nunc magna. Praesent interdum auctor elit et condimentum. In id est sed est faucibus luctus. Nullam eget ullamcorper orci, eu hendrerit justo. Nam tempus, velit tristique aliquet consequat, diam tellus gravida mauris, eget scelerisque mauris mi ac magna. Mauris iaculis ipsum quis velit sagittis, in pellentesque tortor venenatis. In pharetra nibh id laoreet fermentum. Cras malesuada libero quis libero lobortis pretium eget ut turpis.</p>\\r\\n</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<div>\\n<h2>Une bien belle aventure</h2>\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut sit amet velit et dolor egestas vulputate. Quisque accumsan erat et metus vehicula, id cursus purus finibus. Nulla ut gravida nulla. Cras lacus velit, tincidunt et justo vitae, mollis feugiat felis. Nunc porttitor et tellus sit amet imperdiet. Suspendisse bibendum luctus libero, nec blandit lectus aliquet vitae. Aliquam ornare dapibus mauris, sed tristique est. Vivamus tempus risus nibh, in pellentesque justo iaculis non. Sed eleifend congue risus varius imperdiet. Quisque vel justo at mi porttitor tincidunt at id diam. Proin tempor posuere metus, quis ultricies quam euismod nec. Donec porta aliquet justo, at varius neque tempor et. Ut dictum luctus maximus. Vivamus quis sapien eget felis dictum interdum et vel purus. Maecenas et vestibulum ante. Proin tincidunt ex sed urna aliquet facilisis.</p>\\n<h3>Ouverte à tous</h3>\\n<p>Vivamus eget tortor non felis fringilla efficitur sit amet ac nunc. Sed nec risus nunc. Suspendisse aliquet consequat augue et vehicula. Suspendisse convallis cursus sem nec dapibus. Etiam vel lacus lacinia enim rhoncus consequat. Aliquam feugiat sagittis justo non mollis. In hac habitasse platea dictumst. Quisque iaculis, urna non vehicula pulvinar, arcu ex varius velit, eget venenatis libero massa at magna.</p>\\n<p><img alt=\\"test\\" height=\\"180\\" src=\\"/sites/default/files/large_img_8247craigs_prants_place.jpg\\" width=\\"180\\" /></p>\\n<h3>Blabla bla bla</h3>\\n<p>Morbi hendrerit libero vitae augue molestie feugiat. Etiam ac lectus orci. Integer consequat ac elit vitae tincidunt. Maecenas vitae nunc magna. Praesent interdum auctor elit et condimentum. In id est sed est faucibus luctus. Nullam eget ullamcorper orci, eu hendrerit justo. Nam tempus, velit tristique aliquet consequat, diam tellus gravida mauris, eget scelerisque mauris mi ac magna. Mauris iaculis ipsum quis velit sagittis, in pellentesque tortor venenatis. In pharetra nibh id laoreet fermentum. Cras malesuada libero quis libero lobortis pretium eget ut turpis.</p>\\n</div>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Notre chorale\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'a0b3d12b-e72d-4287-bedc-a5ea5f0338bd\',
      \'vid\' => NULL,
      \'vuuid\' => \'3c9c4a23-16bd-4912-b819-c9df2a0421a3\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>blabla</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>blabla</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Mentions légales\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'a776263c-9ea2-4df7-b5db-e847e5b6b8e4\',
      \'vid\' => NULL,
      \'vuuid\' => \'8b8cd743-2542-4372-a16b-042b52d52117\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<h2>Pupitres à pourvoir :</h2>\\r\\n\\r\\n<p>Suspendisse bibendum luctus libero, nec blandit lectus aliquet vitae. Aliquam ornare dapibus mauris, sed tristique est. Vivamus tempus risus nibh, in pellentesque justo iaculis non. Sed eleifend congue risus varius imperdiet. Quisque vel justo at mi porttitor tincidunt at id diam. Proin tempor posuere metus, quis ultricies quam euismod nec.</p>\\r\\n\\r\\n<h2>Nous contacter :</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>par email : recrutement@superchorale.fr</li>\\r\\n\\t<li>par téléphone : 01 02 03 04 05</li>\\r\\n</ul>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<h2>Pupitres à pourvoir :</h2>\\n<p>Suspendisse bibendum luctus libero, nec blandit lectus aliquet vitae. Aliquam ornare dapibus mauris, sed tristique est. Vivamus tempus risus nibh, in pellentesque justo iaculis non. Sed eleifend congue risus varius imperdiet. Quisque vel justo at mi porttitor tincidunt at id diam. Proin tempor posuere metus, quis ultricies quam euismod nec.</p>\\n<h2>Nous contacter :</h2>\\n<ul><li>par email : <a href=\\"mailto:recrutement@superchorale.fr\\">recrutement@superchorale.fr</a></li>\\n<li>par téléphone : 01 02 03 04 05</li>\\n</ul>",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Recrutement\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'ba7092eb-b5a8-4eb7-8c45-6fded0394dc8\',
      \'vid\' => NULL,
      \'vuuid\' => \'c8d998dd-7213-4317-b7e1-1a35ca7ab6f1\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'5\',
            \'uid\' => \'1\',
            \'filename\' => \'1510934701.jpg\',
            \'uri\' => \'public://1510934701.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'268570\',
            \'status\' => \'1\',
            \'timestamp\' => \'1529434566\',
            \'uuid\' => \'3d4442c3-67cb-441f-a331-0091501a40c9\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1024\',
            \'height\' => \'512\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => "Photo du choeur prise lors du concert à l\'église d\'Adamville",
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'slider\',
      \'uid\' => \'1\',
      \'uuid\' => \'d8e51947-dc11-4eeb-b0db-01daee48cf4d\',
      \'vid\' => NULL,
      \'vuuid\' => \'7d844ed7-54a1-4dfa-9118-56190a824797\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div>\\r\\n<p>Suspendisse bibendum luctus libero, nec blandit lectus aliquet vitae. Aliquam ornare <em>dapibus mauris</em>, sed tristique est.</p>\\r\\n\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut sit amet velit et dolor egestas vulputate. Nunc porttitor et tellus sit amet imperdiet. Vivamus eget tortor non felis fringilla efficitur sit amet ac nunc. Sed nec<strong> risus</strong> nunc. Suspendisse aliquet consequat augue et vehicula. Aliquam feugiat sagittis justo non mollis. In hac habitasse platea dictumst. Quisque iaculis, urna non vehicula pulvinar, arcu ex varius velit, eget venenatis libero massa at magna.</p>\\r\\n\\r\\n<p>Morbi hendrerit libero vitae augue molestie feugiat. Etiam ac lectus orci. Integer consequat ac elit vitae tincidunt. Maecenas vitae nunc magna. Praesent interdum auctor elit et condimentum. In id est sed est faucibus luctus. Nullam eget ullamcorper orci, eu hendrerit justo.</p>\\r\\n</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<div>\\n<p>Suspendisse bibendum luctus libero, nec blandit lectus aliquet vitae. Aliquam ornare <em>dapibus mauris</em>, sed tristique est.</p>\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut sit amet velit et dolor egestas vulputate. Nunc porttitor et tellus sit amet imperdiet. Vivamus eget tortor non felis fringilla efficitur sit amet ac nunc. Sed nec<strong> risus</strong> nunc. Suspendisse aliquet consequat augue et vehicula. Aliquam feugiat sagittis justo non mollis. In hac habitasse platea dictumst. Quisque iaculis, urna non vehicula pulvinar, arcu ex varius velit, eget venenatis libero massa at magna.</p>\\n<p>Morbi hendrerit libero vitae augue molestie feugiat. Etiam ac lectus orci. Integer consequat ac elit vitae tincidunt. Maecenas vitae nunc magna. Praesent interdum auctor elit et condimentum. In id est sed est faucibus luctus. Nullam eget ullamcorper orci, eu hendrerit justo.</p>\\n</div>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admincw\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Chef de choeur\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'f03606e4-12ea-42ec-840e-fc94fb50ae20\',
      \'vid\' => NULL,
      \'vuuid\' => \'2522787b-aeed-414c-b7f0-78d792259a2e\',
    ),
)',
);
  return $node_export;
}
