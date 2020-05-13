#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#define MAXSIZE 50 								// MAXSIZE：リストの容量（定数である）
typedef int Elem;								// Elem：目標のデータの型

typedef struct SqList{
	Elem *Date;			 						// Date[]：要素の配列
	int length;									// length：リストの長さ
}SqList;

bool InsertElem(SqList &list, int p, Elem x);			// 挿入（在指定下标位置处挿入所给元素）
bool DeleteElem(SqList &list, int p, Elem &x);			// 削除（删除并取出指定下标位置上的数）
int LocateElem(SqList list, Elem x);					// 探索（查找值为x的第一个Elem元素并返回其下标）

void Print(SqList list); 								// 出力