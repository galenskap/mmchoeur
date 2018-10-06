<?php

/**
* @file
* Bartik's theme implementation to display a node.
*
* Available variables:
* - $title: the (sanitized) title of the node.
* - $content: An array of node items. Use render($content) to print them all,
*   or print a subset such as render($content['field_example']). Use
*   hide($content['field_example']) to temporarily suppress the printing of a
*   given element.
* - $user_picture: The node author's picture from user-picture.tpl.php.
* - $date: Formatted creation date. Preprocess functions can reformat it by
*   calling format_date() with the desired parameters on the $created variable.
* - $name: Themed username of node author output from theme_username().
* - $node_url: Direct URL of the current node.
* - $display_submitted: Whether submission information should be displayed.
* - $submitted: Submission information created from $name and $date during
*   template_preprocess_node().
* - $classes: String of classes that can be used to style contextually through
*   CSS. It can be manipulated through the variable $classes_array from
*   preprocess functions. The default values can be one or more of the
*   following:
*   - node: The current template type; for example, "theming hook".
*   - node-[type]: The current node type. For example, if the node is a
*     "Blog entry" it would result in "node-blog". Note that the machine
*     name will often be in a short form of the human readable label.
*   - node-teaser: Nodes in teaser form.
*   - node-preview: Nodes in preview mode.
*   The following are controlled through the node publishing options.
*   - node-promoted: Nodes promoted to the front page.
*   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
*     listings.
*   - node-unpublished: Unpublished nodes visible only to administrators.
* - $title_prefix (array): An array containing additional output populated by
*   modules, intended to be displayed in front of the main title tag that
*   appears in the template.
* - $title_suffix (array): An array containing additional output populated by
*   modules, intended to be displayed after the main title tag that appears in
*   the template.
*
* Other variables:
* - $node: Full node object. Contains data that may not be safe.
* - $type: Node type; for example, story, page, blog, etc.
* - $comment_count: Number of comments attached to the node.
* - $uid: User ID of the node author.
* - $created: Time the node was published formatted in Unix timestamp.
* - $classes_array: Array of html class attribute values. It is flattened
*   into a string within the variable $classes.
* - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
*   teaser listings.
* - $id: Position of the node. Increments each time it's output.
*
* Node status variables:
* - $view_mode: View mode; for example, "full", "teaser".
* - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
* - $page: Flag for the full page state.
* - $promote: Flag for front page promotion state.
* - $sticky: Flags for sticky post setting.
* - $status: Flag for published status.
* - $comment: State of comment settings for the node.
* - $readmore: Flags true if the teaser content of the node cannot hold the
*   main body content.
* - $is_front: Flags true when presented in the front page.
* - $logged_in: Flags true when the current user is a logged-in member.
* - $is_admin: Flags true when the current user is an administrator.
*
* Field variables: for each field instance attached to the node a corresponding
* variable is defined; for example, $node->body becomes $body. When needing to
* access a field's raw values, developers/themers are strongly encouraged to
* use these variables. Otherwise they will have to explicitly specify the
* desired field language; for example, $node->body['en'], thus overriding any
* language negotiation rule that was previously applied.
*
* @see template_preprocess()
* @see template_preprocess_node()
* @see template_process()
*/
?>
<div id="node-<?php print $node->nid; ?>" class="chanson-node <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content clearfix"<?php print $content_attributes; ?>>

    <div class="main-col">
      <div class="headings">
        <?php if (isset($node->field_auteur['und'])): ?>
          <span class="author"><?php echo $node->field_auteur['und'][0]['value'] ?></span>
        <?php endif; ?>
        <?php if (isset($node->field_date['und'])): ?>
          <span class="date"> - <?php echo $node->field_date['und'][0]['value'] ?></span>
        <?php endif; ?>
      </div>

      <?php if (isset($node->field_paroles['und'])): ?>
        <div class="lyrics">
          <?php echo $node->field_paroles['und'][0]['value'] ?>
        </div>
      <?php endif; ?>
    </div>


    <aside class="side-col">

      <h2 class="side-title h2">
        <?php echo t('Téléchargements') ?>
      </h2>
      <p>Cliquez sur les titres des différentes partitions et audios pour les télécharger.</p>

      <?php if (isset($node->field_partitions['und'])): ?>
        <div class="part partitions">
          <h3 class="h3"><?php echo t('Partitions') ?></h3>
          <?php
          foreach ($node->field_partitions['und'] as $pid):
            $partition = field_collection_item_load($pid['value'], true);
            $term = taxonomy_term_load($partition->field_pupitre['und'][0]['tid']);
          ?>
            <h4 class="h4"><?php echo $term->name ?></h4>
            <ul>
                <?php if ($partition->field_documents['und']): ?>
                  <?php foreach ($partition->field_documents['und'] as $doc):
                    $name = (!empty($doc['description'])) ? $doc['description'] : $doc['filename'];
                    ?>
                    <li>
                      <a href="<?php echo file_create_url($doc['uri']) ?>"><?php echo $name ?></a>
                    </li>
                  <?php endforeach; ?>
                    <?php else: ?>
                    Pas de partitions pour l'instant
                <?php endif; ?>
            </ul>
          <?php endforeach; ?>
        </div>
      <?php endif; ?>


      <?php if (isset($node->field_piano['und'])): ?>
        <div class="part piano">
          <h3 class="h3"><?php echo t('Piano seul') ?></h3>
          <?php foreach ($node->field_piano['und'] as $pid):
            $piano = field_collection_item_load($pid['value'], true);
            $term = taxonomy_term_load($piano->field_pupitre['und'][0]['tid']);
            ?>
            <h4 class="h4"><?php echo $term->name ?></h4>
            <ul>
              <?php foreach ($piano->field_fichiers['und'] as $file) {
                $name = (!empty($file['description'])) ? $file['description'] : $file['filename'];
                $type = explode('/', $file['filemime']);
                $type = end($type);
                ?>
                <li>
                  <a href="<?php echo file_create_url($file['uri']) ?>"><?php echo $name ?></a><span class="type-icon" data-type="<?php echo $type ?>"><?php echo $type ?></span>
                  <?php if ($type != 'midi'): ?>
                    <audio controls>
                      <source src="<?php echo file_create_url($file['uri']) ?>" type="<?php echo $file['filemime'] ?>">
                        Your browser does not support the audio element.
                      </audio>
                    <?php endif; ?>
                  </li>
                <?php  } ?>
              </ul>
            <?php endforeach; ?>
          </div>
        <?php endif; ?>

        <?php if (isset($node->field_repetitions['und'])): ?>
          <div class="part repetitions">
            <h3 class="h3"><?php echo t('Répétitions') ?></h3>
            <?php foreach ($node->field_repetitions['und'] as $pid):
              $piano = field_collection_item_load($pid['value'], true);
              $term = taxonomy_term_load($piano->field_pupitre['und'][0]['tid']);
              ?>
              <h4 class="h4"><?php echo $term->name ?></h4>
              <ul>
                <?php foreach ($piano->field_fichiers['und'] as $file) {
                  $name = (!empty($file['description'])) ? $file['description'] : $file['filename'];
                  $type = explode('/', $file['filemime']);
                  $type = end($type);
                  ?>
                  <li>
                    <a href="<?php echo file_create_url($file['uri']) ?>"><?php echo $name ?></a><span class="type-icon" data-type="<?php echo $type ?>"><?php echo  $type ?></span>
                    <?php if ($type != 'midi'): ?>
                      <audio controls>
                        <source src="<?php echo file_create_url($file['uri']) ?>" type="<?php echo $file['filemime'] ?>">
                          Your browser does not support the audio element.
                        </audio>
                      <?php endif; ?>
                    </li>
                  <?php  } ?>
                </ul>
              <?php endforeach; ?>
            </div>
          <?php endif; ?>

        </aside>
      </div>

    </div>
