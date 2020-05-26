#include "0000. Typedef.h"
/*********************************************************************************
  *函数： DeletetElem
  *描述： 删除双链表的指定序号index位置的结点 
  *输入：	DLNode *head		待执行删除操作双链表的头指针*head
		int index		删除位置的结点序号index
  *输出： 已删除指定结点的双链表头指针*head
  *返回： 	bool true		删除成功的反馈
		bool false		删除失败的反馈
**********************************************************************************/
bool DeleteElem(DLNode *head, int index) {
	DLNode* target = GetElem(head,index);			/* 调用 GetElem 找到指定位置结点 */
	// 若找不到则退出
	if (target == NULL) return false;
	target->prior->next = target->next;			/* 让前一结点跳过目标节点 */
	target->next->prior = target->prior;			/* 让后一结点跳过目标节点 */
	free(target);						/* 释放结点 */
	return true;
}