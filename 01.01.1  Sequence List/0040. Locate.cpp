﻿#include "0000. Typedef.h"
/*********************************************************************************
  *函数： LocateElem
  *描述： 查找值为x的第一个元素并返回其下标
  *输入：	Sqlist list		待执行查找操作顺序表的实体list
		Elem x			需查找的目标元素值x
  *输出： 无
  *返回： 	int index		目标元素的下标
		int -1			查找失败的反馈
**********************************************************************************/
int LocateElem(SqList list, Elem x) {
	for (int i = 0; i < list.length; i++) {			/* 遍历到顺序表尾 */
		if (list.Date[i] == x) return i;		/* 判断当前数据是否等于目标值 */
		// i的 "终止位置" list.length	在顺序表表尾之后一格的空白处
	}
	return -1;
}