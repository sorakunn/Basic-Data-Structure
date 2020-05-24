#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		DeletetElem
  *Description：		删除并取出指定下标位置上的数
					/Sqlist *list/ 指向待执行删除操作线性表的指针
					/int p/ 线性表要删除位置的下标
					/Elem *x/ 指向用来存放取出元素的空Elem元素的指针
  *Output:  被删除并取出的指定Elem元素
  *Return:  true when the delete operation is successfuly done, otherwise return false
**********************************************************************************/
bool DeleteElem(SqList &list, int p, Elem &x) {
	if (p < 0 || p == list.length || list.length == 0) {	// 1.删除位置小于起点 2.删除位置大于长度 3.线性表为空
		return false;
	}
	x = list.Date[p];										// 将指定位置的数据取出
	for (int i = p; i < list.length; i++) {					// 从指定位置往后遍历到结尾	(i的起始位置 p 在指定位置删除位置)
		list.Date[i] = list.Date[i + 1];					// 过程中将数据前移一格	(i的终止位置 list.length-1 在线性表的最后一格)
	}
	list.length--;											// 线性表长度减少一
	return true;
}