/**@file        MB_BSP.h
* @details      MB_BSP��ͷ�ļ�,�����˴��ں궨��,�����˴��ڳ�ʼ��Ӧ�õ�API����
* @author       ������
* @date         2020-09-14
* @version      V1.0.0
* @copyright    2020-2030,��������Ϊ�Ƽ���չ���޹�˾
**********************************************************************************
* @par �޸���־:
* <table>
* <tr><th>Date        <th>Version  <th>Author    <th>Description
* <tr><td>2020/09/14  <td>1.0.0    <td>������    <td>������ʼ�汾
* </table>
*
**********************************************************************************
*/

#ifndef __MB_BSP_H
#define __MB_BSP_H
#ifdef __cplusplus
 extern "C" {
#endif
#include "main.h"
#include "cpu.h"
#include "mb.h"
#include "In_Flash.h"

#include "stdio.h"

#define USART_BAUDRATE_4800_CODE        2   ///< �����ʴ���,����4800 bit/s
#define USART_BAUDRATE_9600_CODE        3   ///< �����ʴ���,����9600 bit/s
#define USART_BAUDRATE_19200_CODE       4   ///< �����ʴ���,����19200 bit/s
#define USART_BAUDRATE_38400_CODE       5   ///< �����ʴ���,����38400 bit/s
#define USART_BAUDRATE_57600_CODE       6   ///< �����ʴ���,����57600 bit/s
#define USART_BAUDRATE_115200_CODE      7   ///< �����ʴ���,����115200 bit/s

#define USART_PARITY_NONE_CODE          3   ///< ��żУ�����,��������żУ��
#define USART_PARITY_ODD_CODE           1   ///< ��żУ�����,������У��
#define USART_PARITY_EVEN_CODE          2   ///< ��żУ�����,����żУ��

/** Ĭ�ϲ����� 9600 bit/s */
#define DEFAULT_UART_BAUD               9600   

/**@brief       ��ȡFlash��Ϣ�ʹ��ڳ�ʼ��
* @param[in]    �� 
* @return       ��
*/
void  ModBus_Init(void);

#endif