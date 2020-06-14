#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#define MAXSIZE 50 		// MAXSIZE：スタックの容量（定数である）
typedef int Elem;		// Elem：目標のデータの型

/* "顺序栈"的定义 */
typedef struct SqStack {
	Elem *Date;		// *Date：要素配列のアドレス
	int top;		// top：スタックの先頭の要素の添字
}SqStack;

/* "顺序栈"的基本操作 */
bool Push(SqStack &stack, Elem x);			// 先頭から要素を挿入（在顺序栈的栈顶挿入所给元素x）
bool Pop(SqStack &stack, Elem &x);			// 先頭から要素を削除（取出并返回顺序栈的栈顶元素x）
void Print(SqStack stack); 				// 出力（打印顺序栈的所有元素）
