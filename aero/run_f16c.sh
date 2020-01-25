#!/bin/bash

################################################################################

TOOL=./bin/aero_coefficients

################################################################################

rm *.csv

################################################################################

# fuselage - positive
$TOOL \
./data/uh60/aoa.csv uh60_pos_cx.csv \
./data/uh60/aoa.csv uh60_pos_cz.csv \
15.0  0.422 \
20.0  0.507 \
60.0  0.845 \
      0.398 \
10.0  0.466 \
15.0  0.528 \
20.0  0.618 \
60.0  1.858 \
      2.534

# fuselage - negative
$TOOL \
./data/uh60/aoa.csv uh60_neg_cx.csv \
./data/uh60/aoa.csv uh60_neg_cz.csv \
15.0  0.422 \
20.0  0.591 \
50.0  1.436 \
      0.398 \
10.0  0.466 \
15.0  0.528 \
20.0  0.618 \
60.0  1.858 \
      2.534

# fuselage - sideslip
$TOOL \
./data/uh60/aoa.csv uh60_cx_beta.csv \
./data/uh60/aoa.csv uh60_cy_beta.csv \
25.0  -1.098 \
30.0  -1.216 \
50.0  -1.740 \
      0.000 \
15.0  0.152 \
20.0  0.275 \
30.0  0.650 \
60.0  2.390 \
      2.880

################################################################################

# default values
# $TOOL \
# ./data/uh60/aoa.csv uh60_cx.csv \
# ./data/uh60/aoa.csv uh60_cz.csv \
# 15.0  1.2 \
# 20.0  0.8 \
# 45.0  1.0 \
#       0.01 \
# 10.0  0.1 \
# 15.0  0.2 \
# 20.0  0.3 \
# 60.0  1.5 \
#       2.1

################################################################################
