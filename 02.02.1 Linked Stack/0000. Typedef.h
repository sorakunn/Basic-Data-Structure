#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
typedef int Elem;		// Elem：目標のデータの型 

/* "链栈"的定义 */
typedef struct LNode {
	Elem Date;		// Date：格納した要素
	struct LNode *next;	// *next：次のノードを指すポインタ
}LNode;

/* "链栈"的基本操作 */
bool Push(LNode *head, Elem x);				// 先頭から要素を挿入（在顺序栈的栈顶挿入所给元素x）
bool Pop(LNode *head, Elem &x);				// 先頭から要素を削除（取出并返回顺序栈的栈顶元素x）
void Print(LNode *head); 				// 出力（打印顺序栈的所有元素）