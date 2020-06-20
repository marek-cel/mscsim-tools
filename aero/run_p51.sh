#!/bin/bash

################################################################################

TOOL=./bin/mscsim-aero

################################################################################

rm *.csv
      
################################################################################

# horizontal stabilizer - positive
$TOOL \
./data/p51/aoa_stab_cx.csv p51_stab_h_pos_cx.csv \
./data/p51/aoa_stab_cz.csv p51_stab_h_pos_cz.csv \
15.0  0.43 \
25.0  0.80 \
45.0  1.00 \
      0.0128 \
15.0  0.06 \
25.0  0.62 \
50.0  1.04 \
70.0  1.8 \
      2.0

# horizontal stabilizer - negative    
$TOOL \
./data/p51/aoa_stab_cx.csv p51_stab_h_neg_cx.csv \
./data/p51/aoa_stab_cz.csv p51_stab_h_neg_cz.csv \
15.0  0.70 \
25.0  1.06 \
45.0  1.00 \
      0.0128 \
14.0  0.06 \
30.0  0.62 \
50.0  1.04 \
70.0  1.8 \
      2.0
      
################################################################################

# vertical stabilizer
$TOOL \
./data/p51/aoa_stab_cx.csv p51_stab_v_cx.csv \
./data/p51/aoa_stab_cy.csv p51_stab_v_cy.csv \
10.0  -0.72 \
20.0  -1.23 \
60.0  -1.84 \
      0.03739 \
10.0  0.14962 \
20.0  0.55510 \
30.0  0.95828 \
60.0  2.31193 \
      2.57282

################################################################################
