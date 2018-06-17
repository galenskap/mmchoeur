<header id="header" class="wrapper header <?php print $secondary_menu ? 'with-secondary-menu': 'without-secondary-menu'; ?>">
  <div class="container flex-container">
    <?php if ($site_name): ?>
      <a href="<?php print $front_page; ?>" title="Retour à la page d'accueil" class="logo flex-container--column" rel="home">
        <div class="brand"><?php print $site_name; ?></div>
        <?php if ($site_slogan): ?>
          <div class="baseline"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </a>
    <?php endif; ?>

    <nav id="main-menu" class="navigation main-menu">
      <?php print render($page['header']); ?>
    </nav> <!-- /#main-menu -->

  </div><!-- /.container -->
</header>


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


<div class="main-wrapper">
  <div class="container flex-container">
    <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="sidebar wrapper">
        <div class="container">
          <?php print render($page['sidebar_first']); ?>
        </div>
      </div> <!-- end #sidebar-first -->
    <?php endif; ?>

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
        <?php print render($page['content']); ?>
      </div>
    </main>
  </div><!-- end of container -->
</div><!-- end of main-wrapper -->


<footer id="footer" class="footer wrapper">
  <div class="container flex-container">
    <?php if ($page['footer_firstcolumn']): ?>
        <?php print render($page['footer_firstcolumn']); ?>
    <?php endif; ?>
    <?php if ($page['footer_secondcolumn']): ?>
        <?php print render($page['footer_secondcolumn']); ?>
    <?php endif; ?>
    <?php if ($page['footer']): ?>
      <div class="footer-content">
        <?php print render($page['footer']); ?>
      </div>
    <?php endif; ?>
  </div>
</footer>
