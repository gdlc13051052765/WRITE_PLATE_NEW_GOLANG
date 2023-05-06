#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "wifi_config_api.h"


/*=======================================================================================
* 函 数 名： wifi_config_setup_start
* 参    数： None
* 功能描述:  开始接收手机udp广播wifi账号密码
* 返 回 值： 
* 备    注： 
* 作    者： lc
* 创建时间： 2021-05-10 
==========================================================================================*/
int wifi_config_setup_start(void);

/*=======================================================================================
* 函 数 名： wifi_config_setup_query
* 参    数： None
* 功能描述:  查询udp广播数据
* 返 回 值： 接收到数据返回0
* 备    注： 
* 作    者： lc
* 创建时间： 2021-05-10 
==========================================================================================*/
int wifi_config_setup_query(void);

/*=======================================================================================
* 函 数 名： wifi_config_setup_get_ssid_password
* 参    数： None
* 功能描述:  获取到WiFi  ssid  password
* 返 回 值： 接收到数据返回0
* 备    注： 
* 作    者： lc
* 创建时间： 2021-05-10 
==========================================================================================*/
int wifi_config_setup_get_ssid_password(char *ssid, char *password);

/*=======================================================================================
* 函 数 名： wifi_config_test
* 参    数： None
* 功能描述:  
* 返 回 值： 
* 备    注： 
* 作    者： lc
* 创建时间： 2021-05-10 
==========================================================================================*/
int wifi_config_test(int argc, char* argv[]);