#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		LocateElem
  *Description：		查找Elem元素值为x的第一个结点并返回其指针
					SLNode* head		指向待执行查找操作线性表的指针
					Elem x				 指向用来存放取出元素的空Elem元素的指针
  *Output:  none
  *Return:  index of target Elem element
**********************************************************************************/
SLNode* LocateElem(SLNode* head, Elem x){
	for (int i = 0; i < list.length; i++) {
		if (list.Date[i] == x) return i;
	}
	return -1;
}