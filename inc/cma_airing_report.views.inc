<?php

function cma_airing_report_views_default_views() {
  $view = new view();
  $view->name = 'airing_distribution_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'cm_airing';
  $view->human_name = 'Airing Distribution Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Airing Distribution Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
									 'airing_id' => 'airing_id',
									 );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
								      'airing_id' => array(
											   'sortable' => 0,
											   'default_sort_order' => 'asc',
											   'align' => '',
											   'separator' => '',
											   'empty_column' => 0,
											   ),
								      );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['id'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['relationships']['field_airing_show_ref_target_id']['field'] = 'field_airing_show_ref_target_id';
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
											'format_type' => 'short',
											'fromto' => 'both',
											'multiple_number' => '',
											'multiple_from' => '',
											'multiple_to' => '',
											'show_repeat_rule' => 'show',
											);
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  /* Field: Airing: Cablecast Airing ID */
  $handler->display->display_options['fields']['field_cablecast_airing_id']['id'] = 'field_cablecast_airing_id';
  $handler->display->display_options['fields']['field_cablecast_airing_id']['table'] = 'field_data_field_cablecast_airing_id';
  $handler->display->display_options['fields']['field_cablecast_airing_id']['field'] = 'field_cablecast_airing_id';
  $handler->display->display_options['fields']['field_cablecast_airing_id']['settings'] = array(
												'thousand_separator' => '',
												'prefix_suffix' => 1,
												);
  /* Field: Airing: Project */
  $handler->display->display_options['fields']['field_airing_project_ref']['id'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['field'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['settings'] = array(
											       'link' => 0,
											       );
  /* Field: Airing: Show */
  $handler->display->display_options['fields']['field_airing_show_ref']['id'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['field'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['settings'] = array(
											    'link' => 0,
											    );
  /* Field: Field: Live Source */
  $handler->display->display_options['fields']['field_live_source']['id'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['fields']['field_live_source']['field'] = 'field_live_source';
  /* Field: Airing: Series Request */
  $handler->display->display_options['fields']['field_series_request']['id'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['table'] = 'field_data_field_series_request';
  $handler->display->display_options['fields']['field_series_request']['field'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['settings'] = array(
											   'link' => 0,
											   );
  /* Field: Airing: Is Show Premiere Date? */
  $handler->display->display_options['fields']['field_is_show_premiere_date']['id'] = 'field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['table'] = 'field_data_field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['field'] = 'field_is_show_premiere_date';
  /* Field: Airing: Is Simultaneous Premiere */
  $handler->display->display_options['fields']['field_is_show_simul_premiere']['id'] = 'field_is_show_simul_premiere';
  $handler->display->display_options['fields']['field_is_show_simul_premiere']['table'] = 'field_data_field_is_show_simul_premiere';
  $handler->display->display_options['fields']['field_is_show_simul_premiere']['field'] = 'field_is_show_simul_premiere';
  $handler->display->display_options['fields']['field_is_show_simul_premiere']['label'] = 'Is Simultaneous Premiere?';
  /* Field: Content: Genres */
  $handler->display->display_options['fields']['field_pbcore_genres']['id'] = 'field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['table'] = 'field_data_field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['field'] = 'field_pbcore_genres';
  $handler->display->display_options['fields']['field_pbcore_genres']['relationship'] = 'field_airing_show_ref_target_id';
  /* Field: Content: Premiere Date */
  $handler->display->display_options['fields']['field_premier_date']['id'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['table'] = 'field_data_field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['field'] = 'field_premier_date';
  $handler->display->display_options['fields']['field_premier_date']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['fields']['field_premier_date']['settings'] = array(
											 'format_type' => 'short',
											 'fromto' => 'both',
											 'multiple_number' => '',
											 'multiple_from' => '',
											 'multiple_to' => '',
											 'show_repeat_rule' => 'show',
											 );
  /* Field: Content: Was it produced within Portland city limits? */
  $handler->display->display_options['fields']['field_produced_city']['id'] = 'field_produced_city';
  $handler->display->display_options['fields']['field_produced_city']['table'] = 'field_data_field_produced_city';
  $handler->display->display_options['fields']['field_produced_city']['field'] = 'field_produced_city';
  $handler->display->display_options['fields']['field_produced_city']['relationship'] = 'field_airing_show_ref_target_id';
  /* Field: Content: Was this show produced in PCM studios or using PCM equipment? */
  $handler->display->display_options['fields']['field_pcm_facilities']['id'] = 'field_pcm_facilities';
  $handler->display->display_options['fields']['field_pcm_facilities']['table'] = 'field_data_field_pcm_facilities';
  $handler->display->display_options['fields']['field_pcm_facilities']['field'] = 'field_pcm_facilities';
  $handler->display->display_options['fields']['field_pcm_facilities']['relationship'] = 'field_airing_show_ref_target_id';
  /* Field: Content: Was this show produced in the Metropolitan Portland area? */
  $handler->display->display_options['fields']['field_produced_where']['id'] = 'field_produced_where';
  $handler->display->display_options['fields']['field_produced_where']['table'] = 'field_data_field_produced_where';
  $handler->display->display_options['fields']['field_produced_where']['field'] = 'field_produced_where';
  $handler->display->display_options['fields']['field_produced_where']['relationship'] = 'field_airing_show_ref_target_id';
  /* Field: Content: Runtime */
  $handler->display->display_options['fields']['field_runtime']['id'] = 'field_runtime';
  $handler->display->display_options['fields']['field_runtime']['table'] = 'field_data_field_runtime';
  $handler->display->display_options['fields']['field_runtime']['field'] = 'field_runtime';
  $handler->display->display_options['fields']['field_runtime']['relationship'] = 'field_airing_show_ref_target_id';
  $handler->display->display_options['fields']['field_runtime']['settings'] = array(
										    'format' => 'h:mm:ss',
										    'leading_zero' => 1,
										    );
  /* Sort criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['sorts']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['sorts']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['sorts']['field_airing_date_value']['field'] = 'field_airing_date_value';
  /* Filter criterion: Airing: Date -  start date (field_airing_date) */
  $handler->display->display_options['filters']['field_airing_date_value']['id'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['filters']['field_airing_date_value']['field'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_airing_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['operator_id'] = 'field_airing_date_value_op';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['label'] = 'Airing Date';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['operator'] = 'field_airing_date_value_op';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['identifier'] = 'field_airing_date_value';
  $handler->display->display_options['filters']['field_airing_date_value']['expose']['remember_roles'] = array(
													       2 => '2',
													       1 => 0,
													       3 => 0,
													       7 => 0,
													       14 => 0,
													       5 => 0,
													       54 => 0,
													       15 => 0,
													       16 => 0,
													       20 => 0,
													       17 => 0,
													       4 => 0,
													       33 => 0,
													       35 => 0,
													       36 => 0,
													       38 => 0,
													       37 => 0,
													       53 => 0,
													       39 => 0,
													       41 => 0,
													       42 => 0,
													       43 => 0,
													       40 => 0,
													       44 => 0,
													       45 => 0,
													       46 => 0,
													       48 => 0,
													       47 => 0,
													       49 => 0,
													       51 => 0,
													       50 => 0,
													       52 => 0,
													       );
  $handler->display->display_options['filters']['field_airing_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_airing_date_value']['default_date'] = 'now -365 day';
  $handler->display->display_options['filters']['field_airing_date_value']['default_to_date'] = 'now';

  /* Display: Distribution Report */
  $handler = $view->new_display('page', 'Distribution Report', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php print cma_airing_report_distribution_header();?>
';
  $handler->display->display_options['path'] = 'admin/airings/reports/distribution';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Airing Distribution Report';
  $handler->display->display_options['menu']['name'] = 'management';

  /* Display: Refresh Show Runtimes */
  $handler = $view->new_display('page', 'Refresh Show Runtimes', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Airing */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'cm_airing';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
												  'action::cma_airing_report_resave_show_nodes' => array(
																			 'selected' => 1,
																			 'postpone_processing' => 0,
																			 'skip_confirmation' => 0,
																			 'override_label' => 0,
																			 'label' => '',
																			 ),
												  );
  /* Field: Airing: Date */
  $handler->display->display_options['fields']['field_airing_date']['id'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['table'] = 'field_data_field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['field'] = 'field_airing_date';
  $handler->display->display_options['fields']['field_airing_date']['settings'] = array(
											'format_type' => 'short',
											'fromto' => 'both',
											'multiple_number' => '',
											'multiple_from' => '',
											'multiple_to' => '',
											'show_repeat_rule' => 'show',
											);
  /* Field: Airing: Title */
  $handler->display->display_options['fields']['field_airing_title']['id'] = 'field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['table'] = 'field_data_field_airing_title';
  $handler->display->display_options['fields']['field_airing_title']['field'] = 'field_airing_title';
  /* Field: Airing: Cablecast Airing ID */
  $handler->display->display_options['fields']['field_cablecast_airing_id']['id'] = 'field_cablecast_airing_id';
  $handler->display->display_options['fields']['field_cablecast_airing_id']['table'] = 'field_data_field_cablecast_airing_id';
  $handler->display->display_options['fields']['field_cablecast_airing_id']['field'] = 'field_cablecast_airing_id';
  $handler->display->display_options['fields']['field_cablecast_airing_id']['settings'] = array(
												'thousand_separator' => '',
												'prefix_suffix' => 1,
												);
  /* Field: Airing: Project */
  $handler->display->display_options['fields']['field_airing_project_ref']['id'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['table'] = 'field_data_field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['field'] = 'field_airing_project_ref';
  $handler->display->display_options['fields']['field_airing_project_ref']['settings'] = array(
											       'link' => 0,
											       );
  /* Field: Airing: Show */
  $handler->display->display_options['fields']['field_airing_show_ref']['id'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['table'] = 'field_data_field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['field'] = 'field_airing_show_ref';
  $handler->display->display_options['fields']['field_airing_show_ref']['settings'] = array(
											    'link' => 0,
											    );
  /* Field: Field: Live Source */
  $handler->display->display_options['fields']['field_live_source']['id'] = 'field_live_source';
  $handler->display->display_options['fields']['field_live_source']['table'] = 'field_data_field_live_source';
  $handler->display->display_options['fields']['field_live_source']['field'] = 'field_live_source';
  /* Field: Airing: Series Request */
  $handler->display->display_options['fields']['field_series_request']['id'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['table'] = 'field_data_field_series_request';
  $handler->display->display_options['fields']['field_series_request']['field'] = 'field_series_request';
  $handler->display->display_options['fields']['field_series_request']['settings'] = array(
											   'link' => 0,
											   );
  /* Field: Airing: Is Show Premiere Date? */
  $handler->display->display_options['fields']['field_is_show_premiere_date']['id'] = 'field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['table'] = 'field_data_field_is_show_premiere_date';
  $handler->display->display_options['fields']['field_is_show_premiere_date']['field'] = 'field_is_show_premiere_date';
  /* Field: Airing: Is Simultaneous Premiere */
  $handler->display->display_options['fields']['field_is_show_simul_premiere']['id'] = 'field_is_show_simul_premiere';
  $handler->display->display_options['fields']['field_is_show_simul_premiere']['table'] = 'field_data_field_is_show_simul_premiere';
  $handler->display->display_options['fields']['field_is_show_simul_premiere']['field'] = 'field_is_show_simul_premiere';
  $handler->display->display_options['fields']['field_is_show_simul_premiere']['label'] = 'Is Simultaneous Premiere?';
  $handler->display->display_options['path'] = 'admin/shows/refresh-runtimes';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'distribution_report.%timestamp-full == 2018-01-03T15-12-19.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/airings/reports/distribution/download';
  $handler->display->display_options['displays'] = array(
							 'page' => 'page',
							 'default' => 0,
							 'page_1' => 0,
							 );

  // Add view to list of views to provide.
  $views[$view->name] = $view;

  // ...Repeat all of the above for each view the module should provide.
  // At the end, return array of default views.             
  return $views;
}
