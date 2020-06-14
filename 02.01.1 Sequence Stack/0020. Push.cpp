#include "0000. Typedef.h"
/*********************************************************************************
  *函数： Push
  *描述： 在顺序栈的栈顶挿入所给元素x
  *输入：	SqStack &stack		待执行进栈操作的顺序栈的引用类型&stack
		Elem x			待入栈的目标元素x
  *输出： 已进栈指定元素的顺序栈引用类型&stack
  *返回：	bool true		入栈成功的反馈
		bool false		入栈失败的反馈
**********************************************************************************/
bool Push(SqStack &stack, Elem x) {
	if (stack.top == MAXSIZE-1) return false;		// 栈满：栈顶下标 = MAXSIZE-1
	stack.Date[++stack.top] = x;				/* 栈顶自增 && 插入数据 */
	return true;
}