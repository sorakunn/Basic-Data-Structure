#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		Print
  *Description��		��ӡ���Ա������Ԫ��
					/Sqlist list/ ָ�����ӡ���Ա��ָ��
  *Output:  elements of list
  *Return:  none
**********************************************************************************/
void Print(SqList list) {
	for (int i = 0; i < list.length; i++) {
		printf("%d ", list.Date[i]);
	}
	printf("\n");
}