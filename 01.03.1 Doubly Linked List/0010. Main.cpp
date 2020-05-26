#include "0000. Typedef.h"

int main()
{
	DLNode *head;						// 初始化一个头指针 
	head = (DLNode *)malloc(sizeof(DLNode));
	head->prior = NULL;
	head->next = NULL;
	Elem date[] = { 1,2,3,4,5 };				// 测试用数据：	Elem date[] = {1,2,3,4,5}
	/* 头插法建表 */
	CreateHead(head, date, 5);				// 通过 "头插法" 构造一个双链表
	Print(head);						// 输出结果：	{5,4,3,2,1}
	/* 尾插法建表 */
	CreateTail(head, date, 5);				// 通过 "尾插法" 构造一个双链表
	Print(head);						// 输出结果：	{1,2,3,4,5}
	/* 插入结点 */
	InsertElem(head, 4, 3);					// 在第4个结点处，挿入包含元素3的新结点
	Print(head);						// 输出结果：	{1,2,3,3,4,5}
	/* 删除结点 */
	DeleteElem(head, 5);					// 删除双链表的第5个结点
	Print(head);						// 输出结果：	{1,2,3,3,5}
	/* 按值查找 */
	printf("%p\n", LocateElem(head, 5));			// 查找值为5的元素所在的结点指针		每次实时结果不同
	printf("%p\n", LocateElem(head, 4));			// 查找不存在元素所在的结点指针		NULL
	/* 按序号查找 */
	printf("%d\n", GetElem(head, 4)->Date);			// 查找第4个结点内元素的值		3
	return 0;
}