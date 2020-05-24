#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		LocateElem
  *Description：		查找值为x的第一个Elem元素并返回其下标
					/Sqlist *list/ 指向待执行查找操作线性表的指针
					/Elem x/ 指向用来存放取出元素的空Elem元素的指针
  *Output:  none
  *Return:  index of target Elem element
**********************************************************************************/
int LocateElem(SqList list, Elem x) {
	for (int i = 0; i < list.length; i++) {
		if (list.Date[i] == x) return i;
	}
	return -1;
}