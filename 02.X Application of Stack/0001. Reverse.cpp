#include"0000. Typedef.h"
/*********************************************************************************
  *函数： Reverse
  *描述： 利用顺序栈翻转给定的字符串string
  *输入：	char* string		待翻转的字符串string
  *输出： 已翻转的字符串string
  *返回：	无
**********************************************************************************/
void Reverse(char* string) {
	char SqStack[50];					// 初始化一个栈
	int top = -1;
	char* p = string;
	while (*p != NULL) {					/* 将所有字符读入 */
		SqStack[++top] = *p;
		p++;
	}
	while (top > -1) {					/* 将所有字符输出 */
		printf("%c", SqStack[top--]);
	}
}