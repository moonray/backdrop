<?php
/**
 * Test class for the test_entity entity type.
 */
class TestFieldEntity extends Entity {

  /**
   * Implements EntityInterface::id().
   */
  public function id() {
    return $this->id;
  }

  /**
   * Implements EntityInterface::entityType().
   *
   * @since 1.10.0 This method is now static.
   */
  public static function entityType() {
    return 'entity_test';
  }

  /**
   * Implements EntityInterface::label().
   */
  public function label() {
    return 'label';
  }

  /**
   * Implements EntityInterface::uri().
   */
  public function uri() {
    return array(
      'path' => 'test/' . $this->id,
    );
  }

  /**
   * Implements EntityInterface::createAccess().
   */
  public static function createAccess($bundle = NULL, $account = NULL) {
    return TRUE;
  }

  /**
   * Implements EntityInterface::access().
   */
  public function access($op, $account = NULL) {
    return TRUE;
  }

}
