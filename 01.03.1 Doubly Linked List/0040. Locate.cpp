#include "0000. Typedef.h"
/*********************************************************************************
  *函数： LocateElem
  *描述： 查找值为x的第一个结点并返回其指针
  *输入：	DLNode *head		待执行查找操作双链表的头指针*head
		Elem x			需查找的目标结点值x
  *输出： 无
  *返回： 	DLNode* pointer		目标结点的指针
		NULL			查找失败的反馈
**********************************************************************************/
DLNode* LocateElem(DLNode* head, Elem x) {
	DLNode *p = head;
	// 有头指针的双链表要先进一格
	p = p->next;
	while (p) {
		if (p->Date == x) break;
		p = p->next;
	}
	return p;
}