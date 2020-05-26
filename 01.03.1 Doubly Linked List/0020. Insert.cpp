#include "0000. Typedef.h"
/*********************************************************************************
  *函数： InsertElem
  *描述： 在双链表的指定结点序号index处挿入包含所给元素x的新结点
  *输入：	DLNode *head		待执行插入操作双链表的头指针*head
		int index		插入位置的结点序号index
		Elem x			待插入的目标元素x
  *输出： 已插入新结点的双链表头指针*head
  *返回：	bool true		插入成功的反馈
		bool false		插入失败的反馈
**********************************************************************************/
bool InsertElem(DLNode *head, int index, Elem x) {
	// 双链表包含前结点信息，所以有 "前插" "后插" 两种情况，此处以"后插法"为例
	DLNode *target = GetElem(head, index);
	if (target == NULL) return false;
	DLNode *inserted = (DLNode*)malloc(sizeof(DLNode));
	inserted->Date = x;
	inserted->prior = target;
	inserted->next = target->next;
	// 先连后再连前, 否则会丢失后一个结点的地址信息
	if (target->next != NULL) {
		target->next->prior = inserted;
	}
	target->next = inserted;
	return true;
}