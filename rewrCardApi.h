/*
 ******************************************************************************
 * INCLUDES
 ******************************************************************************
 */
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define EXAMPLE_RFAL_POLLER_DEVICES      10 //场内最大的标签个数
#define UID_LEN 8//uid长度

//标签信息结构体
typedef struct 
{
  char uid[UID_LEN];
}rfalTagRes;

/*==================================================================================
* 函 数 名： rfal_init
* 参    数： None
* 功能描述:  nfc初始化
* 返 回 值： 成功返回 0
* 备    注： 
* 作    者： lc
* 创建时间： 2021-04-20 
==================================================================================*/
int rfal_init(void);
/*==================================================================================
* 函 数 名： rfal_find_tag
* 参    数： tag标签信息
* 功能描述:  查询场内的标签个数
* 返 回 值： 返回场内标签个数
* 备    注： None
* 作    者： lc
* 创建时间： 2021-04-20 
==================================================================================*/
int rfal_find_tag(rfalTagRes *tag);

/*==================================================================================
* 函 数 名： rfal_read_single_block
* 参    数： 传入uid，返回的数据block_buff_Read
* 功能描述:  读取对应的uid标签block数据
* 返 回 值： 成功返回读取的block数据长度
* 备    注： None
* 作    者： lc
* 创建时间： 2021-04-20 
==================================================================================*/
int rfal_read_single_block(uint8_t *uid, uint8_t block_num, uint8_t *block_buff_Read);

/*==================================================================================
* 函 数 名： rfal_write_single_block
* 参    数： 传入uid，block_num扇区，block_buff_Write写入的block数据,write_block_len写入的数据长度
* 功能描述:  往对应的uid标签相应的block写入数据
* 返 回 值： 成功返回0
* 备    注： Non
* 作    者： lc
* 创建时间： 2021-04-20 
==================================================================================*/
int rfal_write_single_block(uint8_t *uid, uint8_t block_num, uint8_t *block_buff_Write, uint8_t write_block_len);
