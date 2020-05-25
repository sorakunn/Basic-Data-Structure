#include "0. Typedef.h"

int main()
{
	SLNode *head;									// 初始化一个头指针
	head = (SLNode *)malloc(sizeof(SLNode));
	head->next = NULL;
	SLNode *p=head;

	Elem date[] = { 1,2,3,4,5 };					// 测试用数据：	Elem date[] = {1,2,3,4,5}
	CreateHead(head, date, 5);						// 通过 "头插法" 构造一个单链表
	Print(p);										// 输出结果：	{5,4,3,2,1}
	CreateTail(head, date, 5);						// 通过 "尾插法" 构造一个单链表
	Print(p);										// 输出结果：	{1,2,3,4,5}

	InsertElem(p, 4, 3);							// 在第4个结点处，挿入包含元素3的新结点
	Print(p);
													// 删除并取出下标为0位置上的元素			Date[]{1,2,3,4,5,6,7,8,9}
	//DeleteElem(l, 0, e);
	//Print(l);

	printf("%p\n", LocateElem(p, 5));				// 查找值为5的元素所在的结点指针
	printf("%p\n", LocateElem(p, 7));				// 查找不存在元素所在的结点指针			NULL
	printf("%d\n", GetElem(p, 3)->Date);			// 查找第3个结点内元素的值				3
	return 0;
}