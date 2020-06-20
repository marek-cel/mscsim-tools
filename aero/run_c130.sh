#!/bin/bash

################################################################################

TOOL=./bin/mscsim-aero

################################################################################

rm *.csv

################################################################################

# horizontal stabilizer - positive
$TOOL \
./data/c130/aoa_stab_cx.csv c130_stab_h_pos_cx.csv \
./data/c130/aoa_stab_cz.csv c130_stab_h_pos_cz.csv \
34.0  1.50 \
55.0  1.23 \
70.0  1.18 \
      0.06133 \
12.0  0.11719 \
34.0  0.59638 \
55.0  0.96 \
70.0  1.74 \
      2.4

# horizontal stabilizer - negative    
$TOOL \
./data/c130/aoa_stab_cx.csv c130_stab_h_neg_cx.csv \
./data/c130/aoa_stab_cz.csv c130_stab_h_neg_cz.csv \
24.0  0.93 \
28.0  0.66 \
42.0  1.26 \
      0.06133 \
12.0  0.11719 \
34.0  0.59638 \
55.0  0.96 \
70.0  1.74 \
      2.4
    
################################################################################

# vertical stabilizer
# $TOOL \
# ./data/c130/aoa_stab_cx.csv c130_stab_v_cx.csv \
# ./data/c130/aoa_stab_cy.csv c130_stab_v_cy.csv \
# 10.0  -0.72 \
# 20.0  -1.23 \
# 60.0  -1.84 \
#       0.03739 \
# 10.0  0.14962 \
# 20.0  0.55510 \
# 30.0  0.95828 \
# 60.0  2.31193 \
#       2.57282
      
# vertical stabilizer - HD 
# $TOOL \
# ./data/c130/aoa_stab_hd_cx.csv c130_stab_v_cx_hd.csv \
# ./data/c130/aoa_stab_hd_cz.csv c130_stab_v_cy_hd.csv \
# 10.0  -0.72 \
# 20.0  -1.23 \
# 60.0  -1.84 \
#       0.03739 \
# 10.0  0.14962 \
# 20.0  0.55510 \
# 30.0  0.95828 \
# 60.0  2.31193 \
#       2.57282
