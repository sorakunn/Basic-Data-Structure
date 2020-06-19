#include"0000. Typedef.h"
/*********************************************************************************
  *函数： ReverseString
  *描述： 利用顺序栈翻转给定的字符串sring
  *输入：	char* string		待翻转的字符串string
  *输出： 已翻转的字符串string
  *返回：	无
**********************************************************************************/
void ReverseString(char* string) {
	char SqStack[50];
	int top = -1;
	char* p = string;
	while (*p != NULL) {
		SqStack[++top] = *p;
		p++;
	}
	while (top > -1) {
		printf("%c", SqStack[top--]);
	}
}