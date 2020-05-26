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
	// 双链表包含前结点信息，所以有 "前插" "后插" 两种情况
	// 题设预期是新结点（插在目标结点之前从而）代替了目标结点，所以应采用"前插法"
	DLNode *target = GetElem(head, index);			/* 调用 GetElem 找到指定位置结点 */
	// 若找不到则退出
	if (target == NULL) return false;
	// 构建新结点
	DLNode *inserted = (DLNode*)malloc(sizeof(DLNode));
	inserted->Date = x;
	// 先将后一结点的地址信息存入新结点，防止丢失
	inserted->prior = target->prior;			/* 新结点的头放入 "目标结点的前结点" */
	inserted->next = target;				/* 新结点的尾放入 "目标结点" */
	target->prior->next = inserted;				/* 新结点放在 "目标结点的前结点之后" */
	target->prior = inserted;				/* 新结点放在 "目标结点之前" */
	return true;
}