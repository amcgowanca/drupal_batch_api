<?php
/**
 * @file
 * Contains interface BatchApiReliableBatchQueueInterface.
 */

require_once DRUPAL_ROOT . '/modules/system/system.queue.inc';
require_once DRUPAL_ROOT . '/includes/batch.queue.inc';

/**
 * Interface used for describing reliable batch (progressive) queues.
 */
interface BatchApiReliableBatchQueueInterface extends DrupalReliableQueueInterface {
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
