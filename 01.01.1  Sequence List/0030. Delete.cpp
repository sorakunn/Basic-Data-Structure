#include "0000. Typedef.h"
/*********************************************************************************
  *函数： DeletetElem
  *描述： 删除顺序表的指定下标index上的元素
  *输入：	SqList &list		待执行删除操作顺序表的引用类型&list
		int index		删除位置的下标index
  *输出： 已删除指定元素的顺序表引用类型&list
  *返回： 	bool true		删除成功的反馈
		bool false		删除失败的反馈
**********************************************************************************/
bool DeleteElem(SqList &list, int index) {
	if (index < 0) return false;				// 1.删除位置小于起点 (可以等于)
	if (index > list.length) return false;			// 2.删除位置大于长度
	if (list.length == 0) return false;			// 3.顺序表为空
	for (int i = index; i < list.length; i++) {		/* 从指定位置往后遍历到结尾 */	
		//i的 "起始位置" index		在指定的删除位置
		list.Date[i] = list.Date[i + 1];		/* 过程中将数据前移一格 */	
		//i的 "终止位置" list.length-1	在顺序表的最后一格
	}
	list.length--;						/* 顺序表长度减少一*/
	return true;
}