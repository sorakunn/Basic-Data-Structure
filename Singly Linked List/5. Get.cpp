#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		GetElem
  *Description：		查找位置index的结点并返回其指针
					SLNode *head	待执行查找操作链表的头指针
					int index		目标结点的位置index
  *Output:  无
  *Return:  (SLNode*) 指向目标结点的指针
**********************************************************************************/
SLNode* GetElem(SLNode *head, int index) {
	if (index < 0) return NULL;					// 查找位置 "小于起点"
	if (index == 0) return head;				// 查找位置为 "头节点"
	SLNode *p = head;
	for (int i = 0; i < index; i++) {			// 判断是否已到达 "目标位置"
		if (p==NULL) return NULL;				// 判断是否已到达 "表尾"
		else p = p->next;						// 进入下一结点
	}
	return p;
}