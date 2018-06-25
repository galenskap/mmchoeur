<?php include('partials/_header.php'); ?>

<?php //include('partials/_headings.php'); ?>

<div class="main-wrapper">
    <main id="main-content">
      <?php if ($page['highlighted']): ?>
        <div id="highlighted" class="container highlighted">
          <?php print render($page['highlighted']); ?>
        </div>
      <?php endif; ?>

      <?php if ($tabs): ?>
        <div class="tabs container flex-container">
          <?php print render($tabs); ?>
        </div>
      <?php endif; ?>

      <?php if ($page['help']): ?>
        <div class="help container flex-container">
          <?php print render($page['help']); ?>
        </div>
      <?php endif; ?>

      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>

      <div class="content">
        <div class="homezone top">
          <?php print render($page['home_top']); ?>
        </div>
        <div class="homezone higher-central">
          <?php print render($page['home_higher_central']); ?>
        </div>
        <div class="homezone lower-central">
          <?php print render($page['home_lower_central']); ?>
        </div>
        <div class="homezone bottom">
          <?php print render($page['home_bottom']); ?>
        </div>
      </div>
    </main>
  </div><!-- end of container -->
</div><!-- end of main-wrapper -->


<?php include('partials/_footer.php'); ?>
