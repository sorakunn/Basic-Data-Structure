#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		Print
  *Description��		��ӡ�����������Ԫ��
					SLNode *head	����ӡ�������ͷָ��
  *Output:  �����������Ԫ��
  *Return:  ��
**********************************************************************************/
void Print(SLNode *head) {
	SLNode *p;
	p = head;
	p = p->next;
	while (p) {
		printf("%d ", p->Date);
		p = p->next;
	}
	printf("\n");
}