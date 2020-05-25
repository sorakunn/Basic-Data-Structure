#include "0000. Typedef.h"
/*********************************************************************************
  *函数： InsertElem
  *描述： 在单链表的指定结点index处挿入包含所给元素x的新结点
  *输入：	SLNode *head		待执行插入操作单链表的头指针*head
		int index		插入位置的结点序号index
		Elem x			待插入的目标元素x
  *输出： 已插入新结点的单链表头指针*head
  *返回：	bool true		插入成功的反馈
		bool false		插入失败的反馈
**********************************************************************************/
bool InsertElem(SLNode *head, int index, Elem x) {
	// 由于单链表没有前结点信息，所以只能对目标结点的前一个结点实行 "后插法" 
	SLNode *preTarget = GetElem(head, index-1);		/* 调用 GetElem 找到指定位置结点的 "前一个结点" */
	// 若找不到则退出
	if (preTarget == NULL) return false;
	// 构建新结点
	SLNode *insert = (SLNode*)malloc(sizeof(SLNode));
	insert->Date = x;
	// 先连后再连前, 否则会丢失后结点信息
	insert->next = preTarget->next;				/* 新结点放在 "指定结点之前" */ 
	preTarget->next = insert;				/* 新结点放在 "前结点之后" */
	return true;
}