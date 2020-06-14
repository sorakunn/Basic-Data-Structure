#include "0000. Typedef.h"
/*********************************************************************************
  *函数： Pop
  *描述： 取出并返回顺序栈的栈顶元素x
  *输入：	SqStack &stack		待执行出栈操作顺序栈的引用类型&stack
		Elem &x			用于存放出栈Elem元素的引用类型&x
  *输出： 已出栈指定元素的顺序栈引用类型&stack
  *返回： 	bool true		出栈成功的反馈
		bool false		出栈失败的反馈
**********************************************************************************/
bool Pop(SqStack &stack, Elem &x) {
	if (stack.top == -1) return false;			// 栈空：栈顶下标 = -1
	x = stack.Date[stack.top--];				/* 删除数据 && 栈顶自减 */
	return true;
}