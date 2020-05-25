#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		DeletetElem
  *Description：		删除单链表的指定序号index结点
					SLNode *head	待执行删除操作链表的头指针
					int index		目标结点的序号index
  *Output:  已删除指定结点的单链表头指针
  *Return:  (bool)true：		删除成功的反馈
			(bool)false：	删除失败的反馈
**********************************************************************************/
bool DeleteElem(SLNode *head, int index) {			/* 由于单链表没有前结点信息，所以只能用 "后删法" */
	SLNode *preTarget = GetElem(head, index-1);		/* 调用 GetElem 找到指定位置结点的 "前一个结点" */
	if (preTarget == NULL) return false;			// 若找不到则退出
	SLNode *deleted = preTarget->next;
	preTarget->next = deleted->next;				/* 从单链表中删除结点 */
	free(deleted);									/* 释放结点 */
	return true;
}