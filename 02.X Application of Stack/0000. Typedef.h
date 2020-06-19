#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>


/* "链栈"的基本操作 */
bool Push(LNode *head, Elem x);				// 先頭から要素を挿入（在链栈的栈顶挿入所给元素x）
bool Pop(LNode *head, Elem &x);				// 先頭から要素を削除（取出并返回链栈的栈顶元素x）
void Print(LNode *head); 				// 出力（打印链栈的所有元素）