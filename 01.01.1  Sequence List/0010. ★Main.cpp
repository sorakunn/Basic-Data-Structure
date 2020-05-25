#include "000. Typedef.h"

void main()
{
	SqList l;
	l.Date = (Elem *)malloc(sizeof(Elem)*MAXSIZE);			// 初始化一个线性表
	l.length = 0;

	for (int i = 0; i <= 9; i++) {							// 通过插入构造一个线性表					Date[]{0,1,2,3,4,5,6,7,8,9}
		InsertElem(l, i, i);
	}
	Print(l);

	Elem e; 												// 删除并取出下标为0位置上的元素			Date[]{1,2,3,4,5,6,7,8,9}
	DeleteElem(l, 0, e);
	Print(l);

	printf("%d", LocateElem(l, 9));							// 查找值为9的元素所在的下标位置			8
}