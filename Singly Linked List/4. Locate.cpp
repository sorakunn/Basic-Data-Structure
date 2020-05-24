#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		LocateElem
  *Description：		查找值为x的第一个结点并返回其指针
					SLNode* head	待执行查找操作链表的头指针
					Elem x			需查找的目标Elem元素
  *Output:  无
  *Return:  (SLNode*) 指向目标结点的指针
**********************************************************************************/
SLNode* LocateElem(SLNode* head, Elem x) {
	SLNode *p = head;
	p = p->next;					// 头指针要先进一格
	while (p != NULL) {
		if (p->Date == x) break;
		p = p->next;
	}
	return p;
}