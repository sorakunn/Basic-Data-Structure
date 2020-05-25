#include "0000. Typedef.h"
/*********************************************************************************
  *函数： Print
  *描述： 打印顺序表的所有元素
		Sqlist list		指向待打印顺序表的指针
  *输出： 顺序表的所有元素
  *返回：	无
**********************************************************************************/
void Print(SqList list) {
	for (int i = 0; i < list.length; i++) {			/* 遍历到顺序表尾 */
		printf("%d ", list.Date[i]);			/* 打印当前数据 */
		// i的 "终止位置" list.length	在顺序表表尾之后一格的空白处
	}
	printf("\n");
}