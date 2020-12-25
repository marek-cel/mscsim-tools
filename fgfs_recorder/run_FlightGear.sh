#!/bin/bash

fgfs \
  --disable-random-objects \
  --disable-random-vegetation \
  --disable-ai-models \
  --disable-ai-traffic \
  --disable-rembrandt \
  --fog-disable \
  --disable-distance-attenuation \
  --disable-horizon-effect \
  --disable-specular-highlight \
  --shading-flat \
  --disable-real-weather-fetch \
  --disable-clouds \
  --disable-clouds3d \
  --native-fdm=socket,out,60,,5505,udp \
  --start-date-lat=2010:04:01:12:00:00 \
  --aircraft=c172p-2dpanel \
  --airport=PHNL \
  --geometry=1024x768 \
  &> fgfs_out_$(date +%Y-%m-%d_%H:%M:%S).txt

# fgfs --native-fdm=socket,out,60,,5505,udp --start-date-lat=2010:04:01:12:00:00 --aircraft=c172p-2dpanel --airport=PHNL --geometry=1024x768 &> fgfs.txt
  
