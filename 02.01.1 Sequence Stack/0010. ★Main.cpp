#include "0000. Typedef.h"

int main()
{
	SqStack stack;
	stack.Date = (Elem*)malloc(sizeof(Elem)*MAXSIZE);	// 初始化一个顺序栈
	stack.top = -1;
	/* 元素入栈 */
	for (int i = 0; i <= 4; i++) Push(stack, i);		// 五个元素逐一 "进栈"
	Print(stack);						// 输出结果：	{0,1,2,3,4}
	/* 元素出栈 */
	int output=0;
	for (int i = 0; i <= 4; i++) {
		Pop(stack, output);				// 五个元素逐一 "出栈"
		printf("%d", output);				// 输出结果：	{4,3,2,1,0}
	}
	return 0;
}