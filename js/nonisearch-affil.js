/**
 * Non-iSearch Affiliation tweaks *
 */

(function($) {
  Drupal.behaviors.non_isearch = {
    attach: function(context, settings) {
      $(document).ready(function() {
        var first_affil = $(".view-non-isearch-affiliations .accordion-toggle").get(
          0
        );
        // open first affiliation
        if (first_affil != null) {
          first_affil.click();
        }
      });
    }
  };
})(jQuery);
