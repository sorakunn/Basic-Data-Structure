#include "0. Typedef.h"

int main()
{
	SLNode *head;									// 初始化一个头指针
	head = (SLNode *)malloc(sizeof(SLNode));
	head->next = NULL;
	SLNode *p=head;

	Elem date[] = { 0,1,2,3,4,5,6 };				// 测试用数据：	Elem date[] = {0,1,2,3,4,5,6}
	CreateHead(head, date, 7);						// 通过头插法构造一个单链表
	Print(p);										// 输出结果：	{6,5,4,3,2,1,0}

	//Elem e; 													// 删除并取出下标为0位置上的元素			Date[]{1,2,3,4,5,6,7,8,9}
	//DeleteElem(l, 0, e);
	//Print(l);

	//printf("%d", LocateElem(l, 9));							// 查找值为9的元素所在的下标位置			8
	return 0;
}