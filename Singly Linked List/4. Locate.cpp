#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		LocateElem
  *Description��		����ֵΪx�ĵ�һ����㲢������ָ��
					SLNode* head	��ִ�в��Ҳ��������ͷָ��
					Elem x			����ҵ�Ŀ��ElemԪ��
  *Output:  ��
  *Return:  (SLNode*) ָ��Ŀ�����ָ��
**********************************************************************************/
SLNode* LocateElem(SLNode* head, Elem x) {
	SLNode *p = head;
	p = p->next;					// ͷָ��Ҫ�Ƚ�һ��
	while (p != NULL) {
		if (p->Date == x) break;
		p = p->next;
	}
	return p;
}