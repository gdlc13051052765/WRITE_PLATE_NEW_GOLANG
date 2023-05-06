#!/bin/bash


#1、替换 /etc/profile �

echo "copy profile ................"

cp -r /home/meican/ota/profile /etc/

#2、替换 /usr/lib/libasound.so.2.0

echo "copy libasound.so.2.0.0 to /usr/lib ....................."

cp -r /home/meican/ota/libasound.so.2.0.0 /usr/lib/

#3、将qt_5.12.6.tar.gz 解压到/usr/qt_5

echo "unzip qt_5.12.6.tar.gz ..............."

tar -xvf /home/meican/ota/qt_5.12.6.tar.gz -C /usr/

#4、将alsa_lib.tar.gz 解压到 

echo "unzip alsa_lib.tar.gz  ..............."
tar -xvf /home/meican/ota/alsa_lib.tar.gz -C /opt/

#5、将font_lib.tar.gz 解压到 
echo "unzip font_lib.tar.gz ..............."
tar -xvf /home/meican/ota/font_lib.tar.gz -C /opt/

#6、source /etc/profie
echo "updata profile .............."
sleep 1
echo "setup env successful"

exit 0

