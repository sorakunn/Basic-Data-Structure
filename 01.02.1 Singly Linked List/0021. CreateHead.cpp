#include "0000. Typedef.h"
/*********************************************************************************
  *函数： CreateHead
  *描述： 从后往前逆向建立单链表，每次将新元素插在"头指针后"
  *输入：	SLNode *head		待执行 "头插法" 建表的单链表头指针*head
		Elem x[]		存放待插入元素的数组x[]
		int n			数组中待插入元素的个数n
  *输出： 完成元素插入的单链表头指针*head
  *返回： 无
**********************************************************************************/
void CreateHead(SLNode *head, Elem x[], int n) {
	SLNode *p = head;
	for (int i = 0; i < n; i++) {
		SLNode *temp = (SLNode*)malloc(sizeof(SLNode));	/* 建立存放数据的结点 */
		temp->Date = x[i];
		// 先连后再连前, 否则会丢失后一个结点的地址信息
		temp->next = p->next;				/* 新结点的尾放在 "第一个元素前" */ 
		p->next = temp;					/* 新结点的头放在 "头指针后" */ 
	}
}