<?php

/**
 * @file
 * Definition of views_handler_field_node_link_edit.
 */

/**
 * Field handler to present a link node edit.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_node_link_edit extends views_handler_field_node_link {

  /**
   * Renders the link.
   */
  function render_link($node, $values) {
    // Ensure user has access to edit this node.
    if (!node_access('update', $node)) {
      return;
    }

    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = "node/$node->nid/edit";
    $this->options['alter']['query'] = drupal_get_destination();

    if(strpos($this->options['alter']['query'], 'admin/content') !== FALSE) {
      $this->options['alter']['query'] = array('destination' => 'admin/content');
    }

    $text = !empty($this->options['text']) ? $this->options['text'] : t('edit');
    return $text;
  }
}
