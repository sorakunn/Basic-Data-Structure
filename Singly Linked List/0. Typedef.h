#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
typedef int Elem;								// Elem��Ŀ�ˤΥǩ`������

typedef struct SLNode{
	Elem Date;			 						// Date����{����Ҫ��
	struct SLNode *next;						// *next���ΤΥΩ`�ɤ�ָ���ݥ���
}SLNode;

bool InsertElem(SLNode &head, int p, Elem x);			// ���루��ָ���±�λ�ô���������Ԫ�أ�
bool DeleteElem(SLNode &head, int p, Elem x);			// ������ɾ����ȡ��ָ���±�λ���ϵ�����
SLNode LocateElem(SLNode head, Elem x);					// ̽��������ֵΪx�ĵ�һ��ElemԪ�ز�������ָ�룩

void CreateHead(SLNode *head, Elem x[], int n);			// ���^�ؤΒ��루�Ӻ���ǰ����������ÿ�ν���Ԫ�ز���"ͷָ���"��
void CreateTail(SLNode *head, Elem x[], int n);			// ��β�ؤΒ��루��ǰ��������������ÿ�ν���Ԫ�ز���"��β"��

SLNode* GetElem(SLNode *head, int index);				// ȡ����������ҵ�i��λ�õĽ�㲢������ָ�룩

void Print(SLNode head); 								// ����