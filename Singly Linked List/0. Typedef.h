#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
typedef int Elem;								// Elem：目標のデータの型

typedef struct SLNode{
	Elem Date;			 						// Date：格納した要素
	struct SLNode *next;						// *next：次のノードを指すポインタ
}SLNode;

bool InsertElem(SLNode &head, int p, Elem x);			// 挿入（在指定下标位置处挿入所给元素）
bool DeleteElem(SLNode &head, int p, Elem x);			// 削除（删除并取出指定下标位置上的数）
SLNode LocateElem(SLNode head, Elem x);					// 探索（查找值为x的第一个Elem元素并返回其指针）

void CreateHead(SLNode *head, Elem x[], int n);			// 先頭への挿入（从后往前逆向建立链表，每次将新元素插在"头指针后"）
void CreateTail(SLNode *head, Elem x[], int n);			// 後尾への挿入（从前往后正向建立链表，每次将新元素插在"表尾"）

SLNode* GetElem(SLNode *head, int index);				// 取り出す（查找第i个位置的结点并返回其指针）

void Print(SLNode head); 								// 出力