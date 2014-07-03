<?php
/**
 * @file
 * Contains interface BatchApiBatchQueueInterface.
 */

require_once DRUPAL_ROOT . '/modules/system/system.queue.inc';
require_once DRUPAL_ROOT . '/includes/batch.queue.inc';

/**
 * Interface used for describing batch (non-progressive) queues.
 */
interface BatchApiBatchQueueInterface extends DrupalQueueInterface {
  /**
   * Returns all remaining items in the queue.
   *
   * @access public
   *
   * @return array
   *   All remaining items.
   */
  public function getAllItems();
}
