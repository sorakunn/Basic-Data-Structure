#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		CreateHead
  *Description：		从后往前逆向建立单链表，每次将新元素插在"头指针后"
					SLNode *head	待执行 "头插法" 建表的头指针
					Elem x[]		存放待插入元素的数组
					int n			数组中待插入元素的个数
  *Output:  完成元素插入的单链表的头指针
  *Return:  无
**********************************************************************************/
void CreateHead(SLNode *head, Elem x[], int n) {
	SLNode *p = head;
	for (int i = 0; i < n; i++) {							// 对于数组中的每个数据
		SLNode *temp = (SLNode*)malloc(sizeof(SLNode));		// 建立一个结点
		temp->Date = x[i];									// 放入数据
		temp->next = p->next;								/* 新结点的尾放在 "第一个元素前" */ 
		p->next = temp;										/* 新结点的头放在 "头指针后" */ 
	}
}