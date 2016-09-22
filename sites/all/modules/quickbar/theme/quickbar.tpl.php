<div id='quickbar' class='clearfix<?php print $wrapper_class; ?>'>
  <?php if (!empty($tree_0)): ?>
    <div class='depth-0 clearfix'>
      <?php foreach ($tree_0 as $links): ?>
        <?php print $links; ?>
      <?php endforeach; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($tree_1)): ?>
    <div class='depth-1 clearfix <?php if ($collapsed) print 'collapsed' ?>'>
      <span class='close'><?php print t('Close') ?></span>
      <?php foreach ($tree_1 as $links): ?>
        <?php print $links; ?>
      <?php endforeach; ?>
    </div>
  <?php endif; ?>

  <div class='shadow'></div>
</div>
