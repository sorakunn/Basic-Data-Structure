#include "0000. Typedef.h"
/*********************************************************************************
  *函数： CreateTail
  *描述： 从前往后正向建立单链表，每次将新元素插在"表尾"
  *输入：	SLNode *head		待执行 "尾插法" 建表的单链表头指针*head
		Elem x[]		存放待插入元素的数组x[]
		int n			数组中待插入元素的个数n
  *输出： 完成元素插入的单链表头指针*head
  *返回： 无
**********************************************************************************/
void CreateTail(SLNode *head, Elem x[], int n) {
	SLNode *p = head;
	for (int i = 0; i < n; i++) {
		SLNode *temp = (SLNode*)malloc(sizeof(SLNode));	/* 建立存放数据的结点 */
		temp->Date = x[i];
		temp->next = NULL;				/* 新结点的尾放入 "NULL" */
		p->next = temp;					/* 新结点的头放在 "表尾" */
		p = temp;					/* 新结点 "变成表尾" */
	}
}