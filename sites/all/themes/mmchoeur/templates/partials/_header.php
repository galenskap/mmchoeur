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
        <span class="close-menu">✖</span>
      <?php print render($page['header']); ?>
    </nav>
    <div class="toggle-wrapper">
      <div class="toggle-menu"></div>
    </div>
  </div><!-- /.container -->
</header>

<div class="user-bar flex-container">
  <?php
    if ($user->uid) {
      echo '<span class="welcome">Bonjour '.$user->name.' !</span>';
      echo l('Mon compte', 'user');
        echo l('Déconnexion', 'user/logout');
    }
    else {
      echo l('Se connecter', 'user');
    }
  ?>
</div>
