jQuery(document).ready(function(){
    // Handle mobile menu
   jQuery('.toggle-wrapper, .close-menu').on('click',function () {
       jQuery('.main-menu').toggleClass('active');
   });
   if(jQuery('body').hasClass('mobile')) {
     // Mobile views filters
    jQuery('.view-filters').on('click',function (e) {
        if(jQuery(e.target).hasClass('view-filters')) {
            jQuery('.view-filters > form').toggleClass('active');
        }
    });
   }
});
