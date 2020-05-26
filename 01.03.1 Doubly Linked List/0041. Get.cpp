#include "0000. Typedef.h"
/*********************************************************************************
  *������ GetElem
  *������ ����ָ�����index�Ľ�㲢������ָ��
  *���룺	DLNode *head		��ִ�в��Ҳ���˫������ͷָ��
		int index		Ŀ��������index
  *����� ��
  *���أ� 	DLNode* pointer		Ŀ�����ָ��
		DLNode* head		ͷָ��
		NULL			����ʧ�ܵķ���
**********************************************************************************/
DLNode* GetElem(DLNode *head, int index) {
	if (index < 0) return NULL;				// 1.����λ�� "��ͷ�ڵ�֮ǰ"
	if (index == 0) return head;				// 2.����λ��Ϊ "ͷ�ڵ�"
	DLNode *p = head;
	for (int i = 0; i < index; i++) {			/* �ж��Ƿ��ѵ��� "Ŀ��λ��"*/
		if (p == NULL) break;				/* �ж��Ƿ��ѵ��� "��β" */
		p = p->next;
	}
	return p;

}