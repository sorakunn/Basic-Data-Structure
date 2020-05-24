#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		GetElem
  *Description��		����λ��index�Ľ�㲢������ָ��
					SLNode *head	��ִ�в��Ҳ��������ͷָ��
					int index		Ŀ�����λ��index
  *Output:  ��
  *Return:  (SLNode*) ָ��Ŀ�����ָ��
**********************************************************************************/
SLNode* GetElem(SLNode *head, int index) {
	if (index < 0) return NULL;					// ����λ�� "С�����"
	if (index == 0) return head;				// ����λ��Ϊ "ͷ�ڵ�"
	SLNode *p = head;
	for (int i = 0; i < index; i++) {			// �ж��Ƿ��ѵ��� "Ŀ��λ��"
		if (p==NULL) return NULL;				// �ж��Ƿ��ѵ��� "��β"
		else p = p->next;						// ������һ���
	}
	return p;
}