<?php
/**
 * @file
 * islandora_preservation_documentation.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function islandora_preservation_documentation_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'theses',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0b5374f8-e626-43f9-81f0-887e6bfda238',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'definition',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '13ee575b-86f4-4087-9b28-8125c62d29f2',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'dip',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1a36958c-71af-4794-adb7-55f709969dc7',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'rights',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3023209b-44a3-4cf0-8225-1dae49f647a5',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'documentation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '35830074-e92e-48cb-9446-cef17644a41f',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'preservation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '42862ebe-8f55-4be2-9eff-7ea05d061a83',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'policy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8a3af211-c779-4e94-be15-34cca23e9a75',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'audio',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9d0c2a07-b8a4-425e-ad3a-b4e1db48695f',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'plan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a6d5b1de-1f30-4f13-80fe-66727cefa23c',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'monitoring',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b4234173-6606-4e8b-ba92-554bebc92fa3',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'preservation-action-plan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c9cb64c2-b6a8-4070-af3c-8f7313da82d3',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'sip',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd5b787f3-1b37-4e85-89d0-590a241e7045',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'aip',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e6f168fe-a217-4908-89ab-8d48eddaa2c4',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'file formats',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fd74493b-e4c9-4d4a-a116-6d891235e1b1',
    'vocabulary_machine_name' => 'tags',
  );
  return $terms;
}
