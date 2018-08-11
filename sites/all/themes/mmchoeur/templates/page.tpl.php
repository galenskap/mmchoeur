<?php include('partials/_header.php'); ?>

<?php include('partials/_headings.php'); ?>

<div class="main-wrapper">
  <div class="container flex-container">
    <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="sidebar wrapper">
        <div class="container">
          <?php print render($page['sidebar_first']); ?>
        </div>
      </div> <!-- end #sidebar-first -->
    <?php endif; ?>

    <main class="main-content" id="main-content">
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
        <?php print render($page['content']); ?>
      </div>
    </main>
  </div><!-- end of container -->
</div><!-- end of main-wrapper -->


<?php include('partials/_footer.php'); ?>
