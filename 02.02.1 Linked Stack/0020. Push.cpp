#include "0000. Typedef.h"
/*********************************************************************************
  *函数： Push
  *描述： 在链栈的栈顶挿入所给元素x
  *输入：	LNode &head		待执行进栈操作的链栈的头指针*head
		Elem x			待入栈的目标元素x
  *输出： 已进栈指定元素的链栈头指针*head
  *返回：	bool true		入栈成功的反馈
		bool false		入栈失败的反馈
**********************************************************************************/
bool Push(LNode *head, Elem x) {
	// 可以认为链栈不会满
	LNode* pushed = (LNode*)malloc(sizeof(LNode));
	pushed->Date = x;
	pushed->next = head->next;				/* 进栈结点放在"栈顶" */
	head->next = pushed;					/* 进栈结点放在"头结点之后" */
	return true;
}