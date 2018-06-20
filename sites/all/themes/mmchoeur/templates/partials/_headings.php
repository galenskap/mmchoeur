<div class="heading wrapper">
  <div class="container flex-container--column">
    <?php if ($breadcrumb): ?>
      <div class="miettes-de-pain"><?php print $breadcrumb; ?></div>
    <?php endif; ?>

    <?php if ($messages): ?>
      <div id="messages" class="wrapper messages">
        <div class="container">
          <?php print $messages; ?>
        </div>
      </div>
    <?php endif; ?>

    <div class="title-zone">
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="title" id="page-title">
          <?php print $title; ?>
        </h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
    </div>

    <?php if ($page['featured']): ?>
      <div id="featured" class="wrapper featured">
        <div class="container">
          <?php print render($page['featured']); ?>
        </div>
      </div>
    <?php endif; ?>
  </div>
</div><!-- end heading -->
