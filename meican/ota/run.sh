kill -9 $(pidof  golang)
###
 # @Author: your name
 # @Date: 2022-04-19 11:35:37
 # @LastEditTime: 2022-04-20 18:15:57
 # @LastEditors: Please set LastEditors
 # @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 # @FilePath: \golange:\Thomas yang\Project\Disk_writer\lastest_for_lc\Build_output\新建文件夹\run.sh
### 
kill -9 $(pidof  WriteDisk)



chmod 777 /home/meican/ota/*
sleep 2
/home/meican/ota/setup_env.sh 

cp -r  /home/meican/ota/WriteDisk /home/meican
cp -r  /home/meican/ota/golang /home/meican
cp -r  /home/meican/ota/librfal_st25r3916.so /usr/lib
cp -r  /home/meican/ota/mct_v1_1_test /home/meican
cp -r  /home/meican/ota/rebootQt.sh /home/meican
chmod 777 /home/meican/golang
chmod 777 /home/meican/WriteDisk

reboot

