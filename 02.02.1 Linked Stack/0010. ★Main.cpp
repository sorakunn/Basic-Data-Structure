#include "0000. Typedef.h"

int main()
{
	LNode* head = (LNode*) malloc(sizeof(LNode));		// 初始化一个顺序栈
	head->next = NULL;
	/* 元素入栈 */
	for (int i = 0; i <= 4; i++) Push(head, i);		// 五个元素逐一 "进栈"
	Print(head);						// 输出结果：	{0,1,2,3,4}
	/* 元素出栈 */
	Elem output = 0;
	for (int i = 0; i <= 4; i++) {
		Pop(head, output);				// 五个元素逐一 "出栈"
		printf("%d ", output);				// 输出结果：	{4,3,2,1,0}
	}
	return 0;
}