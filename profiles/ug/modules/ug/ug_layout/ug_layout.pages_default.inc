<?php
/**
 * @file
 * ug_layout.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ug_layout_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__news';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'News',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'news',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news' => 'news',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'top' => NULL,
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0f98c601-13f0-4d54-8f36-87b06be6b7c3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b7f70136-5f5b-4806-b113-45fd60740023';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'n2-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b7f70136-5f5b-4806-b113-45fd60740023';
    $display->content['new-b7f70136-5f5b-4806-b113-45fd60740023'] = $pane;
    $display->panels['left'][0] = 'new-b7f70136-5f5b-4806-b113-45fd60740023';
    $pane = new stdClass();
    $pane->pid = 'new-7a7badc9-4f28-4430-b81a-66538d9be30b';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 's1-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7a7badc9-4f28-4430-b81a-66538d9be30b';
    $display->content['new-7a7badc9-4f28-4430-b81a-66538d9be30b'] = $pane;
    $display->panels['right'][0] = 'new-7a7badc9-4f28-4430-b81a-66538d9be30b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b7f70136-5f5b-4806-b113-45fd60740023';
  $handler->conf['display'] = $display;
  $export['node_view__news'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd22f0d0f-7831-47b5-bb27-cf5f94617b3b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b9cea767-eff7-42fe-9845-bce3e3830863';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'pg1-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b9cea767-eff7-42fe-9845-bce3e3830863';
    $display->content['new-b9cea767-eff7-42fe-9845-bce3e3830863'] = $pane;
    $display->panels['left'][0] = 'new-b9cea767-eff7-42fe-9845-bce3e3830863';
    $pane = new stdClass();
    $pane->pid = 'new-94e8fb6f-785f-437c-9cc4-e1050c918f84';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 's1-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94e8fb6f-785f-437c-9cc4-e1050c918f84';
    $display->content['new-94e8fb6f-785f-437c-9cc4-e1050c918f84'] = $pane;
    $display->panels['right'][0] = 'new-94e8fb6f-785f-437c-9cc4-e1050c918f84';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b9cea767-eff7-42fe-9845-bce3e3830863';
  $handler->conf['display'] = $display;
  $export['node_view__page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_626675f3-46af-46d8-9b83-9f8b00d92e69';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4f0a3459-5e24-491d-9abe-ba357d368e61';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d9e063f-e130-4c5d-9744-7d5390e81a06';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'e2-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9d9e063f-e130-4c5d-9744-7d5390e81a06';
    $display->content['new-9d9e063f-e130-4c5d-9744-7d5390e81a06'] = $pane;
    $display->panels['left'][0] = 'new-9d9e063f-e130-4c5d-9744-7d5390e81a06';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9d9e063f-e130-4c5d-9744-7d5390e81a06';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_626675f3-46af-46d8-9b83-9f8b00d92e69'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_4b915309-9fda-4c42-900d-72fc35fe6822';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c922e0ed-6e14-4fcd-8b5a-7814f72aeb05';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1273f670-f0dc-4d59-a578-59422770c43e';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'p2-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1273f670-f0dc-4d59-a578-59422770c43e';
    $display->content['new-1273f670-f0dc-4d59-a578-59422770c43e'] = $pane;
    $display->panels['left'][0] = 'new-1273f670-f0dc-4d59-a578-59422770c43e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1273f670-f0dc-4d59-a578-59422770c43e';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_4b915309-9fda-4c42-900d-72fc35fe6822'] = $handler;

  return $export;
}