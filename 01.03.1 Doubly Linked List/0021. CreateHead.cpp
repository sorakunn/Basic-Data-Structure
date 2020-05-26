#include "0000. Typedef.h"
/*********************************************************************************
  *������ CreateHead
  *������ �Ӻ���ǰ������˫����ÿ�ν���Ԫ�ز���"ͷָ���"
  *���룺	DLNode *head		��ִ�� "ͷ�巨" �����˫����ͷָ��*head
		Elem x[]		��Ŵ�����Ԫ�ص�����x[]
		int n			�����д�����Ԫ�صĸ���n
  *����� ���Ԫ�ز����˫����ͷָ��*head
  *���أ�	��
**********************************************************************************/
void CreateHead(DLNode *head, Elem x[], int n) {
	for (int i = 0; i < n; i++) {
		DLNode *inserted = (DLNode*)malloc(sizeof(DLNode));
		inserted->Date = x[i];
		inserted->prior = head;
		inserted->next = head->next;
		head->next = inserted;
		if (inserted->next != NULL) {
			inserted->next->prior = inserted;
		}
	}
}