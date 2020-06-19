#include"0000. Typedef.h"
/*********************************************************************************
  *函数： Match
  *描述： 利用顺序栈检查括号匹配
  *输入：	char check[]		存放待检查字符串的字符数组check
		int n			待检查字符串的字符个数n
  *输出： 无
  *返回：	bool true		括号正常匹配的反馈
		bool false		括号出现异常的反馈
**********************************************************************************/
bool Match(char check[], int n) {
	char stack[50];						// 初始化一个栈
	int top = -1;
	for (int i = 0; i < n; i++) {
		if (check[i] == '(') stack[++top] = '(';
		if (check[i] == ')') top--;
		if (top < -1) return false;
	}
	if (top > -1) return false;
	if (top == -1) return true;
}