#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		LocateElem
  *Description��		����ֵΪx�ĵ�һ��ElemԪ�ز��������±�
					/Sqlist *list/ ָ���ִ�в��Ҳ������Ա��ָ��
					/Elem x/ ָ���������ȡ��Ԫ�صĿ�ElemԪ�ص�ָ��
  *Output:  none
  *Return:  index of target Elem element
**********************************************************************************/
int LocateElem(SqList list, Elem x) {
	for (int i = 0; i < list.length; i++) {
		if (list.Date[i] == x) return i;
	}
	return -1;
}