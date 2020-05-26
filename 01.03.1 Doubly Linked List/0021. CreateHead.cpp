#include "0000. Typedef.h"
/*********************************************************************************
  *函数： CreateHead
  *描述： 从后往前逆向建立双链表，每次将新元素插在"头指针后"
  *输入：	DLNode *head		待执行 "头插法" 建表的双链表头指针*head
		Elem x[]		存放待插入元素的数组x[]
		int n			数组中待插入元素的个数n
  *输出： 完成元素插入的双链表头指针*head
  *返回：	无
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