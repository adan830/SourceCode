/********************************************************************
	��������:	2005��11��2��
	����ʱ��:	16:55
	�ļ�����:	ItemTypes.h
	�ļ�·��:	d:\Prj\Server\Server\Item\ItemTypes.h
	
	�ļ����ܣ� ��Ʒ����\�궨���	��������
	�޸ļ�¼��
	
*********************************************************************/

#ifndef _ITEM_TYPES_H_
#define _ITEM_TYPES_H_

#include "Type.h"
//��Ʒϵͳ��������


//ItemBox �����ֵ
#define		MAX_ITEM_BOX_POOL					5000

//�����ɫװ���������Ը���
#define		MAX_GREEN_ITEM_EXT_ATTR				4



//�����������
#define		MAX_DROPBOX_CARRAGE					100

//���������
#define		MAX_MONSTER_DROPBOX					20

//ItemBox ����λ�������Χ
#define		ITEMBOX_DROP_RANGE					10

//���ItemQuality �� ��Ŀ����(�ڲ�ʹ��)
#define		MAX_ITEM_TABLE_QUALITYS				10

//���ItemValue �� ��Ŀ����
#define		MAX_ITEM_TABLE_VALUES				10



//�������ṹ
struct MONSTER_DROPBOXS 
{
	MONSTER_DROPBOXS()
	{
		memset(m_DropBox,0,sizeof(INT)*MAX_MONSTER_DROPBOX);
	}
	INT		m_DropBox[MAX_MONSTER_DROPBOX];
};




#endif