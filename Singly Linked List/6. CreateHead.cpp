#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		CreateHead
  *Description��		�Ӻ���ǰ������������ÿ�ν���Ԫ�ز���"ͷָ���"
					SLNode *head	��ִ�� "ͷ�巨" �����ͷָ��
					Elem x[]		��Ŵ�����Ԫ�ص�����
					int n			�����д�����Ԫ�صĸ���
  *Output:  ���Ԫ�ز���ĵ������ͷָ��
  *Return:  ��
**********************************************************************************/
void CreateHead(SLNode *head, Elem x[], int n) {
	SLNode *p = head;
	for (int i = 0; i < n; i++) {							// ���������е�ÿ������
		SLNode *temp = (SLNode*)malloc(sizeof(SLNode));		// ����һ�����
		temp->Date = x[i];									// ��������
		temp->next = p->next;								/* �½���β���� "��һ��Ԫ��ǰ" */ 
		p->next = temp;										/* �½���ͷ���� "ͷָ���" */ 
	}
}