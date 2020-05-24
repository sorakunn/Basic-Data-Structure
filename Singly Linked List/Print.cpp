#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		Print
  *Description：		打印线性表的所有元素
					/Sqlist list/ 指向待打印线性表的指针
  *Output:  elements of list
  *Return:  none
**********************************************************************************/
void Print(SqList list) {
	for (int i = 0; i < list.length; i++) {
		printf("%d ", list.Date[i]);
	}
	printf("\n");
}