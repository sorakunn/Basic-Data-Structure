#include "0000. Typedef.h"

int main()
{
	SqList list;
	list.Date = (Elem *)malloc(sizeof(Elem)*MAXSIZE);	// 初始化一个线性表
	list.length = 0;
	/* 插入建表 */
	for (int i = 0; i <= 5; i++) InsertElem(list, i, i);	// 通过 "插入" 构造一个顺序表
	Print(list);						// 输出结果：	{0,1,2,3,4,5}
	/* 删除元素 */
	DeleteElem(list, 0);					// 删除顺序表的第0个元素
	Print(list);						// 输出结果：	{1,2,3,4,5}
	/* 按值查找 */
	printf("%d", LocateElem(list, 5));			// 查找值为9的第一个元素并返回其下标	4
	return 0;
}