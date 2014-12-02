<?php
/**
 * @file
 * walmex_sample_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function walmex_sample_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'70\',
      \'uid\' => \'107\',
      \'title\' => \'Alternative Energy Options\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f64303d8-fa86-4a2d-a7fd-6217ceeeaa25\',
      \'ds_switch\' => \'\',
      \'nid\' => \'65\',
      \'type\' => \'case_study_chapter_header\',
      \'language\' => \'en-US\',
      \'created\' => \'1407896747\',
      \'changed\' => \'1407896747\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'10385ff9-00f3-4523-beb6-68e7b305cbe9\',
      \'revision_timestamp\' => \'1407896747\',
      \'revision_uid\' => \'107\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2763\',
        \'nid\' => \'65\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2755\',
        \'link_path\' => \'node/65\',
        \'router_path\' => \'node/%\',
        \'link_title\' => \'Alternative Energy Options\',
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'1\',
        \'expanded\' => \'0\',
        \'weight\' => \'3\',
        \'depth\' => \'2\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2763\',
        \'p3\' => \'0\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/65\',
        \'title\' => \'Alternative Energy Options\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407896747\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => \'Alternative Energy Options\',
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'358\',
        \'source\' => \'node/65\',
        \'alias\' => \'walmart-de-méxico-investing-renewable-energy/alternative-energy-options\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'69\',
      \'uid\' => \'107\',
      \'title\' => \'Creating the Wind Farm\',
      \'log\' => \'Title changed from <em class="placeholder">Creating the Wind Farm</em> to <em class="placeholder">Creating the Wind Farm</em>.\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'42cf56c4-a526-41f2-aca3-67224f0b3e62\',
      \'ds_switch\' => \'\',
      \'nid\' => \'62\',
      \'type\' => \'case_study_chapter_header\',
      \'language\' => \'en-US\',
      \'created\' => \'1407876034\',
      \'changed\' => \'1407877484\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3c0a21f4-29ed-41b1-9450-7e807dde7080\',
      \'revision_timestamp\' => \'1407877484\',
      \'revision_uid\' => \'107\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2760\',
        \'nid\' => \'62\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2755\',
        \'link_path\' => \'node/62\',
        \'router_path\' => \'node/%\',
        \'link_title\' => \'Creating the Wind Farm\',
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'1\',
        \'expanded\' => \'0\',
        \'weight\' => \'-14\',
        \'depth\' => \'2\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2760\',
        \'p3\' => \'0\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/62\',
        \'title\' => \'Creating the Wind Farm\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407876034\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => \'Creating the Wind Farm\',
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'355\',
        \'source\' => \'node/62\',
        \'alias\' => \'walmart-de-méxico-investing-renewable-energy/creating-wind-farm\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'77\',
      \'uid\' => \'107\',
      \'title\' => "Mexico\'s Climate Change Policy",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c9aad65c-2be6-4c0b-9711-99a793d72394\',
      \'ds_switch\' => \'\',
      \'nid\' => \'69\',
      \'type\' => \'page\',
      \'language\' => \'en-US\',
      \'created\' => \'1407899699\',
      \'changed\' => \'1407902878\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'419e5abc-0f7b-4b10-a92d-c6e59cf302fb\',
      \'revision_timestamp\' => \'1407902878\',
      \'revision_uid\' => \'107\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>As Manuel Gómez-Peña, Director of Sustainability, Walmart de México y Centroamerica, examined the potential for additional investment in energy efficiency projects, he understood that an important factor for any investment would be understanding the electric market and the support that the government would continue to give for alternative energy projects. Unlike many other countries like the U.S. and Germany, Mexico did not subsidize clean energy projects. He had to ask, was the government\'s support of clean energy stable enough to limit the risk of a long-term equity investment?</p>\\r\\n\\r\\n<p>Mexico had the geographic and geologic potential for developing renewable energies, but until the 21st century it faced numerous policy and regulatory barriers, including the regulatory framework, high entry costs for grid access, and the lack of appropriate financing options.&nbsp; In 2005, new regulations allowed a 100-percent depreciation in the first year for all energy capital investments and the abatement of annual government fees. Nonetheless, Articles 27 and 28 of the Mexican constitution did not include renewable energies among the nation’s assets, limiting Mexico\'s access to the legal promotion of those resources found in many other countries.</p>\\r\\n\\r\\n<p>Nonetheless, the government of President Felipe Calderón (2006-2012) had made climate change a high priority in its development strategy, and many observers expected that policy to continue when a new president was elected in 2012. Mexico contributed about 1.6 per cent of the global emissions of the greenhouse gases (GHG) and ranked 13th among the largest emitting countries in the world, with emissions per capita below the global average (.655 tons of CO2 per person). Greenhouse gas emissions in the country grew by 40 percent between 1990 and 2006. Emissions from electricity alone grew by 68 per cent between 1990 and 2009.</p>\\r\\n\\r\\n<p>Mexico was a signatory of the United Nations Framework Convention on Climate Change and of the Kyoto Protocol. Goals to mitigate and adapt to climate change were introduced in Mexico’s National Development Plan and in the Special Program for Climate Change 2009-2012.</p>\\r\\n\\r\\n<p>Although not obligated to set mitigation targets under the Kyoto Protocol, the Mexican government set aspirational goals to reduce by 2050 its greenhouse gas emissions in 50 percent relative to the country’s 2000 baseline. Emission reduction targets included electricity, agriculture, deforestation, land-use changes and waste management. Besides establishing relevant goals in the field of energy efficiency, the PECC aimed at increasing electricity generation from renewable energy from 4.5% to 6.6% (excluding large hydro) by 2012, by increasing the following energy sources:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>wind power, now at 1.74%, increasing to 2.91%,</li>\\r\\n\\t<li>mini hydro, now at 0.36%, increasing to 0.61%,</li>\\r\\n\\t<li>geothermal, now at 2.19%, increasing to 2.74% and</li>\\r\\n\\t<li>biomass and biogas, now at 0.19%, increasing to 0.32%.</li>\\r\\n</ul>\\r\\n\\r\\n<p>Dr. Georgina Kessel, director of Banobras, the state-owned development bank and former Secretary of Energy, stated that the country had the natural resources available, but achieving the country\'s ambitious goals would require investing $25 to $30 billion in clean energy projects over the next 15 years. In her view, meeting these goals would require investments from development banks, commercial banks, and private developers to find innovative solutions to ensure that the investments take place.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_override_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'und\' => array(
          array(
            \'value\' => "Mexico\'s Climate Change Policy",
            \'format\' => NULL,
            \'safe_value\' => \'Mexico&#039;s Climate Change Policy\',
          ),
        ),
      ),
      \'field_document_grid\' => array(),
      \'field_document_list\' => array(),
      \'field_primary_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2862\',
        \'nid\' => \'69\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2764\',
        \'link_path\' => \'node/69\',
        \'router_path\' => \'node/%\',
        \'link_title\' => "Mexico\'s Climate Change Policy",
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'0\',
        \'expanded\' => \'0\',
        \'weight\' => \'1\',
        \'depth\' => \'3\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2764\',
        \'p3\' => \'2862\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/69\',
        \'title\' => "Mexico\'s Climate Change Policy",
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407899699\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => "Mexico\'s Climate Change Policy",
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'362\',
        \'source\' => \'node/69\',
        \'alias\' => \'mexicos-energy-policy/mexicos-climate-change-policy\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'68\',
      \'uid\' => \'107\',
      \'title\' => \'Land and Wind\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7b99846c-5d23-4c40-87d0-879a76b46934\',
      \'ds_switch\' => \'\',
      \'nid\' => \'64\',
      \'type\' => \'page\',
      \'language\' => \'en-US\',
      \'created\' => \'1407877076\',
      \'changed\' => \'1407903022\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'75ca324f-c5cc-4a4d-a333-bf4f82c63d0f\',
      \'revision_timestamp\' => \'1407903022\',
      \'revision_uid\' => \'107\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<h3>Land</h3>\\r\\n\\r\\n<p>The La Ventosa wind farm project began with years of negotiations to secure rights to the land on which the wind turbines were to be constructed. Most of the property in question was farmland cultivated by indigenous people. However, these indigenous people did not own the land which they farmed; the land was held under a form of collective ownership (called the <em>ejido </em>system) re-established during the 1930 Mexican land reform. (The eijdo system extends back to the Aztecs, but was discontinued in the 18th and 19th century).</p>\\r\\n\\r\\n<p>The ejido was collectively held, but individuals were allocated parcels that they had a right to farm as long as the land was in use, termed <em>usufruct</em> rights. The system was rather informal, and the boundaries of many of the parcels had never been established or recorded. So developers had to work with local communities to first formalize property rights and then negotiate the use of these parcels with individual farmers. The process took over five years of work, first by the initial group of developers and then by EVM.</p>\\r\\n\\r\\n<p>Whatever the difficulty EVM had in gaining the legal rights to proceed, as of the beginning of 2012 EVM had had more harmonious relations with the farmers and ejidos than later wind farm developers in Oaxaca. In November 2011, protests in the Oaxacan town of Union Hidalgo stopped the development of Piedra Larga, which was slated to become Mexico’s largest wind farm. Indigenous activists complained about the way developers had gained the land rights and their compensation for those rights. Clashes between activists and developers turned violent; one protest resulted in the death of one plant construction worker and injuries to over 20 demonstrators.</p>\\r\\n\\r\\n<p>The Piedra Larga wind farm was a $200 million, 90-megawatt project developed by Demex, a subsidiary of the Spanish developer Renovalia Energy. The wind farm was slated to provide nearly 100% of the electricity for Grupo Bimbo, one of Mexico’s largest companies. The protests, however, were causing delays and putting the project at risk.</p>\\r\\n\\r\\n<h3>Wind</h3>\\r\\n\\r\\n<p>Once EVM gained the property rights, the project team had to commission wind studies to guide the siting and construction of the turbines.</p>\\r\\n\\r\\n<p>Wind maps were available for the region and previous general studies had shown the tremendous potential of the region. In Oaxaca, the percentage of time that the turbines would be producing at their rated capacity (the capacity factor) was exceedingly high in some locales, exceeding the persistence and strength of nearly all wind resources. There was some seasonal variation in the wind flow. The region experienced&nbsp; particularly high winds from November to February.</p>\\r\\n\\r\\n<p>However, general maps were not good enough to allow for construction of wind turbines. Wind speeds were dependent on variations in local terrain and could be influenced by the placement of other wind turbines or buildings. EVM constructed meteorological towers (abbreviated as met towers) to capture wind speeds at different locations and heights and collect seasonal data. Two years of data &nbsp;was analyzed by EDF\'s internal staff as well as by experts at the international wind advisors Garrad Hassad, before turbine type, placement and tower heights could be finalized.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_override_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Land and Wind\',
            \'format\' => NULL,
            \'safe_value\' => \'Land and Wind\',
          ),
        ),
      ),
      \'field_document_grid\' => array(),
      \'field_document_list\' => array(),
      \'field_primary_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2761\',
        \'nid\' => \'64\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2760\',
        \'link_path\' => \'node/64\',
        \'router_path\' => \'node/%\',
        \'link_title\' => \'Land and Wind\',
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'0\',
        \'expanded\' => \'0\',
        \'weight\' => \'-14\',
        \'depth\' => \'3\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2760\',
        \'p3\' => \'2761\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/64\',
        \'title\' => \'Land and Wind\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407877076\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => \'Land and Wind\',
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'357\',
        \'source\' => \'node/64\',
        \'alias\' => \'creating-hte-wind-farm/land-and-wind\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'62\',
      \'uid\' => \'107\',
      \'title\' => \'Overview\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'bbbfd248-c6cf-4579-a086-3b631ef7e7eb\',
      \'ds_switch\' => \'\',
      \'nid\' => \'58\',
      \'type\' => \'case_study_chapter_header\',
      \'language\' => \'en-US\',
      \'created\' => \'1407872158\',
      \'changed\' => \'1407872158\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7f91a5fa-02dc-4d9b-be5a-0628203c1a56\',
      \'revision_timestamp\' => \'1407872158\',
      \'revision_uid\' => \'107\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2756\',
        \'nid\' => \'58\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2755\',
        \'link_path\' => \'node/58\',
        \'router_path\' => \'node/%\',
        \'link_title\' => \'Overview\',
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'1\',
        \'expanded\' => \'0\',
        \'weight\' => \'-15\',
        \'depth\' => \'2\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2756\',
        \'p3\' => \'0\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/58\',
        \'title\' => \'Overview\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407872158\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => \'Overview\',
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'350\',
        \'source\' => \'node/58\',
        \'alias\' => \'walmart-de-méxico-investing-renewable-energy/overview\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'79\',
      \'uid\' => \'1\',
      \'title\' => \'Project Map \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e75c343a-7533-429f-8e98-88eb42130e3e\',
      \'ds_switch\' => \'\',
      \'nid\' => \'71\',
      \'type\' => \'html_for_modal\',
      \'language\' => \'en-US\',
      \'created\' => \'1407939061\',
      \'changed\' => \'1407939294\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'97f74154-ff37-4b12-8386-462f83d81613\',
      \'revision_timestamp\' => \'1407939294\',
      \'revision_uid\' => \'1\',
      \'field_content\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><img alt=\\"\\" height=\\"534\\" src=\\"/sites/default/files/Isthmus_of_Tehuantepec-ver2BIG.jpg\\" width=\\"900\\"></p>\\r\\n\\r\\n<p>Mexico narrows to a slip of land only 120 miles wide between the Gulf of Mexico and the Pacific Ocean. This short distance coupled with a pass through the Sierra Madre Mountains made the isthmus&nbsp;a transport corridor during the 19th century, prior to the opening of the Panama Canal.&nbsp; The area has always been known for its winds as air is steadily funneled from the Gulf to the Pacific through the narrow pass, creating one of the world\'s best wind fields.</p>\\r\\n",
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407939061\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"overlay";i:1;}\',
      \'path\' => array(
        \'pid\' => \'364\',
        \'source\' => \'node/71\',
        \'alias\' => \'content/project-map\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'65\',
      \'uid\' => \'107\',
      \'title\' => \'Glossary\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c2f299e5-c5ea-4f6d-9bd9-9787e816ad17\',
      \'ds_switch\' => \'\',
      \'nid\' => \'61\',
      \'type\' => \'page\',
      \'language\' => \'en-US\',
      \'created\' => \'1407875797\',
      \'changed\' => \'1407902948\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'99c9afa6-d241-45c9-8733-3ffe86555a31\',
      \'revision_timestamp\' => \'1407902948\',
      \'revision_uid\' => \'107\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Autoabastecimiento</strong> <em>see </em>Self-use or Self-generation tariff.</p>\\r\\n\\r\\n<p><strong>Banco Nacional de Obras y Servicios Públicos, SNC </strong>(National Works and Public Services Bank) or <strong>Banobras</strong> is state owned development bank in Mexico. Its core business is sub national (Municipal and State governments) and project finance.</p>\\r\\n\\r\\n<p><strong>Capacity, installed</strong> The rated power that could be generated by an electric facility at full usage. Actual generation will be a fraction of the installed capacity, reflecting the percentage of the time that the facility was in use.&nbsp;</p>\\r\\n\\r\\n<p><strong>Clean Development Mechanism (CDM)</strong>&nbsp; A mechanism under the Kyoto Protocol, the purpose of which, in accordance with Article 12 of the Kyoto Protocol, is to assist Parties not included in Annex I in achieving sustainable development and in contributing to the ultimate objective of the Convention, and to assist Parties included in Annex I in achieving compliance with their quantified emission limitation and reduction commitments under Article 3 of the Kyoto Protocol. The governing agency has developed an <a href=\\"http://cdm.unfccc.int/Reference/Guidclarif/glos_CDM.pdf\\">online Glossary</a> for commonly used terms in CDM.</p>\\r\\n\\r\\n<p><strong>Comisión Reguladora de Energía</strong>&nbsp; (CRE) Mexico\'s Energy Regulatory Commission, which sets policies and wholesale tariffs for the electricity grid in Mexico</p>\\r\\n\\r\\n<p><strong>Comisión Federal de Electricidad&nbsp;</strong> (CFE) Mexico’s state-owned utility, which owns most of the generation and all of the transmission and distribution lines in the country&nbsp;</p>\\r\\n\\r\\n<p><strong>Ejido &nbsp;</strong>A traditional Mexican system of communal land ownership, widespread in the country’s rural areas. Ejidos were reinstated as part of land reform after the Mexican Revolution to support the rights of indigenous people.</p>\\r\\n\\r\\n<p><strong>Eléctrica del Valle de México (EVM)</strong>&nbsp; The special purpose vehicle established by EDF-EN for the wind farm</p>\\r\\n\\r\\n<p><strong>Feed-in tariff</strong>&nbsp; A long-term price offered to alternative energy producer, setting a purchase pricing for the electricity based on the cost of production for a specific technology. Feed-in tariffs have been used in many countries, including the US, but not in Mexico</p>\\r\\n\\r\\n<p><strong>LAERFTE</strong>&nbsp; Law for the Use of Renewable Energy and Financing the Energy Transition</p>\\r\\n\\r\\n<p><strong>Mini-hydro</strong> Small hydroelectric facilities, usually defined as up to 10 megawatts of capacity. The facilities can supply remote regions directly, or be connected to the electricity grid for commercial or industrial use.</p>\\r\\n\\r\\n<p><strong>Nacional Financiera</strong>, S.N.C., (Nafinsa )&nbsp; A development Banking Institution that operates in accordance with the rules of its own Organic Law, in accordance with the Law of Credit Institutions, and the rules issued by the National Banking Securities (NBSC).</p>\\r\\n\\r\\n<p><strong>Off-taker&nbsp; </strong>The<strong> </strong>commercial or industrial end-user of electricity that contracts to take power under the self-supply tariff</p>\\r\\n\\r\\n<p><strong>Postage-stamp pricing&nbsp; </strong>Using one price for moving power over the transmission system from a generating facility to the user, rather than basing the price on distance, or current flow, or other factors. By using this pricing methodology, the CFE facilitates the self-generation tariff.</p>\\r\\n\\r\\n<p><strong>Productor Independiente de Energía</strong> (PIE)&nbsp; Independent Power Producer (IPP). An owner of generation with a contract with CFE to sell electricity into the grid, in contrast to generation from facilities owned by CFE.</p>\\r\\n\\r\\n<p><strong>Self-use or self-generation (self-supply) tariff&nbsp; </strong>Under Mexican regulations, an end-user agrees to a long-term contract to buy all the electricity produced by a new generation facility, along with a nominal investment to qualify as an owner. The power moves through the electric grid on wholesale transport prices. The price to the end user is negotiated between the developer and the end user. The CFE provides \\"banking\\" services, calculating a true-up between the power generated and the power used by the end users on a monthly basis. Any shortfall in generation is charged to the end-user at the otherwise applicable tariff rate. Any excess generation beyond the amount used that month must be sold back to the CFE at a discounted price.</p>\\r\\n\\r\\n<p><strong>Tariff rate&nbsp; </strong>The regulated retail price set by a government agency and charged to customers (end-users) by a utility. Tariffs can vary from the system average by customer class (such as residential, commercial, industrial), by overall usage, by location, and so on.</p>\\r\\n\\r\\n<p><strong>Usufruct</strong>&nbsp; the legal right to use and derive profit or benefit from property that either belongs to another person or which is under common ownership, as long as the property is not damaged or destroyed. In many legal usufruct systems of property, such as the traditional <em>ejido</em> system in Mexico, individuals or groups may only acquire the usufruct of the property, not legal land ownership.</p>\\r\\n\\r\\n<p><strong>Measuring electric power</strong></p>\\r\\n\\r\\n<p>Watt a unit of power, defined as the rate at which energy is generated or consumed, at one joule per second. When a light bulb with a power rating of 100 W is turned on for one hour, the energy used is 100 watt-hours.</p>\\r\\n\\r\\n<p>Kilowatt 1,000 (10<sup>3</sup>)&nbsp; watts, approximately the power consumption of a household in the US over a whole year</p>\\r\\n\\r\\n<p>Megawatt = one million (10<sup>6</sup>) watts, or one thousand kilowatts</p>\\r\\n\\r\\n<p>Gigawatt = one billion (10<sup>9</sup>) watts or one thousand megawatts or one million kilowatts</p>\\r\\n\\r\\n<p>Terawatt (TW) = one trillion (10<sup>12</sup>) watts – Mexico’s electricity consumption in 2008 was 184 terawatt-hours (TWh)</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_override_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Glossary\',
            \'format\' => NULL,
            \'safe_value\' => \'Glossary\',
          ),
        ),
      ),
      \'field_document_grid\' => array(),
      \'field_document_list\' => array(),
      \'field_primary_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2759\',
        \'nid\' => \'61\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2756\',
        \'link_path\' => \'node/61\',
        \'router_path\' => \'node/%\',
        \'link_title\' => \'Glossary\',
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'0\',
        \'expanded\' => \'0\',
        \'weight\' => \'-13\',
        \'depth\' => \'3\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2756\',
        \'p3\' => \'2759\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/61\',
        \'title\' => \'Glossary\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407875797\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => \'Glossary\',
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'354\',
        \'source\' => \'node/61\',
        \'alias\' => \'overview/glossary\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'71\',
      \'uid\' => \'107\',
      \'title\' => "Mexico\'s Energy Policy",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4cc30de3-6084-405a-a7fe-9c3d785cdc6a\',
      \'ds_switch\' => \'\',
      \'nid\' => \'66\',
      \'type\' => \'case_study_chapter_header\',
      \'language\' => \'en-US\',
      \'created\' => \'1407896789\',
      \'changed\' => \'1407896789\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a8ce5c2a-1fb7-474c-a713-2cecfbff4c9f\',
      \'revision_timestamp\' => \'1407896789\',
      \'revision_uid\' => \'107\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2764\',
        \'nid\' => \'66\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2755\',
        \'link_path\' => \'node/66\',
        \'router_path\' => \'node/%\',
        \'link_title\' => "Mexico\'s Energy Policy",
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'1\',
        \'expanded\' => \'0\',
        \'weight\' => \'4\',
        \'depth\' => \'2\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2764\',
        \'p3\' => \'0\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/66\',
        \'title\' => "Mexico\'s Energy Policy",
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407896789\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => "Mexico\'s Energy Policy",
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'359\',
        \'source\' => \'node/66\',
        \'alias\' => \'walmart-de-méxico-investing-renewable-energy/mexicos-energy-policy\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'72\',
      \'uid\' => \'107\',
      \'title\' => "Mexico\'s Electricity System",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7c3fbf49-94b5-4255-a7f7-9199d03cc3d8\',
      \'ds_switch\' => \'\',
      \'nid\' => \'67\',
      \'type\' => \'case_study_chapter_header\',
      \'language\' => \'en-US\',
      \'created\' => \'1407896825\',
      \'changed\' => \'1407896825\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'aaeec327-7fb1-4ead-bf54-6167a11765a2\',
      \'revision_timestamp\' => \'1407896825\',
      \'revision_uid\' => \'107\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2765\',
        \'nid\' => \'67\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2755\',
        \'link_path\' => \'node/67\',
        \'router_path\' => \'node/%\',
        \'link_title\' => "Mexico\'s Electricity System",
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'1\',
        \'expanded\' => \'0\',
        \'weight\' => \'5\',
        \'depth\' => \'2\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2765\',
        \'p3\' => \'0\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/67\',
        \'title\' => "Mexico\'s Electricity System",
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407896825\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => "Mexico\'s Electricity System",
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'360\',
        \'source\' => \'node/67\',
        \'alias\' => \'walmart-de-méxico-investing-renewable-energy/mexicos-electricity-system\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'76\',
      \'uid\' => \'107\',
      \'title\' => \'Alternative Energy Policy\',
      \'log\' => \'Title changed from <em class="placeholder">Walmart Looks at Alternative Energy Options</em> to <em class="placeholder">Alternative Energy Policy</em>.\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c2965cde-810f-4481-8772-8eb03583df41\',
      \'ds_switch\' => \'\',
      \'nid\' => \'68\',
      \'type\' => \'page\',
      \'language\' => \'en-US\',
      \'created\' => \'1407897043\',
      \'changed\' => \'1407902889\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b2eea026-0049-498b-a55f-546f71050a61\',
      \'revision_timestamp\' => \'1407902889\',
      \'revision_uid\' => \'107\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>The La Ventosa wind farm was Walmart’s most significant renewable energy provider. However, the company had also agreed to be an off-taker from a PV solar energy project and was considering, as of 2012, a mini-hydro project. Purchasing electricity from a variety of renewable sources had given Manuel Gómez Peña’s team familiarity with a wide range of power options. But going forward, Gómez Peña had to consider how best to structure his portfolio of renewable sources. Did diversification make sense, or would it be better to concentrate and build expertise in a single source? If Walmart were to concentrate its attention on a single renewable, which one should it be?</p>\\r\\n\\r\\n<p>While every specific proposal required individual analysis, there were general properties that characterized wind, solar, and mini-hydro projects. These energy sources differed as to the amount of investment required for getting a project of efficient scale off the ground and the cost of the resulting electricity. While the “fuel” for each type of energy was free, the cost of operations and maintenance varied, as did the amount of time required to develop a project and the flexibility of sites for locating energy generating equipment. The predictability and timing of the electricity also varied. Finally, wind, solar, and mini-hydro were all at dissimilar points in the maturity of the underlying technology and the progress of their respective industries both in Mexico and the world.</p>\\r\\n\\r\\n<p>Renewable facilities, whether wind turbines, solar panels, or hydro works, were rated and their construction priced at their full capacity. Based on studies of the underlying resource, a facility developer could estimate the number of hours the resource (wind, sun or water) was available to run the generator at full capacity over the course of year (expressed as a capacity % or in hours per day), which would allow the developer to estimate the number watt hours per year the facility would generate electricity. The developer could then multiply this number by the electricity tariff (net any discount offered to the off-taker) to establish the revenue a given facility would produce. Since in most instances fuel was free, a developer would need only to estimate the operations and maintenance expense and the cost of transmitting each watt on the grid (wheeling fees) to estimate the expense side. The key for a developer was making sure that net revenues would, over time, justify the substantial capital expenses incurred in constructing the facility.</p>\\r\\n\\r\\n<p>Should these differences make a difference to Walmart if it remained largely an offtaker? What if Walmart were to take a larger equity stake in the operations of the renewable plants? Gómez Peña had to calculate these variables as he planned Walmart de Mexico’s sustainability strategy.</p>\\r\\n\\r\\n<p><img alt=\\"\\" height=\\"315\\" src=\\"/sites/default/files/imce_imagepool/EnergyChoices.jpg\\"></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_override_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Walmart Looks at Alternative Energy Options\',
            \'format\' => NULL,
            \'safe_value\' => \'Walmart Looks at Alternative Energy Options\',
          ),
        ),
      ),
      \'field_document_grid\' => array(),
      \'field_document_list\' => array(),
      \'field_primary_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2766\',
        \'nid\' => \'68\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2763\',
        \'link_path\' => \'node/68\',
        \'router_path\' => \'node/%\',
        \'link_title\' => \'Alternative Energy Policy\',
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'0\',
        \'expanded\' => \'0\',
        \'weight\' => \'0\',
        \'depth\' => \'3\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2763\',
        \'p3\' => \'2766\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/68\',
        \'title\' => \'Alternative Energy Policy\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407897043\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => \'Alternative Energy Policy\',
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'361\',
        \'source\' => \'node/68\',
        \'alias\' => \'alternative-energy-options/alternative-energy-policy\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'78\',
      \'uid\' => \'107\',
      \'title\' => \'Generating Electricity\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'af21f0c7-9f4c-45f2-8341-267a5b24bceb\',
      \'ds_switch\' => \'\',
      \'nid\' => \'70\',
      \'type\' => \'page\',
      \'language\' => \'en-US\',
      \'created\' => \'1407901819\',
      \'changed\' => \'1407902866\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b515be91-244f-4445-86dd-3ddea091d8d8\',
      \'revision_timestamp\' => \'1407902866\',
      \'revision_uid\' => \'107\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>The unique character of Mexico\'s electrical generation system created opportunities as well as challenges to a direct investment in electric generation. As Manuel Gómez-Peña, Director of Sustainability, Walmart de México y Centroamerica, examined the potential for additional investment in energy efficiency projects, he understood that an important factor for any investment would be understanding the electric market. Were there factors in this country that would particularly benefit Walmart and encourage it to take a more active role in financing energy projects?</p>\\r\\n\\r\\n<p>Historically, the regulatory framework determined the development of the energy market in Mexico. Article 27 of the Mexican constitution stated that all natural resources were property of the nation, thus justifying existing public monopolies. Petróleos Mexicanos (Pemex) controlled the production and distribution of oil and gas, and the Comisión Federal de Electricidad (CFE), governed electricity. Unlike its oil sector, which remained centralized, Mexico’s electricity sector progressively accommodated the participation, albeit limited, of private investments.</p>\\r\\n\\r\\n<p>The CFE was created in 1934 to regulate the private vertically owned energy monopolies and to supply regions that the private sector had neglected. In 1960 its role was expanded - the CFE was fully nationalized and the constitutional arrangements were enforced. The state, through the CFE, became the sole producer, provider, and distributor of electricity. A separate regional power agency, Luz y Fuerza del Centro, which had supplied power to 25 million individuals, was taken by police and brought under the control of the CFE.</p>\\r\\n\\r\\n<p>In 1992, legal reforms allowed the private sector to participate in the generation of electricity basically for self-supply, with the obligation of selling all excess electricity to CFE. The 1992 law created the Comisión Reguladora de Electricidad (CRE) to be the principal regulatory oversight agency of the electricity sector (as well as natural gas). The CRE became responsible for granting all private electricity production permits and licenses and setting certain wholesale prices. The 2008 reforms also changed the legal framework, charging to CRE with the responsibility to promote private self-supplier projects of renewable energy to address energy security and climate change. The reforms were enshrined in the North American Free Trade Agreement (NAFTA), with section 6 of the agreement stating that any enterprise \\"may acquire, establish and operate an electrical generating facility in Mexico to meet its own supply needs.\\"</p>\\r\\n\\r\\n<p>Although most generation remained under state ownership, there were several paths for outside developers to produce electricity. The self-supply mechanism allowed developers to partner with an end-user of the electricity and provide electricity to it by paying a transport price through the grid. In addition, under the new rules private companies could participate in wholesale power generation through specific tenders offered by the CFE, under terms specified by the CRE. The bidding system for long-term contracts was designed to meet the constitutional requirement for purchasing generation at the lowest price within the constitutional framework. By allowing private investment in electricity generation for the CFE, the CRE and Mexican government could finance the growing demand for this sector in the economy and meet clean air goals without incurring additional debt or violating its constitutional mandate to purchase electricity at the lowest cost.</p>\\r\\n\\r\\n<p>Private companies could qualify to sell energy to CFE under one of the five generation plans defined under Mexican law:</p>\\r\\n\\r\\n<ol>\\r\\n\\t<li>Independent power producers (IPPs, abbreviated PIEs in Spanish): producing electricity to sell to CFE for a fixed price under long-term purchase agreements, as low-cost producers;</li>\\r\\n\\t<li>Self-suppliers (autoabastecimiento): producing electricity for defined industrial or commercial users as partners, selling any excess to the CFE;</li>\\r\\n\\t<li>Co-generators: producing electricity using heat produced by a commercial or industrial process;</li>\\r\\n\\t<li>Small power producers (less than 30 MW): a category for small facilities using solar, mini-hydroelectric, and wind installations; and</li>\\r\\n\\t<li>Exporters or importers for self-consumption.</li>\\r\\n</ol>\\r\\n\\r\\n<p>The large majority of contracts with power private sector generators fell under the category of IPPs. Most of them used gas-fired and combined-cycle gas turbine technologies, which could meet the requirements for lowest average generation price. Most of these IPPs sold electricity to CFE under 25-year purchase agreements.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_override_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Electricity Generation In Mexico\',
            \'format\' => NULL,
            \'safe_value\' => \'Electricity Generation In Mexico\',
          ),
        ),
      ),
      \'field_document_grid\' => array(),
      \'field_document_list\' => array(),
      \'field_primary_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2863\',
        \'nid\' => \'70\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2765\',
        \'link_path\' => \'node/70\',
        \'router_path\' => \'node/%\',
        \'link_title\' => \'Generating Electricity\',
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'0\',
        \'expanded\' => \'0\',
        \'weight\' => \'0\',
        \'depth\' => \'3\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2765\',
        \'p3\' => \'2863\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/70\',
        \'title\' => \'Generating Electricity\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407901819\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => \'Generating Electricity\',
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'363\',
        \'source\' => \'node/70\',
        \'alias\' => \'mexicos-electricity-system/generating-electricity\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'67\',
      \'uid\' => \'107\',
      \'title\' => \'Project Structure\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'095701a8-0e47-4020-98be-fb5233dc8395\',
      \'ds_switch\' => \'\',
      \'nid\' => \'63\',
      \'type\' => \'page\',
      \'language\' => \'en-US\',
      \'created\' => \'1407876202\',
      \'changed\' => \'1407941676\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b6c8a07b-8f75-4ad2-8e83-1e1029c16f8f\',
      \'revision_timestamp\' => \'1407941676\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Like most large energy projects, the governance and financial structure for the La Ventosa wind farm had been set up as a special project vehicle. The project, named Eléctrica del Valle de México, or EVM, stood at the center of an array of funders, suppliers, operators and off-takers, and co-ordinated the progress of the project.</p>\\r\\n\\r\\n<p>Even before the incorporation of EVM, independent developers had begun exploring the possibility of developing a wind farm in Central America. In the late 1990s, Dr. James A. Walker, a U.S. expert in renewable energy, along with Wm. Stevens Taber and Mike Folloni, had formed a group called Asociados PanAmericano (APAwind). In addition, Arturo Whaley of DEPROE SA had managed construction for a small wind turbine project for Mexico\'s national utility on the Isthmus of Tehuantepec in Oaxaca. Whaley and APAwind worked to explore the possibility of building a wind farm in Oaxaca. APAwind and DEPROE SA then formed a joint venture with SIIF Energy to begin development. And in turn, SIIF Energy was purchased by the French company Électricité de France, and became Électricité de France Energies Nouvelles (EDF-EN). (At the time of development, Électricité de France held 50% of shares of EDF-EN, with the rest listed on Euronext, the European stock exchange. (On July 21, 2011 <a href=\\"http://investing.businessweek.com/research/stocks/charts/charts.asp?ticker=EEN:FP\\" target=\\"_blank\\">EDF announced</a> it would repurchase all EDF-EN stock and delist from Euronext.)</p>\\r\\n\\r\\n<p>EDF brought expertise and resources to the project. EDF was one of the largest utility companies in Europe and had developed energy projects world-wide, including those based on renewable sources. At the time of project completion, EDF had an equity stake in 80 wind farms, with a capacity of 2327.7 MW. It was one of a handful of developers with the financial and technical assets to carry out the complex and time-consuming development of large wind farms.</p>\\r\\n\\r\\n<p>To organize the project, EDF-EN formed EVM. EVM was a stand-alone entity that would seek non-recourse financing for the construction of the project, based on the proceeds of the electricity generated by the wind turbines. Creating special purpose vehicles such as EVM was standard practice in the development of energy projects. These financing structures allowed equity holders to take on large amounts of leverage (without impacting the balance sheets of the parent company) and allowed for additional equity partners for specific projects. In the area of renewable energy sources, forming a special purpose vehicle also made projects more likely to receive developmental loans from agencies promoting sustainability projects or local economic development, since the proceeds and liabilities of the vehicles were clearly segregated from that of the parent company.</p>\\r\\n\\r\\n<p>With EVM’s structure in place, the project team began the arduous process of bringing together the various stakeholders in the project. Land rights had to be secured; scientific studies had to be completed; an off-taker had to be identified; a turbine manufacturer selected; and construction had to be initiated and finished. &nbsp;As might be expected, the project was to take many twists and turns before electricity began flowing in March of 2010.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_override_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Project Structure\',
            \'format\' => NULL,
            \'safe_value\' => \'Project Structure\',
          ),
        ),
      ),
      \'field_document_grid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'95\',
            \'revision_id\' => \'96\',
          ),
        ),
      ),
      \'field_document_list\' => array(),
      \'field_primary_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2762\',
        \'nid\' => \'63\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2760\',
        \'link_path\' => \'node/63\',
        \'router_path\' => \'node/%\',
        \'link_title\' => \'Project Structure\',
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'0\',
        \'expanded\' => \'0\',
        \'weight\' => \'-15\',
        \'depth\' => \'3\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2760\',
        \'p3\' => \'2762\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/63\',
        \'title\' => \'Project Structure\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407876202\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => \'Project Structure\',
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'356\',
        \'source\' => \'node/63\',
        \'alias\' => \'creating-hte-wind-farm/project-structure\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'63\',
      \'uid\' => \'107\',
      \'title\' => \'Introduction\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'819047b7-23e8-4116-b2aa-4e2fd0096667\',
      \'ds_switch\' => \'\',
      \'nid\' => \'59\',
      \'type\' => \'page\',
      \'language\' => \'en-US\',
      \'created\' => \'1407872301\',
      \'changed\' => \'1407902855\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'bdf40f97-667d-4e6c-8b7d-dad982543500\',
      \'revision_timestamp\' => \'1407902855\',
      \'revision_uid\' => \'107\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>When Walmart de México y Centroamérica decided to buy the power generated by the Electrica del Valle de México’s (EVM) wind farm, EVM’s struggling project received a significant boost. While the proposed wind farm was located in an area with abundant wind resources, absent a creditworthy off-taker the project would not have been able to line up financing. With Walmart de México’s 15-year PPA (Power Purchase Agreement) in hand, the developers were able to gain financial backing, buy and erect the turbines, and begin generating electricity by 2010.</p>\\r\\n\\r\\n<p>For Walmart de México, becoming the wind farm’s off-taker accomplished a number of important objectives. EVM guaranteed electricity at below the rates charged by Mexico’s state-controlled utility, shaving costs for the famously thrifty retailer. In addition, the project allowed Walmart de México to get closer to some of its sustainability goals. The wind farm would supply electricity to 348 Walmart de México facilities in central Mexico, providing 18% of the electricity Walmart de México consumed in Mexico in 2010.</p>\\r\\n\\r\\n<p>The wind farm was just one part of the efforts Walmart de México was undertaking in the sustainability area. The company had pledged to meet ambitious goals, looking to reduce waste in its and its suppliers\' operations. In the energy area, the company was hoping to receive 50% of its energy from renewable sources by 2015, even in a period of rapid growth, increasing its square footage in Mexico by 12% in 2012 alone.&nbsp; All told, the efforts of Walmart de México had made it the world’s leading retailer in the area of sustainability – a distinction the company hoped to build on.</p>\\r\\n\\r\\n<p>The success of the EVM wind farm had ignited Manuel Gómez Peña’s thinking about further renewable energy projects. Gómez, Walmart de México’s Director of Sustainability, was considering ways the project financing structure might be further adapted to allow Walmart de México to participate in and benefit from other projects. Gómez was also considering the mix of renewable energy sources. In addition to wind, solar and mini-hydroelectric projects were possibilities that Walmart de México could consider.</p>\\r\\n\\r\\n<p>Any project that Walmart de México undertook had to work in concert with Mexico’s electricity grid and rate-making structure. Mexico’s political leadership had announced a commitment to electricity from renewable energy sources, to move the country away from its traditional reliance on natural gas and oil. Mexico’s government-controlled electricity utility had simplified the transmission rates for renewable energy and had constructed a few projects of its own. However, there were no special feed-in-tariffs for renewable energy and only a few tax incentives for the construction of renewable energy projects. Furthermore, there was a dearth of independent project developers with the resources and expertise to build large-scale projects.</p>\\r\\n\\r\\n<p>Gómez also had to take into account Walmart de México’s capabilities and focus. While the company had made sustainability a priority, corporate officials were loathe to take on projects that took them too far from the company’s central activity of retailing. The company’s investment group analyzed sustainability projects on the same basis as any other project, concentrating on return on investment.</p>\\r\\n\\r\\n<p>Gómez believed that the situation called for creative thinking. How could the company leverage its sterling credit rating to get renewable energy projects off the ground? For the EVM wind farm, Walmart de México\'s equity investment was minimal, just sufficient to meet the requirements for Mexico\'s self-supply tariff. Should the company take a larger equity position in further energy projects, rather than simply serving as an off-taker? What technologies should Walmart de México employ to achieve its renewable energy goals? Should the company hold a portfolio of projects or just concentrate on one technology? How could Walmart de México expand the program outside of Mexico to the other central American countries in which it operated? &nbsp;Was there a way to include suppliers into a renewable program?</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_override_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Introduction\',
            \'format\' => NULL,
            \'safe_value\' => \'Introduction\',
          ),
        ),
      ),
      \'field_document_grid\' => array(),
      \'field_document_list\' => array(),
      \'field_primary_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2757\',
        \'nid\' => \'59\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2756\',
        \'link_path\' => \'node/59\',
        \'router_path\' => \'node/%\',
        \'link_title\' => \'Introduction\',
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'0\',
        \'expanded\' => \'0\',
        \'weight\' => \'-15\',
        \'depth\' => \'3\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2756\',
        \'p3\' => \'2757\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/59\',
        \'title\' => \'Introduction\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407872301\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => \'Introduction\',
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'351\',
        \'source\' => \'node/59\',
        \'alias\' => \'overview/introduction\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'64\',
      \'uid\' => \'107\',
      \'title\' => \'Contest Assignment\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9fbb3d1f-8bb5-422a-88a8-f56830356c4a\',
      \'ds_switch\' => \'\',
      \'nid\' => \'60\',
      \'type\' => \'page\',
      \'language\' => \'en-US\',
      \'created\' => \'1407872417\',
      \'changed\' => \'1407902913\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c3cca38e-84f6-47ec-baa1-f24c725121bc\',
      \'revision_timestamp\' => \'1407902913\',
      \'revision_uid\' => \'107\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Aspen Institute 2012 Business &amp; Society Case Competition Assignment</p>\\r\\n\\r\\n<p>Your assignment is to put yourself into the shoes of Manuel Gómez Peña, Walmart de México’s Director of Sustainability, and develop a plan for the company’s renewable energy program. The presentation should be directed to Walmart de México’s leaders and address these issues:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>The appropriate mix of renewable technologies Walmart should utilize to achieve its sustainability goals in electricity usage.</li>\\r\\n\\t<li>The investment policy Walmart should follow in developing alternative energy installations, particularly the question of whether the company should invest more than token amounts in the projects.</li>\\r\\n\\t<li>Any further opportunities that might be exploited in renewable energy based on the success of the La Ventosa project.</li>\\r\\n\\t<li>The risks attendant in the choice of technologies, the investment policy and other strategies that you have outlined.</li>\\r\\n\\t<li>The appropriateness of Walmart’s policy of requiring that sustainable projects meet the same investment criteria as other projects. Are there criteria, such as societal impacts or to be seen as an environmental leader, that Walmart de México should take into consideration in its investment decisions? How can Walmart incorporate additional criteria while continuing to meet the company’s goal of delivering high value to its customers?&nbsp;</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong>A note on sources: The case tabs and subtabs include links to a wide variety of documents, interviews, and reports that should be sufficient to do a reasonable analysis. You may consider additional sources of information as long as the information is readily available on the internet (i.e. not behind a pay wall or otherwise proprietary). Please document the source of any external data that you use in your analysis.</strong></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
          ),
        ),
      ),
      \'field_override_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Contest Assignment\',
            \'format\' => NULL,
            \'safe_value\' => \'Contest Assignment\',
          ),
        ),
      ),
      \'field_document_grid\' => array(),
      \'field_document_list\' => array(),
      \'field_primary_image\' => array(
        \'und\' => array(
          array(
            \'value\' => \'93\',
            \'revision_id\' => \'94\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'book\' => array(
        \'mlid\' => \'2758\',
        \'nid\' => \'60\',
        \'bid\' => \'57\',
        \'menu_name\' => \'book-toc-57\',
        \'plid\' => \'2756\',
        \'link_path\' => \'node/60\',
        \'router_path\' => \'node/%\',
        \'link_title\' => \'Contest Assignment\',
        \'options\' => array(),
        \'module\' => \'book\',
        \'hidden\' => \'0\',
        \'external\' => \'0\',
        \'has_children\' => \'0\',
        \'expanded\' => \'0\',
        \'weight\' => \'-14\',
        \'depth\' => \'3\',
        \'customized\' => \'0\',
        \'p1\' => \'2755\',
        \'p2\' => \'2756\',
        \'p3\' => \'2758\',
        \'p4\' => \'0\',
        \'p5\' => \'0\',
        \'p6\' => \'0\',
        \'p7\' => \'0\',
        \'p8\' => \'0\',
        \'p9\' => \'0\',
        \'updated\' => \'0\',
        \'href\' => \'node/60\',
        \'title\' => \'Contest Assignment\',
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1407872417\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'107\',
      \'comment_count\' => \'0\',
      \'name\' => \'George Heimel\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'book_helper\' => array(
        \'link_title_custom\' => \'Contest Assignment\',
        \'link_title_sync\' => TRUE,
      ),
      \'path\' => array(
        \'pid\' => \'352\',
        \'source\' => \'node/60\',
        \'alias\' => \'overview/contest-assignment\',
        \'language\' => \'en-US\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
