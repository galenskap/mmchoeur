<footer id="footer" class="footer wrapper">
  <div class="container">
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
