#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#define MAXSIZE 50 								// MAXSIZE���ꥹ�Ȥ������������Ǥ��룩
typedef int Elem;								// Elem��Ŀ�ˤΥǩ`������

typedef struct SqList{
	Elem *Date;			 						// Date[]��Ҫ�ؤ�����
	int length;									// length���ꥹ�Ȥ��L��
}SqList;

bool InsertElem(SqList &list, int p, Elem x);			// ���루��ָ���±�λ�ô���������Ԫ�أ�
bool DeleteElem(SqList &list, int p, Elem &x);			// ������ɾ����ȡ��ָ���±�λ���ϵ�����
int LocateElem(SqList list, Elem x);					// ̽��������ֵΪx�ĵ�һ��ElemԪ�ز��������±꣩

void Print(SqList list); 								// ����