#!/bin/bash

################################################################################

APP_NAME=mscsim-tools
APP_VER=0.1

################################################################################

APP_DIR=${APP_NAME}_${APP_VER}_focal_amd64

sudo rm -R $APP_DIR
sudo rm $APP_DIR.deb

mkdir $APP_DIR
mkdir $APP_DIR/DEBIAN
mkdir $APP_DIR/usr
mkdir $APP_DIR/usr/bin
mkdir $APP_DIR/usr/share
mkdir $APP_DIR/usr/share/applications
mkdir $APP_DIR/usr/share/icons
mkdir $APP_DIR/usr/share/icons/hicolor
mkdir $APP_DIR/usr/share/icons/hicolor/128x128
mkdir $APP_DIR/usr/share/icons/hicolor/128x128/apps

cp deb_mscsim-tools_amd64.control $APP_DIR/DEBIAN/control

cp mscsim-aero/bin/mscsim-aero $APP_DIR/usr/bin/
cp mscsim-asm3d/bin/mscsim-asm3d $APP_DIR/usr/bin/
cp mscsim-fgrec/bin/mscsim-fgrec $APP_DIR/usr/bin/
cp mscsim-mass/bin/mscsim-mass $APP_DIR/usr/bin/

cp mscsim-aero.desktop $APP_DIR/usr/share/applications/
cp mscsim-asm3d.desktop $APP_DIR/usr/share/applications/
cp mscsim-fgrec.desktop $APP_DIR/usr/share/applications/
cp mscsim-mass.desktop $APP_DIR/usr/share/applications/

cp mscsim-aero.png $APP_DIR/usr/share/icons/hicolor/128x128/apps/
cp mscsim-asm3d.png $APP_DIR/usr/share/icons/hicolor/128x128/apps/
cp mscsim-fgrec.png $APP_DIR/usr/share/icons/hicolor/128x128/apps/
cp mscsim-mass.png $APP_DIR/usr/share/icons/hicolor/128x128/apps/

sudo chown root:root -R $APP_DIR
sudo chmod 0755 $APP_DIR/usr/bin/mscsim-aero
sudo chmod 0755 $APP_DIR/usr/bin/mscsim-asm3d
sudo chmod 0755 $APP_DIR/usr/bin/mscsim-fgrec
sudo chmod 0755 $APP_DIR/usr/bin/mscsim-mass
sudo chmod 0755 $APP_DIR/usr/share/applications/mscsim-aero.desktop
sudo chmod 0755 $APP_DIR/usr/share/applications/mscsim-asm3d.desktop
sudo chmod 0755 $APP_DIR/usr/share/applications/mscsim-fgrec.desktop
sudo chmod 0755 $APP_DIR/usr/share/applications/mscsim-mass.desktop
sudo chmod 0755 $APP_DIR/usr/share/icons/hicolor/128x128/apps/mscsim-aero.png
sudo chmod 0755 $APP_DIR/usr/share/icons/hicolor/128x128/apps/mscsim-asm3d.png
sudo chmod 0755 $APP_DIR/usr/share/icons/hicolor/128x128/apps/mscsim-fgrec.png
sudo chmod 0755 $APP_DIR/usr/share/icons/hicolor/128x128/apps/mscsim-mass.png

dpkg -b $APP_DIR/

################################################################################

read -p "Press any key to continue..." -n1 -s
