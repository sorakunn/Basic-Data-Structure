#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		LocateElem
  *Description��		����ElemԪ��ֵΪx�ĵ�һ����㲢������ָ��
					SLNode* head		ָ���ִ�в��Ҳ������Ա��ָ��
					Elem x				 ָ���������ȡ��Ԫ�صĿ�ElemԪ�ص�ָ��
  *Output:  none
  *Return:  index of target Elem element
**********************************************************************************/
SLNode* LocateElem(SLNode* head, Elem x){
	for (int i = 0; i < list.length; i++) {
		if (list.Date[i] == x) return i;
	}
	return -1;
}