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

	InsertElem(head, 4, 3);							// 在第4个结点处，挿入包含元素3的新结点
	Print(p);										// 输出结果：	{1,2,3,3,4,5}
	
	DeleteElem(head, 5);							// 删除单链表的第5个结点
	Print(p);										// 输出结果：	{1,2,3,3,5}

	printf("%p\n", LocateElem(p, 5));				// 查找值为5的元素所在的结点指针
	printf("%p\n", LocateElem(p, 4));				// 查找不存在元素所在的结点指针			NULL
	printf("%d\n", GetElem(p, 4)->Date);			// 查找第4个结点内元素的值				3
	return 0;
}