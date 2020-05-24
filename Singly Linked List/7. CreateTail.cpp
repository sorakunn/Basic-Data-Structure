#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		CreateTail
  *Description��		��ǰ����������������ÿ�ν���Ԫ�ز���"��β"
					SLNode *head	��ִ�� "β�巨" �����ͷָ��
					Elem x[]		��Ŵ�����Ԫ�ص�����
					int n			�����д�����Ԫ�صĸ���
  *Output:  ���Ԫ�ز���ĵ������ͷָ��
  *Return:  ��
**********************************************************************************/
void CreateTail(SLNode *head, Elem x[], int n) {
	SLNode *p = head;
	for (int i = 0; i < n; i++) {							// ���������е�ÿ������
		SLNode *temp = (SLNode*)malloc(sizeof(SLNode));		// ����һ�����
		temp->Date = x[i];									// ��������
		temp->next = NULL;									/* �½���β���� "NULL" */
		p->next = temp;										/* �½���ͷ���� "��β" */
		p = temp;											/* �½�� "��ɱ�β" */
	}
}