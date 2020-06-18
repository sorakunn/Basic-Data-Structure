#include "0000. Typedef.h"
/*********************************************************************************
  *函数： Pop
  *描述： 取出并返回链栈的栈顶元素x
  *输入：	LNode *head		待执行出栈操作链栈的头指针*head
		Elem &x			用于存放出栈Elem元素的引用类型&x
  *输出： 已出栈指定元素的链栈头指针*head
  *返回： 	bool true		出栈成功的反馈
		bool false		出栈失败的反馈
**********************************************************************************/
bool Pop(LNode *head, Elem &x) {
	if (head->Date == NULL) return false;			// 栈空：head->next = NULL
	LNode* deleted = head->next;
	x = deleted->Date;					/* 取出栈顶元素 */
	head->next = deleted->next;				/* 从单链表中删除结点 */
	free(deleted);						/* 释放结点 */
	return true;
}