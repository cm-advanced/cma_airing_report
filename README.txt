README file for the cma_airing_report module for Drupal 7.x.

This module upon installation will create a view, airing_distribution_report, with 3 displays:

1. Distribution Report	      
  This view has a custom header that will show distribution reports that filter by the views exposed date filter.

2. Data Export
  This display allows the results from teh Distribuation report to be downloaded. Note: I wouldn't recommend downloading more than 6 months at a time.

3. Refresh Show Runtimes
  This view will allow one to refresh the runtime for a Show via a Bulk Operations. If a show has multiple airing results, the show will only be resaved once.

This module also provides a menu page: admin/airings/manage/reports that has links to both the Distribution Report and the Refresh Show Runtimes page. 
