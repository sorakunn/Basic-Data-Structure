#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>


/* "链栈"的基本操作 */
void Reverse(char* string);				// 反転（利用顺序栈翻转给定的字符串string）
bool Match(char check[], int n);			// 対等（利用顺序栈检查分隔符匹配）
void Print(LNode *head); 				// 出力（打印链栈的所有元素）