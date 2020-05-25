#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#define MAXSIZE 50 		// MAXSIZE：リストの容量（定数である）
typedef int Elem;		// Elem：目標のデータの型

/* "顺序表"的定义 */
typedef struct SqList{
	Elem *Date;		// *Date：要素配列のアドレス
	int length;		// length：リストの長さ
}SqList;

/* "顺序表"的基本操作 */
bool InsertElem(SqList &list, int index, Elem x);	// 挿入（在顺序表的指定下标index处挿入所给元素x）
bool DeleteElem(SqList &list, int index);		// 削除（删除顺序表的指定下标index上的元素）
int LocateElem(SqList list, Elem x);			// 探索（查找值为x的第一个元素并返回其下标）

void Print(SqList list); 				// 出力（打印顺序表的所有元素）