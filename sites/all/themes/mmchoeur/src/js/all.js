jQuery(document).ready(function(){
   jQuery('.toggle-wrapper, .close-menu').on('click',function () {
       jQuery('.main-menu').toggleClass('active');
   });
});
