<?php
/**
 * @file
 * islandora_preservation_documentation.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function islandora_preservation_documentation_content_defaults() {
  $content = array();

  $content['policy-definition-of-aip'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/policy-definition-of-aip',
      'router_path' => 'node/%',
      'link_title' => 'Definition of AIP',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_definition-of-aip:node/7',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/policy-definition-of-aip',
    ),
    'exported_path' => 'preservation-documentation/policy/definition-of-aip',
    'title' => 'Definition of AIP',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389842975,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'policy-definition-of-aip',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '### Archival Information Package (AIP)

- The information package consisting of the Content Information (CI), Preservation Description Information (PDI), Packaging Information (PI), and Descriptive Information (DI) that is archived at $institution.
- The level of content in a $repo AIP can vary, depending on the amount of content provided by the submitter.
- This description will use the OAIS Information Model to illustrate completeness of our conceptual model, and will describe, in general terms, what a $institution AIP looks like.

**Content Information (CI)**

- The Content Data Object is generally stored with from the primary preservation metadata file, which is held in Fedora Commons.
- Representation Information is maintained, and contains information on the CDO\'s file format, version, and a reference to a format registry in order to provide information on how to interpret the file. See: [registry of file formats](/preservation-documentation/policy/registry-file-formats) 

**Preservation Description Information (PDI)**

- *Reference Information* - Identifiers are stored for each object identifying it globally (e.g. $repo PID) and locally (e.g. URI).
- *Provenance Information* - Provenance metadata is maintained for each object that provides a history of preservation events in the object\'s lifetime, beginning at ingest into the $repo Digital Library repository and referencing any preservation activities taken on the object (e.g., replacement due to corruption, format migration, etc.).
- *Context Information* - As appropriate, information on how a CDO relates to other CDOs or to other conceptual entities. Examples of these relationships can include: a newer version of an object that supersedes an older one.
- *Fixity Information* - Fixity information is generated at the time of ingest in order to later determine whether or not the item remains in the same state as when it was ingested. This information can be used to determine integrity of an object being copied within the system (as in the case of a change in storage location), or for periodic integrity checks.

**Packaging Information (PI)**

- $repo preservation metadata packages both the descriptive and preservation metadata together. 

**Descriptive Information (DI)**

- Depending on the type of CDO, the format of this descriptive metadata can vary (MODS or Dublin Core), but is selected to maximize findability. In all cases, the descriptive metadata will be recreated within the preservation metadata.',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h3>Archival Information Package (AIP)</h3>

<ul>
<li>The information package consisting of the Content Information (CI), Preservation Description Information (PDI), Packaging Information (PI), and Descriptive Information (DI) that is archived at $institution.</li>
<li>The level of content in a $repo AIP can vary, depending on the amount of content provided by the submitter.</li>
<li>This description will use the OAIS Information Model to illustrate completeness of our conceptual model, and will describe, in general terms, what a $institution AIP looks like.</li>
</ul>

<p><strong>Content Information (CI)</strong></p>

<ul>
<li>The Content Data Object is generally stored with from the primary preservation metadata file, which is held in Fedora Commons.</li>
<li>Representation Information is maintained, and contains information on the CDO\'s file format, version, and a reference to a format registry in order to provide information on how to interpret the file. See: <a href="/preservation-documentation/policy/registry-file-formats">registry of file formats</a> </li>
</ul>

<p><strong>Preservation Description Information (PDI)</strong></p>

<ul>
<li><em>Reference Information</em> - Identifiers are stored for each object identifying it globally (e.g. $repo PID) and locally (e.g. URI).</li>
<li><em>Provenance Information</em> - Provenance metadata is maintained for each object that provides a history of preservation events in the object\'s lifetime, beginning at ingest into the $repo Digital Library repository and referencing any preservation activities taken on the object (e.g., replacement due to corruption, format migration, etc.).</li>
<li><em>Context Information</em> - As appropriate, information on how a CDO relates to other CDOs or to other conceptual entities. Examples of these relationships can include: a newer version of an object that supersedes an older one.</li>
<li><em>Fixity Information</em> - Fixity information is generated at the time of ingest in order to later determine whether or not the item remains in the same state as when it was ingested. This information can be used to determine integrity of an object being copied within the system (as in the case of a change in storage location), or for periodic integrity checks.</li>
</ul>

<p><strong>Packaging Information (PI)</strong></p>

<ul>
<li>$repo preservation metadata packages both the descriptive and preservation metadata together. </li>
</ul>

<p><strong>Descriptive Information (DI)</strong></p>

<ul>
<li>Depending on the type of CDO, the format of this descriptive metadata can vary (MODS or Dublin Core), but is selected to maximize findability. In all cases, the descriptive metadata will be recreated within the preservation metadata.</li>
</ul>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 1,
        ),
        1 => array(
          'tid' => 2,
        ),
        2 => array(
          'tid' => 3,
        ),
        3 => array(
          'tid' => 8,
        ),
        4 => array(
          'tid' => 4,
        ),
      ),
    ),
  );

  $content['policy-definition-of-dip'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/policy-definition-of-dip',
      'router_path' => 'node/%',
      'link_title' => 'Definition of DIP',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_definition-of-dip:node/8',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/policy-definition-of-dip',
    ),
    'exported_path' => 'preservation-documentation/policy/definition-of-dip',
    'title' => 'Definition of DIP',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389843169,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'policy-definition-of-dip',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '#### Dissemination Information Package (DIP)

* [OAIS](http://en.wikipedia.org/wiki/Open_Archival_Information_System) describes a DIP as "the Information Package, derived from a part, or all, of one or more AIPs, received by the Consumer in response to a request to the OAIS."
* $institution\'s DIPs are always generated from a single AIP.
* User access to archival objects is generally provided through the Islandora interface.
* The user is first authenticated, and will, depending on their level of access, see basic object metadata, and a link to the object article as available.
* Context information is provided in the form of links to other items in a given collection.
* The DIP is retrieved using the URI for the corresponding AIP. In turn, the AIP contains metadata tying it back to the SIP.',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h4>Dissemination Information Package (DIP)</h4>

<ul>
<li><a href="http://en.wikipedia.org/wiki/Open_Archival_Information_System">OAIS</a> describes a DIP as "the Information Package, derived from a part, or all, of one or more AIPs, received by the Consumer in response to a request to the OAIS."</li>
<li>$institution\'s DIPs are always generated from a single AIP.</li>
<li>User access to archival objects is generally provided through the Islandora interface.</li>
<li>The user is first authenticated, and will, depending on their level of access, see basic object metadata, and a link to the object article as available.</li>
<li>Context information is provided in the form of links to other items in a given collection.</li>
<li>The DIP is retrieved using the URI for the corresponding AIP. In turn, the AIP contains metadata tying it back to the SIP.</li>
</ul>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 1,
        ),
        1 => array(
          'tid' => 3,
        ),
        2 => array(
          'tid' => 2,
        ),
        3 => array(
          'tid' => 8,
        ),
        4 => array(
          'tid' => 5,
        ),
      ),
    ),
  );

  $content['policy-definition-of-sip'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/policy-definition-of-sip',
      'router_path' => 'node/%',
      'link_title' => 'Definition of SIP',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_definition-of-sip:node/9',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/policy-definition-of-sip',
    ),
    'exported_path' => 'preservation-documentation/policy/definition-of-sip',
    'title' => 'Definition of SIP',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389843569,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'policy-definition-of-sip',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '### Submission Information Package (SIP)

- The information package that is delivered to $repo for use in the construction of one or more AIPs.
- The format of the SIP may vary from submitter to submitter, based on the submitters willingness and ability to provide the content and metadata in a specific format.
- For a given [Content Type](/preservation-documentation/policy/content-types), any requirements or restrictions on the type of content that can be contained in the SIP will be described in that Content Type\'s [Preservation Action Plan](/tags/preservation-action-plan).',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h3>Submission Information Package (SIP)</h3>

<ul>
<li>The information package that is delivered to $repo for use in the construction of one or more AIPs.</li>
<li>The format of the SIP may vary from submitter to submitter, based on the submitters willingness and ability to provide the content and metadata in a specific format.</li>
<li>For a given <a href="/preservation-documentation/policy/content-types">Content Type</a>, any requirements or restrictions on the type of content that can be contained in the SIP will be described in that Content Type\'s <a href="/tags/preservation-action-plan">Preservation Action Plan</a>.</li>
</ul>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 1,
        ),
        1 => array(
          'tid' => 3,
        ),
        2 => array(
          'tid' => 2,
        ),
        3 => array(
          'tid' => 8,
        ),
        4 => array(
          'tid' => 6,
        ),
      ),
    ),
  );

  $content['policy-digital-preservation-designated-community-definition'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/policy-digital-preservation-designated-community-definition',
      'router_path' => 'node/%',
      'link_title' => 'Digital Preservation Designated Community Definition',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_digital-preservation-designated-community-definition:node/11',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/policy-digital-preservation-designated-community-definition',
    ),
    'exported_path' => 'preservation-documentation/policy/digital-preservation-designated-community-definition',
    'title' => 'Digital Preservation Designated Community Definition',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389844228,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'policy-digital-preservation-designated-community-definition',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'The purpose of $institution\'s digital preservation efforts is to ensure long-term access to a critical mass of materials of significance to our community. We will emphasize Canadian heritage and scholarship, knowledge produced by $institution\'s researchers, and unique library and archival holdings from our collections. Our aim is to mobilize research and knowledge in an environment that allows for ease of searching, browsing, retrieval, and reuse. With this work, we intend to make a significant and ongoing contribution to the global digital library.

$institution\'s primary user community consists of, $institution:

* Faculty
* Staff
* Students

Secondary user communities include:

* Global community of researchers
* Wider community of scholarship
* Local community
* Elementary and secondary schools
* Journalist and data consumers 
* General public
* Incidental users',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<p>The purpose of $institution\'s digital preservation efforts is to ensure long-term access to a critical mass of materials of significance to our community. We will emphasize Canadian heritage and scholarship, knowledge produced by $institution\'s researchers, and unique library and archival holdings from our collections. Our aim is to mobilize research and knowledge in an environment that allows for ease of searching, browsing, retrieval, and reuse. With this work, we intend to make a significant and ongoing contribution to the global digital library.</p>

<p>$institution\'s primary user community consists of, $institution:</p>

<ul>
<li>Faculty</li>
<li>Staff</li>
<li>Students</li>
</ul>

<p>Secondary user communities include:</p>

<ul>
<li>Global community of researchers</li>
<li>Wider community of scholarship</li>
<li>Local community</li>
<li>Elementary and secondary schools</li>
<li>Journalist and data consumers </li>
<li>General public</li>
<li>Incidental users</li>
</ul>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 1,
        ),
        1 => array(
          'tid' => 2,
        ),
        2 => array(
          'tid' => 3,
        ),
        3 => array(
          'tid' => 8,
        ),
      ),
    ),
  );

  $content['policy-digital-preservation-implementation-plan'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/policy-digital-preservation-implementation-plan',
      'router_path' => 'node/%',
      'link_title' => 'Digital Preservation Implementation Plan',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_digital-preservation-implementation-plan:node/12',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/policy-digital-preservation-implementation-plan',
    ),
    'exported_path' => 'preservation-documentation/policy/digital-preservation-implementation-plan',
    'title' => 'Digital Preservation Implementation Plan',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389844398,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'policy-digital-preservation-implementation-plan',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '### Preservation Activities

$repo’s preservation strategies are based around the preservation of the intellectual content of the digital objects contained in $repo’s digital repositories through the transformation of these objects to delay or present file obsolescence. In the course of these transformations, priority is given to maintaining the information contained in an individual content object, as opposed to preserving its appearance or a specific question.

To this end, $repo utilizes the following approaches to preservation:

**Archival File Formats**: $repo is committed to the use of file formats that support long term sustainability. In general, the considerations for selecting file formats include the “openness” of the file format, its level of support as a preservation format in the academic/scholarly community, and its uptake among $repo’s [Designated Community](/preservation-documentation/policy/digital-preservation-designated-community-definition), as well as its well-suitedness to later format migration.

**Normalization**: As mentioned above, $repo works to identify file formats well-suited to its approach to preservation and access. Upon ingest, materials not conforming to $repo’s accepted standards will be converted to one of the previously identified formats. To the extent possible, $repo will attempt to preserve the essential characteristics of the object. In cases requiring compromise, transformations that maintain the content of the object will be prioritized over those that preserve the presentation.

**Format Migration**: When $repo perceives that a portion of its content is stored in a format that is at risk of obsolescence, a new version of this content will be created in a format more suited to long-term preservation and use. This transformation may consist of migration to a newer version of the content’s existing format, or transformation to a different format altogether. In all cases, preservation of the object’s intellectual content will be prioritized over the preservation of a specific presentation style.

**Bit Stream Copying**: $repo maintains regularly scheduled backups of all information contained in $repo’s digital repositories, for use in the event of data loss. In combination with regular fixity checks, which identify potentially damaged content, this process ensures the integrity of content in $repo’s digital repositories, and provides a foundation for its disaster recovery plans.

**Fixity Checking**: All materials in the repository are subject to regular fixity checks - comparisons of checksum values calculated at a given point in time with those generated at the material’s time of ingest. This activity, when combined with bit stream copying, mitigates the risk of objects becoming corrupt in the repository, as it enables the repository managers to identify damaged or corrupted content, and to revert to a valid version of the object from a previous point in time.

**Documentation of File Formats**: Upon ingest, every file in the repository is subject to identification of its file format and other significant characteristics. Also generated is a reference to the file format’s entry (if it exists) in PRONOM, the National Archive’s online format registry. This association ensures that information is always available on the internal structure of the file, and can be further used to determine when the format migration activity should take place (if allowed by the object’s preservation level) in order to mitigate the risks posed by the obsolete file formats.

### Preservation Levels

These preservation activities are applied to materials in the repository according to the material’s designated Preservation Level, as described in the [Digital Preservation Strategic Plan](/preservation-documentation/policy/digital-preservation-strategic-plan).

**Bit-level Preservation**: Items preserved at the Bit-level Preservation level will be subject to Bit Stream Copying, Fixity Checking, and Documentation of File Formats preservation activities. This is a baseline level of preservation activity which ensures that object, once ingested into the repository, can be maintained in a valid and uncorrupted state. It also attempts to provide representation information for the object through documentation of its file format, though at this level no migration activities will take place. This preservation level should be considered less robust than the “Full Preservation” level, and should only be considered in situations where Full Preservation is not a viable strategy. Common issues of unsuitability include lack of privilege to perform migration activities on the material, the presence of material in unknown or unsupported file formats, or the material’s failure to conform to a valid format.

**Full Preservation**: Items preserved at this level will receive the benefit of all of the above-mentioned preservation activities, as appropriate. Upon ingest into the repository, the material will undergo file format identification and normalization/transformation to archival file formats. As time goes on, these formats will be monitored by $repo staff, and should the criteria for format migration be met, the files will be migrated to a new format. In addition, all activities associated with the “Bit-level Preservation” preservation level will be carried out.

**No Preservation**: In rare cases, the repository may contain material for which $repo is unable or unwilling to accept preservation responsibility. Although incidental preservation activities may take place upon this material, $repo accepts no responsibility for its long-term accessibility or validity. This level is an exception to $repo’s digital preservation activities, rather than a part of its preservation strategy, but is included here for completeness. Examples of materials at this level would include objects that are known to be corrupt or not authorized for preservation at any level but which, for some reason, cannot be deleted immediately.',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h3>Preservation Activities</h3>

<p>$repo’s preservation strategies are based around the preservation of the intellectual content of the digital objects contained in $repo’s digital repositories through the transformation of these objects to delay or present file obsolescence. In the course of these transformations, priority is given to maintaining the information contained in an individual content object, as opposed to preserving its appearance or a specific question.</p>

<p>To this end, $repo utilizes the following approaches to preservation:</p>

<p><strong>Archival File Formats</strong>: $repo is committed to the use of file formats that support long term sustainability. In general, the considerations for selecting file formats include the “openness” of the file format, its level of support as a preservation format in the academic/scholarly community, and its uptake among $repo’s <a href="/preservation-documentation/policy/digital-preservation-designated-community-definition">Designated Community</a>, as well as its well-suitedness to later format migration.</p>

<p><strong>Normalization</strong>: As mentioned above, $repo works to identify file formats well-suited to its approach to preservation and access. Upon ingest, materials not conforming to $repo’s accepted standards will be converted to one of the previously identified formats. To the extent possible, $repo will attempt to preserve the essential characteristics of the object. In cases requiring compromise, transformations that maintain the content of the object will be prioritized over those that preserve the presentation.</p>

<p><strong>Format Migration</strong>: When $repo perceives that a portion of its content is stored in a format that is at risk of obsolescence, a new version of this content will be created in a format more suited to long-term preservation and use. This transformation may consist of migration to a newer version of the content’s existing format, or transformation to a different format altogether. In all cases, preservation of the object’s intellectual content will be prioritized over the preservation of a specific presentation style.</p>

<p><strong>Bit Stream Copying</strong>: $repo maintains regularly scheduled backups of all information contained in $repo’s digital repositories, for use in the event of data loss. In combination with regular fixity checks, which identify potentially damaged content, this process ensures the integrity of content in $repo’s digital repositories, and provides a foundation for its disaster recovery plans.</p>

<p><strong>Fixity Checking</strong>: All materials in the repository are subject to regular fixity checks - comparisons of checksum values calculated at a given point in time with those generated at the material’s time of ingest. This activity, when combined with bit stream copying, mitigates the risk of objects becoming corrupt in the repository, as it enables the repository managers to identify damaged or corrupted content, and to revert to a valid version of the object from a previous point in time.</p>

<p><strong>Documentation of File Formats</strong>: Upon ingest, every file in the repository is subject to identification of its file format and other significant characteristics. Also generated is a reference to the file format’s entry (if it exists) in PRONOM, the National Archive’s online format registry. This association ensures that information is always available on the internal structure of the file, and can be further used to determine when the format migration activity should take place (if allowed by the object’s preservation level) in order to mitigate the risks posed by the obsolete file formats.</p>

<h3>Preservation Levels</h3>

<p>These preservation activities are applied to materials in the repository according to the material’s designated Preservation Level, as described in the <a href="/preservation-documentation/policy/digital-preservation-strategic-plan">Digital Preservation Strategic Plan</a>.</p>

<p><strong>Bit-level Preservation</strong>: Items preserved at the Bit-level Preservation level will be subject to Bit Stream Copying, Fixity Checking, and Documentation of File Formats preservation activities. This is a baseline level of preservation activity which ensures that object, once ingested into the repository, can be maintained in a valid and uncorrupted state. It also attempts to provide representation information for the object through documentation of its file format, though at this level no migration activities will take place. This preservation level should be considered less robust than the “Full Preservation” level, and should only be considered in situations where Full Preservation is not a viable strategy. Common issues of unsuitability include lack of privilege to perform migration activities on the material, the presence of material in unknown or unsupported file formats, or the material’s failure to conform to a valid format.</p>

<p><strong>Full Preservation</strong>: Items preserved at this level will receive the benefit of all of the above-mentioned preservation activities, as appropriate. Upon ingest into the repository, the material will undergo file format identification and normalization/transformation to archival file formats. As time goes on, these formats will be monitored by $repo staff, and should the criteria for format migration be met, the files will be migrated to a new format. In addition, all activities associated with the “Bit-level Preservation” preservation level will be carried out.</p>

<p><strong>No Preservation</strong>: In rare cases, the repository may contain material for which $repo is unable or unwilling to accept preservation responsibility. Although incidental preservation activities may take place upon this material, $repo accepts no responsibility for its long-term accessibility or validity. This level is an exception to $repo’s digital preservation activities, rather than a part of its preservation strategy, but is included here for completeness. Examples of materials at this level would include objects that are known to be corrupt or not authorized for preservation at any level but which, for some reason, cannot be deleted immediately.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 1,
        ),
        1 => array(
          'tid' => 2,
        ),
        2 => array(
          'tid' => 3,
        ),
      ),
    ),
  );

  $content['policy-digital-preservation-rights-policy'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/policy-digital-preservation-rights-policy',
      'router_path' => 'node/%',
      'link_title' => 'Digital Preservation Rights Policy',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_digital-preservation-rights-policy:node/13',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/policy-digital-preservation-rights-policy',
    ),
    'exported_path' => 'preservation-documentation/policy/digital-preservation-rights-policy',
    'title' => 'Digital Preservation Rights Policy',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389844667,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'policy-digital-preservation-rights-policy',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '#### $repo Digital Preservation: Rights Policy

As outlined in the [Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan), $institution’s digital preservation strategies are based around the transformation of ingested content into file formats conducive to long term preservation, in addition to standard bit-level preservation. In order to enable the full realization of this strategy, there is one right that need to be acquired from the content providers:

#### Transformation

Content providers granting this right have consented to having their content migrated to new formats for the purposes of long-term preservation. In the interest of long-term preservation, it is important that $institution be allowed to transform files in its care from formats deemed as being in the danger of becoming obsolete into ones more suited to long-term interpretability. This is the right necessary to enable the “full” preservation level.

Without this right having been assigned, $institution can only ensure file integrity, no the preservation of the intellectual contents of an archival unit.',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h4>$repo Digital Preservation: Rights Policy</h4>

<p>As outlined in the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Preservation Implementation Plan</a>, $institution’s digital preservation strategies are based around the transformation of ingested content into file formats conducive to long term preservation, in addition to standard bit-level preservation. In order to enable the full realization of this strategy, there is one right that need to be acquired from the content providers:</p>

<h4>Transformation</h4>

<p>Content providers granting this right have consented to having their content migrated to new formats for the purposes of long-term preservation. In the interest of long-term preservation, it is important that $institution be allowed to transform files in its care from formats deemed as being in the danger of becoming obsolete into ones more suited to long-term interpretability. This is the right necessary to enable the “full” preservation level.</p>

<p>Without this right having been assigned, $institution can only ensure file integrity, no the preservation of the intellectual contents of an archival unit.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 1,
        ),
        1 => array(
          'tid' => 3,
        ),
        2 => array(
          'tid' => 2,
        ),
        3 => array(
          'tid' => 9,
        ),
      ),
    ),
  );

  $content['policy-digital-preservation-strategic-plan'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/policy-digital-preservation-strategic-plan',
      'router_path' => 'node/%',
      'link_title' => 'Digital Preservation Strategic Plan',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_digital-preservation-strategic-plan:node/14',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/policy-digital-preservation-strategic-plan',
    ),
    'exported_path' => 'preservation-documentation/policy/digital-preservation-strategic-plan',
    'title' => 'Digital Preservation Strategic Plan',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389844919,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'policy-digital-preservation-strategic-plan',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '### $repo Digital Preservation: Strategic Plan

“[Preservation is not a place into which content is put for safe-keeping, but rather, it is a process in which content evolves proactively and reactively through the application of strategy-embodying services.](http://ijdc.net/index.php/ijdc/article/viewFile/98/73)” 

The purpose of the $institution Digital Preservation Plan is to outline the digital preservation strategy used by $institution to ensure continued access to its digital collections by the Designated Community.

**Objectives**: The primary focus of the $repo’s digital preservation activities is on preserving the intellectual content of the materials digitized by the library, materials deposited into $repo, and born digital materials acquired by $institution. This means that $repo will prioritize the preservation of the content of all materials ingested, as opposed to the look and feel of the document.

The following properties are those which will be prioritized in all preservation activities:

- The intellectual content of the object in the repository. This will be defined on a collection-level, type-by-type basis and includes all supplemental materials and the relationship between these objects, as can be determined from metadata or other context at the time of ingest.
- Metadata included with the object at the time of ingest, especially that which relates it to other objects within the repository, or to the universe of its collection type overall.
- The intellectual rights to the object held by $repo and members of its designated community. While these properties are used to control access to the content and to determine its preservation level, they are also preserved themselves.

Secondary considerations in preservation include the following items. While not strictly a part of the intellectual content of the preservation object, these properties are necessary to ensure its preservation and as such must be tracked as well:

- The object’s chain of custody, starting as early as possible but at the very least from the time it entered the repository. This information is necessary in order to understand the history of the object, and to denote any transformations or changes that have occurred to the content. 
- Information on the object’s representation. For every digital object, some level of interpretation is necessary in order to transform the object from binary data into a human interpretable item.
- Fixity information. The repository will keep sufficient metadata on the object to ensure at any point in the future that the object remains in a complete and uncorrupted state.

The preservation of the above properties will be carried out using a transformative approach. That is, the formats (both at the file level and the metadata level) used in the repository will be constantly monitored (per the [Environmental Monitoring of Preservation Formats](/preservation-documentation/policy/environmental-monitoring-preservation-formats) policy) in order to ensure their suitability to long-term preservation. In instances where a format is deemed to present an unacceptable level of risk to the long-term viability of the content, an appropriate successor format will be chosen, with input from the Designated Community, and all materials in the existing format in question will be migrated over. Given $repo’s Strategic Plan (Steward $institution’s research assets), additional transformation may be made on the material in order to increase its findability. Such transformations will never be made in such a way as to endanger the long-term preservation of the material, and in situation where this would occur, the material so transformed will not be considered as part of the preservation plan.

**Scope**: $repo commits to preserving the materials for which it has accepted responsibility to the greatest degree possible. However, there are a number of criteria necessary to the repository’s ability to carry out this mission. In order to provide some level of preservation on materials for which not every criteria is met, $repo has defined multiple preservation levels, which indicate a level of preservation behaviours that $repo will use upon the content in question. For additional information on preservation levels, see the [Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan).

The criteria to be assessed when determining preservation level include:

- Rights: $repo should have appropriate rights to preserve the material in a matter consistent with its Preservation Strategies. At a minimum, $repo should have the right to locally load the content for archival purposes. In most cases, this should also include the ability to transform the content into new formats in the event that an existing one should become obsolete.
- Appropriate metadata: Content to be ingested into the repository should be accompanied by metadata sufficient to provide a meaninful context to the content, as understood by the Designated Community. This can include information situating the content withing its universe (e.g., keywords, bibliographic metadata) or information contributing to the object’s usability (e.g., dataset codebooks). The criteria for acceptabilty under this measure will be defined on a Content Type basis.
- Validity: The content object must be a well-formed and valid instance of the type of object it purports to be.
- Format Appropriateness: $repo will, for each Content Type, maintain a list of formats which will be deemed as acceptable for long-term preservation. This list will be based on the needs of the Designated Community, as well as the format’s future prospects for migration.

Compliance with all of these criteria is necessary for an object to be subject to the full extent of preservation activities., as defined in the Preservation Implementation Plan. Failure or partial compliance does not necessarily mean that an object cannot be ingested into the repository, but an inability to meet these criteria will result in the use of a less robust preservation plan.

**Review and Revision**: $repo commits to the review and revision of its preservation practices and the corresponding documentation, as outlined in the Review Cycle Policy.
',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h3>$repo Digital Preservation: Strategic Plan</h3>

<p>“<a href="http://ijdc.net/index.php/ijdc/article/viewFile/98/73">Preservation is not a place into which content is put for safe-keeping, but rather, it is a process in which content evolves proactively and reactively through the application of strategy-embodying services.</a>”</p>

<p>The purpose of the $institution Digital Preservation Plan is to outline the digital preservation strategy used by $institution to ensure continued access to its digital collections by the Designated Community.</p>

<p><strong>Objectives</strong>: The primary focus of the $repo’s digital preservation activities is on preserving the intellectual content of the materials digitized by the library, materials deposited into $repo, and born digital materials acquired by $institution. This means that $repo will prioritize the preservation of the content of all materials ingested, as opposed to the look and feel of the document.</p>

<p>The following properties are those which will be prioritized in all preservation activities:</p>

<ul>
<li>The intellectual content of the object in the repository. This will be defined on a collection-level, type-by-type basis and includes all supplemental materials and the relationship between these objects, as can be determined from metadata or other context at the time of ingest.</li>
<li>Metadata included with the object at the time of ingest, especially that which relates it to other objects within the repository, or to the universe of its collection type overall.</li>
<li>The intellectual rights to the object held by $repo and members of its designated community. While these properties are used to control access to the content and to determine its preservation level, they are also preserved themselves.</li>
</ul>

<p>Secondary considerations in preservation include the following items. While not strictly a part of the intellectual content of the preservation object, these properties are necessary to ensure its preservation and as such must be tracked as well:</p>

<ul>
<li>The object’s chain of custody, starting as early as possible but at the very least from the time it entered the repository. This information is necessary in order to understand the history of the object, and to denote any transformations or changes that have occurred to the content. </li>
<li>Information on the object’s representation. For every digital object, some level of interpretation is necessary in order to transform the object from binary data into a human interpretable item.</li>
<li>Fixity information. The repository will keep sufficient metadata on the object to ensure at any point in the future that the object remains in a complete and uncorrupted state.</li>
</ul>

<p>The preservation of the above properties will be carried out using a transformative approach. That is, the formats (both at the file level and the metadata level) used in the repository will be constantly monitored (per the <a href="/preservation-documentation/policy/environmental-monitoring-preservation-formats">Environmental Monitoring of Preservation Formats</a> policy) in order to ensure their suitability to long-term preservation. In instances where a format is deemed to present an unacceptable level of risk to the long-term viability of the content, an appropriate successor format will be chosen, with input from the Designated Community, and all materials in the existing format in question will be migrated over. Given $repo’s Strategic Plan (Steward $institution’s research assets), additional transformation may be made on the material in order to increase its findability. Such transformations will never be made in such a way as to endanger the long-term preservation of the material, and in situation where this would occur, the material so transformed will not be considered as part of the preservation plan.</p>

<p><strong>Scope</strong>: $repo commits to preserving the materials for which it has accepted responsibility to the greatest degree possible. However, there are a number of criteria necessary to the repository’s ability to carry out this mission. In order to provide some level of preservation on materials for which not every criteria is met, $repo has defined multiple preservation levels, which indicate a level of preservation behaviours that $repo will use upon the content in question. For additional information on preservation levels, see the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Preservation Implementation Plan</a>.</p>

<p>The criteria to be assessed when determining preservation level include:</p>

<ul>
<li>Rights: $repo should have appropriate rights to preserve the material in a matter consistent with its Preservation Strategies. At a minimum, $repo should have the right to locally load the content for archival purposes. In most cases, this should also include the ability to transform the content into new formats in the event that an existing one should become obsolete.</li>
<li>Appropriate metadata: Content to be ingested into the repository should be accompanied by metadata sufficient to provide a meaninful context to the content, as understood by the Designated Community. This can include information situating the content withing its universe (e.g., keywords, bibliographic metadata) or information contributing to the object’s usability (e.g., dataset codebooks). The criteria for acceptabilty under this measure will be defined on a Content Type basis.</li>
<li>Validity: The content object must be a well-formed and valid instance of the type of object it purports to be.</li>
<li>Format Appropriateness: $repo will, for each Content Type, maintain a list of formats which will be deemed as acceptable for long-term preservation. This list will be based on the needs of the Designated Community, as well as the format’s future prospects for migration.</li>
</ul>

<p>Compliance with all of these criteria is necessary for an object to be subject to the full extent of preservation activities., as defined in the Preservation Implementation Plan. Failure or partial compliance does not necessarily mean that an object cannot be ingested into the repository, but an inability to meet these criteria will result in the use of a less robust preservation plan.</p>

<p><strong>Review and Revision</strong>: $repo commits to the review and revision of its preservation practices and the corresponding documentation, as outlined in the Review Cycle Policy.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 1,
        ),
        1 => array(
          'tid' => 2,
        ),
        2 => array(
          'tid' => 3,
        ),
        3 => array(
          'tid' => 10,
        ),
      ),
    ),
  );

  $content['policy-environmental-monitoring-of-preservation-formats'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/policy-environmental-monitoring-of-preservation-formats',
      'router_path' => 'node/%',
      'link_title' => 'Environmental Monitoring of Preservation Formats',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_environmental-monitoring-of-preservation-formats:node/15',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/policy-environmental-monitoring-of-preservation-formats',
    ),
    'exported_path' => 'preservation-documentation/policy/environmental-monitoring-of-preservation-formats',
    'title' => 'Environmental Monitoring of Preservation Formats',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389845097,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'policy-environmental-monitoring-of-preservation-formats',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '$institution continuously monitors developments in the area of file formats to determine if/when formats preserved within the repository are in need of migration. This monitoring takes place through engagement in the digital preservation community, and through monitoring of blogs and mailing lists related to digital preservation.

A partial list of resources monitored includes, but is not limited to:

**Mailing Lists**

* [ARCAN-L](http://www.mailman.srv.ualberta.ca/mailman/listinfo/arcan-l)
* [padiforum-l](http://www.nla.gov.au/padi/forum/)
* [digipres-l](http://lists.ala.org/wws/info/digipres)
* [DIGITAL-PRESERVATION@JISCMAIL.AC.UK](https://www.jiscmail.ac.uk/cgi-bin/webadmin?A0=digital-preservation)
* [PREMIS Implementors Group](http://listserv.loc.gov/listarch/pig.html)
* [METS Mailing List](http://www.loc.gov/standards/mets/mets-list-enter.html)

**Blogs**

* [Agogified - blog of Bill Lefurgy, digital preservationist at LoC](http://agogified.com/)
* [Australian National Data Service blog](http://www.ands-partners.org/blog/)
* [ICPSR - Data Enclave in the Cloud](http://enclavecloud.blogspot.com/)
* [ICPSR - Technology at ICPSR](http://techaticpsr.blogspot.com/)
* [DSHR\'s Blog - David Rosenthal of Stanford/LOCKSS](http://blog.dshr.org/)
* [File Formats Blog - Gary McGath of Harvard/JHOVE](http://fileformats.wordpress.com/)
* [Neil Beagrie\'s Blog - European digital preservation consultant](http://blog.beagrie.com/)
* [Practical E-Records - Chris Prom of UIUC](http://e-records.chrisprom.com/)
* [Ten Thousand Year Blog - David Mattison, Canadian archivist](http://tenthousandyearblog.blogspot.com/)

**Journals**

* [Ariadne](http://www.ariadne.ac.uk/)
* [D-Lib](http://www.dlib.org/)
* [International Journal of Digital Curation](http://www.ijdc.net/)
* [International Journal on Digital Libraries](http://www.dljournal.org/)
* [Journal of the American Society for Information Science and Technology](http://www.asis.org/Publications/JASIS/jasis.html)
* [Journal of Digital Information](http://journals.tdl.org/jodi)
* [Journal of Electronic Publishing](http://www.journalofelectronicpublishing.org/)
* [World Digital Libraries](http://bookstore.teriin.org/journal_inside.php?material_id=477&qty=1)',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<p>$institution continuously monitors developments in the area of file formats to determine if/when formats preserved within the repository are in need of migration. This monitoring takes place through engagement in the digital preservation community, and through monitoring of blogs and mailing lists related to digital preservation.</p>

<p>A partial list of resources monitored includes, but is not limited to:</p>

<p><strong>Mailing Lists</strong></p>

<ul>
<li><a href="http://www.mailman.srv.ualberta.ca/mailman/listinfo/arcan-l">ARCAN-L</a></li>
<li><a href="http://www.nla.gov.au/padi/forum/">padiforum-l</a></li>
<li><a href="http://lists.ala.org/wws/info/digipres">digipres-l</a></li>
<li><a href="https://www.jiscmail.ac.uk/cgi-bin/webadmin?A0=digital-preservation">DIGITAL-PRESERVATION@JISCMAIL.AC.UK</a></li>
<li><a href="http://listserv.loc.gov/listarch/pig.html">PREMIS Implementors Group</a></li>
<li><a href="http://www.loc.gov/standards/mets/mets-list-enter.html">METS Mailing List</a></li>
</ul>

<p><strong>Blogs</strong></p>

<ul>
<li><a href="http://agogified.com/">Agogified - blog of Bill Lefurgy, digital preservationist at LoC</a></li>
<li><a href="http://www.ands-partners.org/blog/">Australian National Data Service blog</a></li>
<li><a href="http://enclavecloud.blogspot.com/">ICPSR - Data Enclave in the Cloud</a></li>
<li><a href="http://techaticpsr.blogspot.com/">ICPSR - Technology at ICPSR</a></li>
<li><a href="http://blog.dshr.org/">DSHR\'s Blog - David Rosenthal of Stanford/LOCKSS</a></li>
<li><a href="http://fileformats.wordpress.com/">File Formats Blog - Gary McGath of Harvard/JHOVE</a></li>
<li><a href="http://blog.beagrie.com/">Neil Beagrie\'s Blog - European digital preservation consultant</a></li>
<li><a href="http://e-records.chrisprom.com/">Practical E-Records - Chris Prom of UIUC</a></li>
<li><a href="http://tenthousandyearblog.blogspot.com/">Ten Thousand Year Blog - David Mattison, Canadian archivist</a></li>
</ul>

<p><strong>Journals</strong></p>

<ul>
<li><a href="http://www.ariadne.ac.uk/">Ariadne</a></li>
<li><a href="http://www.dlib.org/">D-Lib</a></li>
<li><a href="http://www.ijdc.net/">International Journal of Digital Curation</a></li>
<li><a href="http://www.dljournal.org/">International Journal on Digital Libraries</a></li>
<li><a href="http://www.asis.org/Publications/JASIS/jasis.html">Journal of the American Society for Information Science and Technology</a></li>
<li><a href="http://journals.tdl.org/jodi">Journal of Digital Information</a></li>
<li><a href="http://www.journalofelectronicpublishing.org/">Journal of Electronic Publishing</a></li>
<li><a href="http://bookstore.teriin.org/journal_inside.php?material_id=477&amp;qty=1">World Digital Libraries</a></li>
</ul>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 1,
        ),
        1 => array(
          'tid' => 3,
        ),
        2 => array(
          'tid' => 2,
        ),
        3 => array(
          'tid' => 11,
        ),
      ),
    ),
  );

  $content['policy-fixity-procedures'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/policy-fixity-procedures',
      'router_path' => 'node/%',
      'link_title' => 'Fixity procedures',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_fixity-procedures:node/16',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/policy-fixity-procedures',
    ),
    'exported_path' => 'preservation-documentation/policy/fixity-procedures',
    'title' => 'Fixity procedures',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389846106,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'policy-fixity-procedures',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '#### Policy Statement

$institution are committed to maintaining the integrity of objects in its care. This includes creating checksums for all archival format objects -- plus associated datastreams -- ingested into the repository, and regular fixity checking of those objects.

#### Implementation

At the time of ingest an MD5 checksum value is calculated for the archival format object, and is stored along the object in the repository.

Daily, a set number of  files in the repository will have their current checksum calculated (using a single checksum) and compared to this stored value, which is expected to match. In cases where the calculated and stored values do not match, this is reported to the repository manager.
',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h4>Policy Statement</h4>

<p>$institution are committed to maintaining the integrity of objects in its care. This includes creating checksums for all archival format objects -- plus associated datastreams -- ingested into the repository, and regular fixity checking of those objects.</p>

<h4>Implementation</h4>

<p>At the time of ingest an MD5 checksum value is calculated for the archival format object, and is stored along the object in the repository.</p>

<p>Daily, a set number of  files in the repository will have their current checksum calculated (using a single checksum) and compared to this stored value, which is expected to match. In cases where the calculated and stored values do not match, this is reported to the repository manager.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 1,
        ),
        1 => array(
          'tid' => 2,
        ),
        2 => array(
          'tid' => 3,
        ),
      ),
    ),
  );

  $content['policy-registry-of-file-formats'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/policy-registry-of-file-formats',
      'router_path' => 'node/%',
      'link_title' => 'Registry of file formats',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_registry-of-file-formats:node/10',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/policy-registry-of-file-formats',
    ),
    'exported_path' => 'preservation-documentation/policy/registry-of-file-formats',
    'title' => 'Registry of file formats',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389843790,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'policy-registry-of-file-formats',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '### Policy Statement

$repo requires immediate identification of the type of file format submitted in order to help mitigate risk posed by format obsolescence. To this end, $repo employs the use of [DROID](http://www.nationalarchives.gov.uk/information-management/projects-and-work/droid.htm), [JHOVE](http://jhove.sourceforge.net/), [file utility](http://unixhelp.ed.ac.uk/CGI/man-cgi?file), [Exiftool](http://www.sno.phy.queensu.ca/~phil/exiftool/), [PRONOM](http://www.nationalarchives.gov.uk/PRONOM/Default.aspx), [NLNZ Metadata Extractor](http://meta-extractor.sourceforge.net/), [ffident](http://web.archive.org/web/20061106114156/http://schmidt.devlib.org/ffident/index.html), and [Tika](http://tika.apache.org/) through the [FITS](http://code.google.com/p/fits/) software package.

While $repo is not dependent on or restricted to any particular format or group of formats, it aims to use well-known, widely accepted formats that support long-term preservation. If a submitter wants to use a specific format not meeting these criteria, an agreement must be reached between the submitter and $repo.

### Implementation Examples

$repo makes use of FITS for format identification during the ingestion process where a file format is associated with each file.

Example characterization and reference to format registry:
~~~~
    <?xml version="1.0" encoding="UTF-8"?>
    <fits xmlns="http://hul.harvard.edu/ois/xml/ns/fits/fits_output" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://hul.harvard.edu/ois/xml/ns/fits/fits_output http://hul.harvard.edu/ois/xml/xsd/fits/fits_output.xsd" version="0.7.4 (fits-mcgath fork)" timestamp="02/07/13 4:26 PM">
      <identification>
        <identity format="Tagged Image File Format" mimetype="image/tiff" toolname="FITS" toolversion="0.7.4 (fits-mcgath fork)">
          <tool toolname="Jhove" toolversion="1.9" />
          <tool toolname="file utility" toolversion="5.09" />
          <tool toolname="Exiftool" toolversion="9.13" />
          <tool toolname="NLNZ Metadata Extractor" toolversion="3.4GA" />
          <tool toolname="ffident" toolversion="0.2" />
          <tool toolname="Tika" toolversion="1.3" />
          <version toolname="Jhove" toolversion="1.9">5.0</version>
        </identity>
      </identification>
      <fileinfo>
        <size toolname="Jhove" toolversion="1.9">33543972</size>
        <creatingApplicationName toolname="Exiftool" toolversion="9.13">Adobe Photoshop Elements 2.0</creatingApplicationName>
        <lastmodified toolname="Exiftool" toolversion="9.13" status="CONFLICT">2007:03:09 11:00:49-05:00</lastmodified>
        <lastmodified toolname="Tika" toolversion="1.3" status="CONFLICT">2007-03-09T11:00:48</lastmodified>
        <filepath toolname="OIS File Information" toolversion="0.1" status="SINGLE_RESULT">/mnt/DIY/Archives/ASC/tiffs/02000-02999/ASC02000.tif</filepath>
        <filename toolname="OIS File Information" toolversion="0.1" status="SINGLE_RESULT">/mnt/DIY/Archives/ASC/tiffs/02000-02999/ASC02000.tif</filename>
        <md5checksum toolname="OIS File Information" toolversion="0.1" status="SINGLE_RESULT">b2b263bf5207481e42ac5945538ec985</md5checksum>
        <fslastmodified toolname="OIS File Information" toolversion="0.1" status="SINGLE_RESULT">1173456049000</fslastmodified>
      </fileinfo>
      <filestatus>
        <well-formed toolname="Jhove" toolversion="1.9" status="SINGLE_RESULT">true</well-formed>
        <valid toolname="Jhove" toolversion="1.9" status="SINGLE_RESULT">true</valid>
      </filestatus>
      <metadata>
        <image>
          <byteOrder toolname="Jhove" toolversion="1.9" status="SINGLE_RESULT">little endian</byteOrder>
          <compressionScheme toolname="Jhove" toolversion="1.9">Uncompressed</compressionScheme>
          <imageWidth toolname="Jhove" toolversion="1.9">7108</imageWidth>
          <imageHeight toolname="Exiftool" toolversion="9.13">4716</imageHeight>
          <colorSpace toolname="Jhove" toolversion="1.9">BlackIsZero</colorSpace>
          <orientation toolname="Jhove" toolversion="1.9" status="SINGLE_RESULT">normal*</orientation>
          <samplingFrequencyUnit toolname="Jhove" toolversion="1.9" status="CONFLICT">in.</samplingFrequencyUnit>
          <samplingFrequencyUnit toolname="Tika" toolversion="1.3" status="CONFLICT">Inch</samplingFrequencyUnit>
          <xSamplingFrequency toolname="Jhove" toolversion="1.9" status="CONFLICT">6000000/10000</xSamplingFrequency>
          <xSamplingFrequency toolname="Exiftool" toolversion="9.13" status="CONFLICT">600</xSamplingFrequency>
          <xSamplingFrequency toolname="NLNZ Metadata Extractor" toolversion="3.4GA" status="CONFLICT">600.0</xSamplingFrequency>
          <ySamplingFrequency toolname="Jhove" toolversion="1.9" status="CONFLICT">6000000/10000</ySamplingFrequency>
          <ySamplingFrequency toolname="Exiftool" toolversion="9.13" status="CONFLICT">600</ySamplingFrequency>
          <ySamplingFrequency toolname="NLNZ Metadata Extractor" toolversion="3.4GA" status="CONFLICT">600.0</ySamplingFrequency>
          <bitsPerSample toolname="Jhove" toolversion="1.9" status="CONFLICT">integer</bitsPerSample>
          <bitsPerSample toolname="Exiftool" toolversion="9.13" status="CONFLICT">8</bitsPerSample>
          <samplesPerPixel toolname="Jhove" toolversion="1.9">1</samplesPerPixel>
          <scanningSoftwareName toolname="Jhove" toolversion="1.9">Adobe Photoshop Elements 2.0</scanningSoftwareName>
          <YSamplingFrequency toolname="Tika" toolversion="1.3" status="SINGLE_RESULT">600.0</YSamplingFrequency>
        </image>
      </metadata>
    </fits>
~~~~',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h3>Policy Statement</h3>

<p>$repo requires immediate identification of the type of file format submitted in order to help mitigate risk posed by format obsolescence. To this end, $repo employs the use of <a href="http://www.nationalarchives.gov.uk/information-management/projects-and-work/droid.htm">DROID</a>, <a href="http://jhove.sourceforge.net/">JHOVE</a>, <a href="http://unixhelp.ed.ac.uk/CGI/man-cgi?file">file utility</a>, <a href="http://www.sno.phy.queensu.ca/~phil/exiftool/">Exiftool</a>, <a href="http://www.nationalarchives.gov.uk/PRONOM/Default.aspx">PRONOM</a>, <a href="http://meta-extractor.sourceforge.net/">NLNZ Metadata Extractor</a>, <a href="http://web.archive.org/web/20061106114156/http://schmidt.devlib.org/ffident/index.html">ffident</a>, and <a href="http://tika.apache.org/">Tika</a> through the <a href="http://code.google.com/p/fits/">FITS</a> software package.</p>

<p>While $repo is not dependent on or restricted to any particular format or group of formats, it aims to use well-known, widely accepted formats that support long-term preservation. If a submitter wants to use a specific format not meeting these criteria, an agreement must be reached between the submitter and $repo.</p>

<h3>Implementation Examples</h3>

<p>$repo makes use of FITS for format identification during the ingestion process where a file format is associated with each file.</p>

<p>Example characterization and reference to format registry:</p>

<pre><code>    &lt;?xml version="1.0" encoding="UTF-8"?&gt;
    &lt;fits xmlns="http://hul.harvard.edu/ois/xml/ns/fits/fits_output" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://hul.harvard.edu/ois/xml/ns/fits/fits_output http://hul.harvard.edu/ois/xml/xsd/fits/fits_output.xsd" version="0.7.4 (fits-mcgath fork)" timestamp="02/07/13 4:26 PM"&gt;
      &lt;identification&gt;
        &lt;identity format="Tagged Image File Format" mimetype="image/tiff" toolname="FITS" toolversion="0.7.4 (fits-mcgath fork)"&gt;
          &lt;tool toolname="Jhove" toolversion="1.9" /&gt;
          &lt;tool toolname="file utility" toolversion="5.09" /&gt;
          &lt;tool toolname="Exiftool" toolversion="9.13" /&gt;
          &lt;tool toolname="NLNZ Metadata Extractor" toolversion="3.4GA" /&gt;
          &lt;tool toolname="ffident" toolversion="0.2" /&gt;
          &lt;tool toolname="Tika" toolversion="1.3" /&gt;
          &lt;version toolname="Jhove" toolversion="1.9"&gt;5.0&lt;/version&gt;
        &lt;/identity&gt;
      &lt;/identification&gt;
      &lt;fileinfo&gt;
        &lt;size toolname="Jhove" toolversion="1.9"&gt;33543972&lt;/size&gt;
        &lt;creatingApplicationName toolname="Exiftool" toolversion="9.13"&gt;Adobe Photoshop Elements 2.0&lt;/creatingApplicationName&gt;
        &lt;lastmodified toolname="Exiftool" toolversion="9.13" status="CONFLICT"&gt;2007:03:09 11:00:49-05:00&lt;/lastmodified&gt;
        &lt;lastmodified toolname="Tika" toolversion="1.3" status="CONFLICT"&gt;2007-03-09T11:00:48&lt;/lastmodified&gt;
        &lt;filepath toolname="OIS File Information" toolversion="0.1" status="SINGLE_RESULT"&gt;/mnt/DIY/Archives/ASC/tiffs/02000-02999/ASC02000.tif&lt;/filepath&gt;
        &lt;filename toolname="OIS File Information" toolversion="0.1" status="SINGLE_RESULT"&gt;/mnt/DIY/Archives/ASC/tiffs/02000-02999/ASC02000.tif&lt;/filename&gt;
        &lt;md5checksum toolname="OIS File Information" toolversion="0.1" status="SINGLE_RESULT"&gt;b2b263bf5207481e42ac5945538ec985&lt;/md5checksum&gt;
        &lt;fslastmodified toolname="OIS File Information" toolversion="0.1" status="SINGLE_RESULT"&gt;1173456049000&lt;/fslastmodified&gt;
      &lt;/fileinfo&gt;
      &lt;filestatus&gt;
        &lt;well-formed toolname="Jhove" toolversion="1.9" status="SINGLE_RESULT"&gt;true&lt;/well-formed&gt;
        &lt;valid toolname="Jhove" toolversion="1.9" status="SINGLE_RESULT"&gt;true&lt;/valid&gt;
      &lt;/filestatus&gt;
      &lt;metadata&gt;
        &lt;image&gt;
          &lt;byteOrder toolname="Jhove" toolversion="1.9" status="SINGLE_RESULT"&gt;little endian&lt;/byteOrder&gt;
          &lt;compressionScheme toolname="Jhove" toolversion="1.9"&gt;Uncompressed&lt;/compressionScheme&gt;
          &lt;imageWidth toolname="Jhove" toolversion="1.9"&gt;7108&lt;/imageWidth&gt;
          &lt;imageHeight toolname="Exiftool" toolversion="9.13"&gt;4716&lt;/imageHeight&gt;
          &lt;colorSpace toolname="Jhove" toolversion="1.9"&gt;BlackIsZero&lt;/colorSpace&gt;
          &lt;orientation toolname="Jhove" toolversion="1.9" status="SINGLE_RESULT"&gt;normal*&lt;/orientation&gt;
          &lt;samplingFrequencyUnit toolname="Jhove" toolversion="1.9" status="CONFLICT"&gt;in.&lt;/samplingFrequencyUnit&gt;
          &lt;samplingFrequencyUnit toolname="Tika" toolversion="1.3" status="CONFLICT"&gt;Inch&lt;/samplingFrequencyUnit&gt;
          &lt;xSamplingFrequency toolname="Jhove" toolversion="1.9" status="CONFLICT"&gt;6000000/10000&lt;/xSamplingFrequency&gt;
          &lt;xSamplingFrequency toolname="Exiftool" toolversion="9.13" status="CONFLICT"&gt;600&lt;/xSamplingFrequency&gt;
          &lt;xSamplingFrequency toolname="NLNZ Metadata Extractor" toolversion="3.4GA" status="CONFLICT"&gt;600.0&lt;/xSamplingFrequency&gt;
          &lt;ySamplingFrequency toolname="Jhove" toolversion="1.9" status="CONFLICT"&gt;6000000/10000&lt;/ySamplingFrequency&gt;
          &lt;ySamplingFrequency toolname="Exiftool" toolversion="9.13" status="CONFLICT"&gt;600&lt;/ySamplingFrequency&gt;
          &lt;ySamplingFrequency toolname="NLNZ Metadata Extractor" toolversion="3.4GA" status="CONFLICT"&gt;600.0&lt;/ySamplingFrequency&gt;
          &lt;bitsPerSample toolname="Jhove" toolversion="1.9" status="CONFLICT"&gt;integer&lt;/bitsPerSample&gt;
          &lt;bitsPerSample toolname="Exiftool" toolversion="9.13" status="CONFLICT"&gt;8&lt;/bitsPerSample&gt;
          &lt;samplesPerPixel toolname="Jhove" toolversion="1.9"&gt;1&lt;/samplesPerPixel&gt;
          &lt;scanningSoftwareName toolname="Jhove" toolversion="1.9"&gt;Adobe Photoshop Elements 2.0&lt;/scanningSoftwareName&gt;
          &lt;YSamplingFrequency toolname="Tika" toolversion="1.3" status="SINGLE_RESULT"&gt;600.0&lt;/YSamplingFrequency&gt;
        &lt;/image&gt;
      &lt;/metadata&gt;
    &lt;/fits&gt;
</code></pre>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 1,
        ),
        1 => array(
          'tid' => 3,
        ),
        2 => array(
          'tid' => 2,
        ),
        3 => array(
          'tid' => 7,
        ),
      ),
    ),
  );

  $content['policy-url-and-file-naming-policy'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/policy-url-and-file-naming-policy',
      'router_path' => 'node/%',
      'link_title' => 'URL and File Naming Policy',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_url-and-file-naming-policy:node/17',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/policy-url-and-file-naming-policy',
    ),
    'exported_path' => 'preservation-documentation/policy/url-and-file-naming-policy',
    'title' => 'URL and File Naming Policy',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389846576,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'policy-url-and-file-naming-policy',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '**DRAFT**

## Policy Statement

URIs created by $repo

* $repo uses a systematic convention to generate unambiguously unique identification for digital objects within its repository. This convention will create a stable name or reference to an object that can be permanently associated with that object, regardless of future changes to organizational structure or to digital access protocols.
* This is in conformance with section 4.2.4 of Metrics for Digital Repository Audit and Certification (CCSDS, June 2009) which states that a compliant repository "shall have and use a convention that generates persistent, unique identifiers for all AIPs" and "its components."
* This convention will ensure that “each AIP can be unambiguously found in the future” and that "each AIP can be distinguished from all other AIPs in the repository"

## Implementation

### Islandora object

$repo canonical URIs are consistently constructed in the folloiwng manner:

* `/islandora/object/PID`

These URIs are aliased using [Islandora Pathauto](https://github.com/rosiel/islandora_pathauto) to the following pattern:

* `[fedora:pid]/[fedora:label]`

Example:

* **Photograph**: New Woodbine : racehorses train for opening of season
* **Canonical URI**: http://digital.library.yorku.ca/islandora/object/ydl:88675
* **Aliases URL**: http://digital.library.yorku.ca/yul-88675/new-woodbine-racehorses-train-opening-season',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<p><strong>DRAFT</strong></p>

<h2>Policy Statement</h2>

<p>URIs created by $repo</p>

<ul>
<li>$repo uses a systematic convention to generate unambiguously unique identification for digital objects within its repository. This convention will create a stable name or reference to an object that can be permanently associated with that object, regardless of future changes to organizational structure or to digital access protocols.</li>
<li>This is in conformance with section 4.2.4 of Metrics for Digital Repository Audit and Certification (CCSDS, June 2009) which states that a compliant repository "shall have and use a convention that generates persistent, unique identifiers for all AIPs" and "its components."</li>
<li>This convention will ensure that “each AIP can be unambiguously found in the future” and that "each AIP can be distinguished from all other AIPs in the repository"</li>
</ul>

<h2>Implementation</h2>

<h3>Islandora object</h3>

<p>$repo canonical URIs are consistently constructed in the folloiwng manner:</p>

<ul>
<li><code>/islandora/object/PID</code></li>
</ul>

<p>These URIs are aliased using <a href="https://github.com/rosiel/islandora_pathauto">Islandora Pathauto</a> to the following pattern:</p>

<ul>
<li><code>[fedora:pid]/[fedora:label]</code></li>
</ul>

<p>Example:</p>

<ul>
<li><strong>Photograph</strong>: New Woodbine : racehorses train for opening of season</li>
<li><strong>Canonical URI</strong>: http://digital.library.yorku.ca/islandora/object/ydl:88675</li>
<li><strong>Aliases URL</strong>: http://digital.library.yorku.ca/yul-88675/new-woodbine-racehorses-train-opening-season</li>
</ul>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 1,
        ),
        1 => array(
          'tid' => 2,
        ),
        2 => array(
          'tid' => 3,
        ),
      ),
    ),
  );

  $content['preservation-action-plans-audio'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/preservation-action-plans-audio',
      'router_path' => 'node/%',
      'link_title' => 'Audio - Preservation Action Plan',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_audio---preservation-action-plan:node/18',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/preservation-action-plans-audio',
    ),
    'exported_path' => 'preservation-documentation/preservation-action-plans/audio',
    'title' => 'Audio - Preservation Action Plan',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389846803,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'preservation-action-plans-audio',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '## Audio - Preservation Action Plan

#### Introduction

This document describes the preservation plan for audio content in the $repo. Most of the audio content content is from the Sound and Moving Image Library and the Clara Thomas Archives and Special Collections. The preservation plan for audio content follows from policies and practices described in the [Digital Preservation Strategic Plan](/preservation-documentation/policy/digital-preservation-implementation-plan) and the [Digital Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan). This document explains practical steps that $institution takes to preserve the intellectual content of audio in digital format. It outlines the basic tools, methods, and standards used for the long-term preservation of audio content.

#### Content Formats

For the preservation of audio content, $institution require WAV or FLAC versions of the content, and descriptive metadata. During the ingest process, derivatives are created for streaming. $institution continuously monitors developments in file formats to determine if and when formats require migration (see [Environmental Monitoring of Preservation Formats](/preservation-documentation/policy/environmental-monitoring-preservation-formats)).

#### SIP Format

Audio SIPs (see [Definition of SIP](/preservation-documentation/policy/definition-of-sip)) generally consist of a WAV or FLAC file, and an associated MODS descriptive metadata file.

#### Analysis on Ingest

Upon ingest, every file in the repository is subject to identification of its file format and validation using FITS. The output of the FITS identification and validation processes are recorded to a techincal metadata datastream (TECHMD) that is associated with the object in the repository.

#### Content Excluded

$institution do not ingest files that are not referenced (either as part of a representation or as associated datastreams) in the associated metadata. As the SIP is retained, these files can later be ingested if necessary.

#### Format Normalization

There is no format normailziation if the submitted object is a WAV or FLAC.

#### Metadata Normalization

When necessary, $institution crosswalk descriptive metadata from MODS to Dublin Core. The repository creates preservation metadata for each file. The preservation level, explained in the [Digital Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan), is applied to each file upon ingest and recorded in the preservation metadata for each file.

#### Acceptable Formats

For the Full Preservation level for audio, currently the acceptable formats are WAV and FLAC. Audio submissions may be MP3 format, however they will be preserved at the Bit-level Preservation level.
',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h2>Audio - Preservation Action Plan</h2>

<h4>Introduction</h4>

<p>This document describes the preservation plan for audio content in the $repo. Most of the audio content content is from the Sound and Moving Image Library and the Clara Thomas Archives and Special Collections. The preservation plan for audio content follows from policies and practices described in the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Strategic Plan</a> and the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Implementation Plan</a>. This document explains practical steps that $institution takes to preserve the intellectual content of audio in digital format. It outlines the basic tools, methods, and standards used for the long-term preservation of audio content.</p>

<h4>Content Formats</h4>

<p>For the preservation of audio content, $institution require WAV or FLAC versions of the content, and descriptive metadata. During the ingest process, derivatives are created for streaming. $institution continuously monitors developments in file formats to determine if and when formats require migration (see <a href="/preservation-documentation/policy/environmental-monitoring-preservation-formats">Environmental Monitoring of Preservation Formats</a>).</p>

<h4>SIP Format</h4>

<p>Audio SIPs (see <a href="/preservation-documentation/policy/definition-of-sip">Definition of SIP</a>) generally consist of a WAV or FLAC file, and an associated MODS descriptive metadata file.</p>

<h4>Analysis on Ingest</h4>

<p>Upon ingest, every file in the repository is subject to identification of its file format and validation using FITS. The output of the FITS identification and validation processes are recorded to a techincal metadata datastream (TECHMD) that is associated with the object in the repository.</p>

<h4>Content Excluded</h4>

<p>$institution do not ingest files that are not referenced (either as part of a representation or as associated datastreams) in the associated metadata. As the SIP is retained, these files can later be ingested if necessary.</p>

<h4>Format Normalization</h4>

<p>There is no format normailziation if the submitted object is a WAV or FLAC.</p>

<h4>Metadata Normalization</h4>

<p>When necessary, $institution crosswalk descriptive metadata from MODS to Dublin Core. The repository creates preservation metadata for each file. The preservation level, explained in the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Implementation Plan</a>, is applied to each file upon ingest and recorded in the preservation metadata for each file.</p>

<h4>Acceptable Formats</h4>

<p>For the Full Preservation level for audio, currently the acceptable formats are WAV and FLAC. Audio submissions may be MP3 format, however they will be preserved at the Bit-level Preservation level.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 3,
        ),
        1 => array(
          'tid' => 12,
        ),
        2 => array(
          'tid' => 13,
        ),
      ),
    ),
  );

  $content['preservation-action-plans-image'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/preservation-action-plans-image',
      'router_path' => 'node/%',
      'link_title' => 'Image - Preservation Action Plan',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_image---preservation-action-plan:node/19',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/preservation-action-plans-image',
    ),
    'exported_path' => 'preservation-documentation/preservation-action-plans/image',
    'title' => 'Image - Preservation Action Plan',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389847093,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'preservation-action-plans-image',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '#### Introduction

This document describes the preservation plan for image content in the $repo. Most of the image content content is from the Clara Thomas Archives and Special Collections. The preservation plan for image content follows from policies and practices described in the [Digital Preservation Strategic Plan](/preservation-documentation/policy/digital-preservation-implementation-plan) and the [Digital Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan). This document explains practical steps that $institution take to preserve the intellectual content of image in digital format. It outlines the basic tools, methods, and standards used for the long-term preservation of image content.

#### Content Formats

For the preservation of image content, $institution require uncompressed TIF versions of the content, and descriptive metadata. During the ingest process, derivatives are created for display. $institution continuously monitors developments in file formats to determine if and when formats require migration (see [Environmental Monitoring of Preservation Formats](/preservation-documentation/policy/environmental-monitoring-preservation-formats)).

#### SIP Format

Image SIPs (see [Definition of SIP](/preservation-documentation/policy/definition-of-sip)) generally consist of a TIF file, and an associated MODS descriptive metadata file.

#### Analysis on Ingest

Upon ingest, every file in the repository is subject to identification of its file format and validation using FITS. The output of the FITS identification and validation processes are recorded to a techincal metadata datastream (TECHMD) that is associated with the object in the repository.

#### Content Excluded

$institution do not ingest files that are not referenced (either as part of a representation or as associated datastreams) in the associated metadata. As the SIP is retained, these files can later be ingested if necessary.

#### Format Normalization

There is no format normailziation if the submitted object is a TIF.

#### Metadata Normalization

When necessary, $institution crosswalk descriptive metadata from MODS to Dublin Core. The repository creates preservation metadata for each file. The preservation level, explained in the [Digital Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan), is applied to each file upon ingest and recorded in the preservation metadata for each file.

#### Acceptable Formats

For the Full Preservation level for image, currently the acceptable formats are TIF. Image submissions may be JPG or PNG format, however they will be preserved at the Bit-level Preservation level.
',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h4>Introduction</h4>

<p>This document describes the preservation plan for image content in the $repo. Most of the image content content is from the Clara Thomas Archives and Special Collections. The preservation plan for image content follows from policies and practices described in the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Strategic Plan</a> and the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Implementation Plan</a>. This document explains practical steps that $institution take to preserve the intellectual content of image in digital format. It outlines the basic tools, methods, and standards used for the long-term preservation of image content.</p>

<h4>Content Formats</h4>

<p>For the preservation of image content, $institution require uncompressed TIF versions of the content, and descriptive metadata. During the ingest process, derivatives are created for display. $institution continuously monitors developments in file formats to determine if and when formats require migration (see <a href="/preservation-documentation/policy/environmental-monitoring-preservation-formats">Environmental Monitoring of Preservation Formats</a>).</p>

<h4>SIP Format</h4>

<p>Image SIPs (see <a href="/preservation-documentation/policy/definition-of-sip">Definition of SIP</a>) generally consist of a TIF file, and an associated MODS descriptive metadata file.</p>

<h4>Analysis on Ingest</h4>

<p>Upon ingest, every file in the repository is subject to identification of its file format and validation using FITS. The output of the FITS identification and validation processes are recorded to a techincal metadata datastream (TECHMD) that is associated with the object in the repository.</p>

<h4>Content Excluded</h4>

<p>$institution do not ingest files that are not referenced (either as part of a representation or as associated datastreams) in the associated metadata. As the SIP is retained, these files can later be ingested if necessary.</p>

<h4>Format Normalization</h4>

<p>There is no format normailziation if the submitted object is a TIF.</p>

<h4>Metadata Normalization</h4>

<p>When necessary, $institution crosswalk descriptive metadata from MODS to Dublin Core. The repository creates preservation metadata for each file. The preservation level, explained in the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Implementation Plan</a>, is applied to each file upon ingest and recorded in the preservation metadata for each file.</p>

<h4>Acceptable Formats</h4>

<p>For the Full Preservation level for image, currently the acceptable formats are TIF. Image submissions may be JPG or PNG format, however they will be preserved at the Bit-level Preservation level.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 3,
        ),
        1 => array(
          'tid' => 2,
        ),
        2 => array(
          'tid' => 12,
        ),
      ),
    ),
  );

  $content['preservation-action-plans-theses'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/preservation-action-plans-theses',
      'router_path' => 'node/%',
      'link_title' => 'Theses - Preservation Action Plan',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_theses---preservation-action-plan:node/20',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/preservation-action-plans-theses',
    ),
    'exported_path' => 'preservation-documentation/preservation-action-plans/theses',
    'title' => 'Theses - Preservation Action Plan',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389847720,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'preservation-action-plans-theses',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '#### Introduction

This document describes the preservation plan for theses content in the $repo. The preservation plan for theses content follows from policies and practices described in the [Digital Preservation Strategic Plan](/preservation-documentation/policy/digital-preservation-implementation-plan) and the [Digital Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan). This document explains practical steps that $institution take to preserve the intellectual content of theses in digital format. It outlines the basic tools, methods, and standards used for the long-term preservation of theses content.

#### Content Formats

For the preservation of theses content, $institution require a PDF of the content, accompanied by descriptive metadata. Some theses content includes supplementary image files, audio or video files, or data files in various digital formats. $institution urges thesis submitters to provide preservation format supplementary objects, for a given [Content Type]/preservation-documentation/policy/content-types), to commit to the \'full\' preservation level. For supplemental formats that do not meet the $institution\' criteria for preferred formats, the supplemental objects will only be preserved at the Bit-level. $institution continuously monitors developments in file formats to determine if and when formats require migration (see [Environmental Monitoring of Preservation Formats](/preservation-documentation/policy/environmental-monitoring-preservation-formats)).

#### SIP Format

Theses SIPs (see [Definition of SIP](/preservation-documentation/policy/definition-of-sip)) generally consists of an PDF file, and an associated MODS descriptive metadata file.

#### Analysis on Ingest

Upon ingest, every file in the repository is subject to identification of its file format and validation using FITS. The output of the FITS identification and validation processes are recorded to a techincal metadata datastream (TECHMD) that is associated with the object in the repository.

#### Content Excluded

$institution do not ingest files that are not referenced (either as part of a representation or as associated datastreams) in the associated metadata. As the SIP is retained, these files can later be ingested if necessary.

#### Format Normalization

There is no format normailziation if the submitted object is a PDF.

#### Metadata Normalization

When necessary, $institution crosswalk descriptive metadata from MODS to Dublin Core. The repository creates preservation metadata for each file. The preservation level, explained in the [Digital Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan), is applied to each file upon ingest and recorded in the preservation metadata for each file.

#### Acceptable Formats

For the Full Preservation level for theses, currently the acceptable format is PDF.
',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h4>Introduction</h4>

<p>This document describes the preservation plan for theses content in the $repo. The preservation plan for theses content follows from policies and practices described in the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Strategic Plan</a> and the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Implementation Plan</a>. This document explains practical steps that $institution take to preserve the intellectual content of theses in digital format. It outlines the basic tools, methods, and standards used for the long-term preservation of theses content.</p>

<h4>Content Formats</h4>

<p>For the preservation of theses content, $institution require a PDF of the content, accompanied by descriptive metadata. Some theses content includes supplementary image files, audio or video files, or data files in various digital formats. $institution urges thesis submitters to provide preservation format supplementary objects, for a given [Content Type]/preservation-documentation/policy/content-types), to commit to the \'full\' preservation level. For supplemental formats that do not meet the $institution\' criteria for preferred formats, the supplemental objects will only be preserved at the Bit-level. $institution continuously monitors developments in file formats to determine if and when formats require migration (see <a href="/preservation-documentation/policy/environmental-monitoring-preservation-formats">Environmental Monitoring of Preservation Formats</a>).</p>

<h4>SIP Format</h4>

<p>Theses SIPs (see <a href="/preservation-documentation/policy/definition-of-sip">Definition of SIP</a>) generally consists of an PDF file, and an associated MODS descriptive metadata file.</p>

<h4>Analysis on Ingest</h4>

<p>Upon ingest, every file in the repository is subject to identification of its file format and validation using FITS. The output of the FITS identification and validation processes are recorded to a techincal metadata datastream (TECHMD) that is associated with the object in the repository.</p>

<h4>Content Excluded</h4>

<p>$institution do not ingest files that are not referenced (either as part of a representation or as associated datastreams) in the associated metadata. As the SIP is retained, these files can later be ingested if necessary.</p>

<h4>Format Normalization</h4>

<p>There is no format normailziation if the submitted object is a PDF.</p>

<h4>Metadata Normalization</h4>

<p>When necessary, $institution crosswalk descriptive metadata from MODS to Dublin Core. The repository creates preservation metadata for each file. The preservation level, explained in the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Implementation Plan</a>, is applied to each file upon ingest and recorded in the preservation metadata for each file.</p>

<h4>Acceptable Formats</h4>

<p>For the Full Preservation level for theses, currently the acceptable format is PDF.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 2,
        ),
        1 => array(
          'tid' => 3,
        ),
        2 => array(
          'tid' => 12,
        ),
        3 => array(
          'tid' => 14,
        ),
      ),
    ),
  );

  $content['preservation-action-plans-video'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/preservation-action-plans-video',
      'router_path' => 'node/%',
      'link_title' => 'Video - Preservation Action Plan',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_video---preservation-action-plan:node/21',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/preservation-action-plans-video',
    ),
    'exported_path' => 'preservation-documentation/preservation-action-plans/video',
    'title' => 'Video - Preservation Action Plan',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389847986,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'preservation-action-plans-video',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '#### Introduction

This document describes the preservation plan for video content in the $repo. Most of the video content content is from the Sound and Moving Image Library and the Clara Thomas Archives and Special Collections. The preservation plan for video content follows from policies and practices described in the [Digital Preservation Strategic Plan](/preservation-documentation/policy/digital-preservation-implementation-plan) and the [Digital Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan). This document explains practical steps that $institution take to preserve the intellectual content of video in digital format. It outlines the basic tools, methods, and standards used for the long-term preservation of video content.

#### Content Formats

For the preservation of video content, $institution require uncompressed 8 or 10 bit AVI versions of the content, and descriptive metadata. During the ingest process, derivatives are created for streaming. $institution continuously monitors developments in file formats to determine if and when formats require migration (see [Environmental Monitoring of Preservation Formats](/preservation-documentation/policy/environmental-monitoring-preservation-formats)).

#### SIP Format

Video SIPs (see [Definition of SIP](/preservation-documentation/policy/definition-of-sip)) generally consists of an AVI file, and an associated MODS descriptive metadata file.

#### Analysis on Ingest

Upon ingest, every file in the repository is subject to identification of its file format and validation using FITS. The output of the FITS identification and validation processes are recorded to a techincal metadata datastream (TECHMD) that is associated with the object in the repository.

#### Content Excluded

$institution doe not ingest files that are not referenced (either as part of a representation or as associated datastreams) in the associated metadata. As the SIP is retained, these files can later be ingested if necessary.

#### Format Normalization

There is no format normailziation if the submitted object is an uncompressed 8 or 10 bit AVI.

#### Metadata Normalization

When necessary, $institution crosswalk descriptive metadata from MODS to Dublin Core. The repository creates preservation metadata for each file. The preservation level, explained in the [Digital Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan), is applied to each file upon ingest and recorded in the preservation metadata for each file.

#### Acceptable Formats

For the Full Preservation level for video, currently the acceptable formats are AVI. Video submissions may be MPEG, MP4, OGG, MKV, or Quicktime format, however they will be preserved at the Bit-level Preservation level.
',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h4>Introduction</h4>

<p>This document describes the preservation plan for video content in the $repo. Most of the video content content is from the Sound and Moving Image Library and the Clara Thomas Archives and Special Collections. The preservation plan for video content follows from policies and practices described in the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Strategic Plan</a> and the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Implementation Plan</a>. This document explains practical steps that $institution take to preserve the intellectual content of video in digital format. It outlines the basic tools, methods, and standards used for the long-term preservation of video content.</p>

<h4>Content Formats</h4>

<p>For the preservation of video content, $institution require uncompressed 8 or 10 bit AVI versions of the content, and descriptive metadata. During the ingest process, derivatives are created for streaming. $institution continuously monitors developments in file formats to determine if and when formats require migration (see <a href="/preservation-documentation/policy/environmental-monitoring-preservation-formats">Environmental Monitoring of Preservation Formats</a>).</p>

<h4>SIP Format</h4>

<p>Video SIPs (see <a href="/preservation-documentation/policy/definition-of-sip">Definition of SIP</a>) generally consists of an AVI file, and an associated MODS descriptive metadata file.</p>

<h4>Analysis on Ingest</h4>

<p>Upon ingest, every file in the repository is subject to identification of its file format and validation using FITS. The output of the FITS identification and validation processes are recorded to a techincal metadata datastream (TECHMD) that is associated with the object in the repository.</p>

<h4>Content Excluded</h4>

<p>$institution doe not ingest files that are not referenced (either as part of a representation or as associated datastreams) in the associated metadata. As the SIP is retained, these files can later be ingested if necessary.</p>

<h4>Format Normalization</h4>

<p>There is no format normailziation if the submitted object is an uncompressed 8 or 10 bit AVI.</p>

<h4>Metadata Normalization</h4>

<p>When necessary, $institution crosswalk descriptive metadata from MODS to Dublin Core. The repository creates preservation metadata for each file. The preservation level, explained in the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Implementation Plan</a>, is applied to each file upon ingest and recorded in the preservation metadata for each file.</p>

<h4>Acceptable Formats</h4>

<p>For the Full Preservation level for video, currently the acceptable formats are AVI. Video submissions may be MPEG, MP4, OGG, MKV, or Quicktime format, however they will be preserved at the Bit-level Preservation level.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 2,
        ),
        1 => array(
          'tid' => 3,
        ),
        2 => array(
          'tid' => 12,
        ),
      ),
    ),
  );

  $content['preservation-action-plans-warc'] = (object) array(
    'link' => array(
      'menu_name' => 'menu-preservation-documentation',
      'link_path' => 'node-name/preservation-action-plans-warc',
      'router_path' => 'node/%',
      'link_title' => 'Web Archives - Preservation Action Plan',
      'options' => array(
        'identifier' => 'menu-preservation-documentation_web-archives---preservation-action-plan:node/22',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'customized' => 0,
      'parent_path' => '<front>',
      'identifier' => 'menu-preservation-documentation:node-name/preservation-action-plans-warc',
    ),
    'exported_path' => 'preservation-documentation/preservation-action-plans/warc',
    'title' => 'Web Archives - Preservation Action Plan',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1389848222,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'preservation-action-plans-warc',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '#### Introduction

This document describes the preservation plan for web archives content in the $repo. Most of the web archive content content is York University web sites. The preservation plan for web archives content follows from policies and practices described in the [Digital Preservation Strategic Plan](/preservation-documentation/policy/digital-preservation-implementation-plan) and the [Digital Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan). This document explains practical steps that $institution take to preserve the intellectual content of web archives in digital format. It outlines the basic tools, methods, and standards used for the long-term preservation of web archive content.

#### Content Formats

For the preservation of web archive content, $institution require WARC versions of the content, descriptive metadata, and if possible, screen captures of the archived site. During the ingest process, derivatives are created for full-text searching of web archives. $institution continuously monitors developments in file formats to determine if and when formats require migration (see [Environmental Monitoring of Preservation Formats](/preservation-documentation/policy/environmental-monitoring-preservation-formats)).

#### SIP Format

$institution create their own web archive SIPs (see [Definition of SIP](/preservation-documentation/policy/definition-of-sip)) using its [YUDL\'s Web archiving](https://github.com/yorkulibraries/yudl-web-archiving) scripts.

#### Analysis on Ingest

Upon ingest, every file in the repository is subject to identification of its file format and validation using FITS. The output of the FITS identification and validation processes are recorded to a techincal metadata datastream (TECHMD) that is associated with the object in the repository.

#### Content Excluded

$institution do not ingest files that are not referenced (either as part of a representation or as associated datastreams) in the associated metadata. As the SIP is retained, these files can later be ingested if necessary.

#### Format Normalization

There is no format normailziation if the submitted object is a WARC.

#### Metadata Normalization

When necessary, $institution crosswalk descriptive metadata from MODS to Dublin Core. The repository creates preservation metadata for each file. The preservation level, explained in the [Digital Preservation Implementation Plan](/preservation-documentation/policy/digital-preservation-implementation-plan), is applied to each file upon ingest and recorded in the preservation metadata for each file.

#### Acceptable Formats

For the Full Preservation level for web archives, currently the only acceptable format is WARC.
',
          'summary' => '',
          'format' => 'markdown',
          'safe_value' => '<h4>Introduction</h4>

<p>This document describes the preservation plan for web archives content in the $repo. Most of the web archive content content is York University web sites. The preservation plan for web archives content follows from policies and practices described in the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Strategic Plan</a> and the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Implementation Plan</a>. This document explains practical steps that $institution take to preserve the intellectual content of web archives in digital format. It outlines the basic tools, methods, and standards used for the long-term preservation of web archive content.</p>

<h4>Content Formats</h4>

<p>For the preservation of web archive content, $institution require WARC versions of the content, descriptive metadata, and if possible, screen captures of the archived site. During the ingest process, derivatives are created for full-text searching of web archives. $institution continuously monitors developments in file formats to determine if and when formats require migration (see <a href="/preservation-documentation/policy/environmental-monitoring-preservation-formats">Environmental Monitoring of Preservation Formats</a>).</p>

<h4>SIP Format</h4>

<p>$institution create their own web archive SIPs (see <a href="/preservation-documentation/policy/definition-of-sip">Definition of SIP</a>) using its <a href="https://github.com/yorkulibraries/yudl-web-archiving">YUDL\'s Web archiving</a> scripts.</p>

<h4>Analysis on Ingest</h4>

<p>Upon ingest, every file in the repository is subject to identification of its file format and validation using FITS. The output of the FITS identification and validation processes are recorded to a techincal metadata datastream (TECHMD) that is associated with the object in the repository.</p>

<h4>Content Excluded</h4>

<p>$institution do not ingest files that are not referenced (either as part of a representation or as associated datastreams) in the associated metadata. As the SIP is retained, these files can later be ingested if necessary.</p>

<h4>Format Normalization</h4>

<p>There is no format normailziation if the submitted object is a WARC.</p>

<h4>Metadata Normalization</h4>

<p>When necessary, $institution crosswalk descriptive metadata from MODS to Dublin Core. The repository creates preservation metadata for each file. The preservation level, explained in the <a href="/preservation-documentation/policy/digital-preservation-implementation-plan">Digital Preservation Implementation Plan</a>, is applied to each file upon ingest and recorded in the preservation metadata for each file.</p>

<h4>Acceptable Formats</h4>

<p>For the Full Preservation level for web archives, currently the only acceptable format is WARC.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tags' => array(
      'und' => array(
        0 => array(
          'tid' => 2,
        ),
        1 => array(
          'tid' => 3,
        ),
        2 => array(
          'tid' => 12,
        ),
      ),
    ),
  );

return $content;
}
