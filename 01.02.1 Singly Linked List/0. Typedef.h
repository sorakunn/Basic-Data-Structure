#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
typedef int Elem;					// Elem：目標のデータの型

typedef struct SLNode{
	Elem Date;			 			// Date：格納した要素
	struct SLNode *next;			// *next：次のノードを指すポインタ
}SLNode;

bool InsertElem(SLNode *head, int index, Elem x);		// 挿入（在单链表的指定结点index处，挿入包含所给元素x的新结点）
bool DeleteElem(SLNode *head, int index);				// 削除（删除单链表的指定序号index结点）
SLNode* LocateElem(SLNode* head, Elem x);				// 探索（查找值为x的第一个结点并返回其指针）
SLNode* GetElem(SLNode *head, int index);				// 取出す（查找第i个位置的结点并返回其指针）

void CreateHead(SLNode *head, Elem x[], int n);			// 先頭への挿入（从后往前逆向建立单链表，每次将新元素插在"头指针后"）
void CreateTail(SLNode *head, Elem x[], int n);			// 後尾への挿入（从前往后正向建立单链表，每次将新元素插在"表尾"）

void Print(SLNode *head); 								// 出力
