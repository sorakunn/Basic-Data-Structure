#include "0000. Typedef.h"
/*********************************************************************************
  *函数： InsertElem
  *描述： 在顺序表的指定下标index处挿入所给元素x
  *输入：	Sqlist &list		待执行插入操作顺序表的引用类型&list
		int index		插入位置的下标index
		Elem x			待插入的目标元素x
  *输出： 已插入指定元素的顺序表引用类型&list
  *返回：	bool true		插入成功的反馈
		bool false		插入失败的反馈
**********************************************************************************/
bool InsertElem(SqList &list, int index, Elem x) {
	if (index < 0) return false;				// 1.插入位置小于起点 (可以等于)
	if (index > list.length) return false;			// 2.插入位置大于长度 (可以等于)
	if (list.length == MAXSIZE) return false;		// 3.顺序表已满
	for (int i = list.length; i > index; i--) {		/* 从后往前遍历到指定位置	*/
		// i的 "起始位置" list.length	在顺序表表尾之后一格的空白处
		list.Date[i] = list.Date[i - 1];		/* 过程中将数据后移一格 */
		// i的 "终止位置" index+1	在指定的插入位置的后一格
	}
	list.Date[index] = x;					/* 在指定位置插入数据 */
	list.length++;						/* 顺序表长度增加一 */
	return true;
}