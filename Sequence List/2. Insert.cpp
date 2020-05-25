#include "0. Typedef.h"
/*********************************************************************************
  *函数： InsertElem
  *描述： 在指定下标位置处挿入所给元素
		/Sqlist *list/ 指向待执行插入操作线性表的指针
	/int p/ 线性表要插入位置的下标
					/Elem x/ 待插入的目标Elem元素
  *输出:  none
  *返回:  true when the insert operation is successfuly done, otherwise return false
**********************************************************************************/
bool InsertElem(SqList &list, int p, Elem x) {
	if (p < 0 || p>list.length || list.length == MAXSIZE) {	// 1.插入位置小于起点 2.插入位置大于长度 3.线性表已满
		return false;
	}
	for (int i = list.length; i > p; i--) {						// 从后往前遍历到指定位置	(i的起始位置 list.length 在线性表后一格的空白处)
		list.Date[i] = list.Date[i - 1];						// 过程中将数据后移一格	(i的终止位置 p+1 在指定插入位置的后一格)
	}
	list.Date[p] = x;											// 在指定位置插入数据
	list.length++;												// 线性表长度增加一
	return true;
}