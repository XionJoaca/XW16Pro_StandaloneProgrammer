/************************************
STM32 GD32 UID�㷨���ܴ���DEMO��
www.xwopen.com
xuanweikeji.taobao.com
��Ȩ���С�
*************************************/

#ifndef uidencypt_user_h
#define uidencypt_user_h

#include "stdint.h"
#include "stdbool.h"

#define GONG_SHI_HAO                    (110)           //�޸�Ϊ��Ҫʹ�õĹ�ʽ�ţ���ֵҪ��������õ�һ��
#define CHANG_SHU                       (0X6AB85F)      //�޸�Ϊ��Ҫʹ�õĳ���ֵ����ֵҪ��������õ�һ��
#define CUN_FANG_QI_SHI_DI_ZHI          (0X8006000)     //�޸�Ϊ�����õĽ��ֵ�Ĵ�ŵ�ַ����ֵҪ��������õ�һ��,������4�ı�����ע�������ַҪ���������Ϻã���Ҫ��д��

#define CHIP_UID_ADDRESS                (0x1FFFF7E8)    //�޸�Ϊ��Ŀ��оƬ��UID���ڵĵ�ַ��ע�ⲻͬоƬ�ͺŲ�һ�������Ҫ���ֲ�ȷ��

//�����õ�˳���޸����UID˳���б�
#define D0_ID_INDEX     0X4  
#define D1_ID_INDEX     0X8
#define D2_ID_INDEX     0X1
#define D3_ID_INDEX     0X3
#define D4_ID_INDEX     0X0
#define D5_ID_INDEX     0X5
#define D6_ID_INDEX     0XA
#define D7_ID_INDEX     0X7
#define D8_ID_INDEX     0X9
#define D9_ID_INDEX     0X2
#define D10_ID_INDEX    0XB
#define D11_ID_INDEX    0X6

//�ⲿ�����������������ֵΪtrueʱ��˵��Ϊ���棬����ֵΪfalseʱ��˵��Ϊ���档
extern bool isDaoBan(void);

#endif//uidencypt_user_h                
