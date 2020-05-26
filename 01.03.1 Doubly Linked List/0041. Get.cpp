#include "0000. Typedef.h"
/*********************************************************************************
  *函数： GetElem
  *描述： 查找指定序号index的结点并返回其指针
  *输入：	DLNode *head		待执行查找操作双链表的头指针
		int index		目标结点的序号index
  *输出： 无
  *返回： 	DLNode* pointer		目标结点的指针
		DLNode* head		头指针
		NULL			查找失败的反馈
**********************************************************************************/
DLNode* GetElem(DLNode *head, int index) {
	if (index < 0) return NULL;				// 1.查找位置 "在头节点之前"
	if (index == 0) return head;				// 2.查找位置为 "头节点"
	DLNode *p = head;
	for (int i = 0; i < index; i++) {			/* 判断是否已到达 "目标位置"*/
		if (p == NULL) break;				/* 判断是否已到达 "表尾" */
		p = p->next;					/* 进入下一结点 */
		//退出循环时，找到了则p为 "目标结点地址"，没找到则p为 "NULL"
	}
	return p;
}