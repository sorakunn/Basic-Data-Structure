#include "0000. Typedef.h"
/*********************************************************************************
  *函数： DeletetElem
  *描述： 删除单链表的指定序号index位置的结点
  *输入：	SLNode *head		待执行删除操作单链表的头指针*head
		int index		删除位置的结点序号index
  *输出： 已删除指定结点的单链表头指针*head
  *返回： 	bool true		删除成功的反馈
		bool false		删除失败的反馈
**********************************************************************************/
bool DeleteElem(SLNode *head, int index) {
	// 由于单链表没有前结点信息，所以只能对目标结点的前一个结点实行 "后删法" 
	SLNode *preTarget = GetElem(head, index-1);		/* 调用 GetElem 找到指定位置结点的 "前一个结点" */
	// 若找不到则退出
	if (preTarget == NULL) return false;
	// 需要一个指针保存需删除结点的地址信息
	SLNode *deleted = preTarget->next;
	preTarget->next = deleted->next;			/* 从单链表中删除结点 */
	free(deleted);						/* 释放结点 */
	return true;
}