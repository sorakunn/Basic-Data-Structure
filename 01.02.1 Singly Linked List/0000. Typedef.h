#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
typedef int Elem;		// Elem��Ŀ�ˤΥǩ`������

/* "������"�Ķ��� */
typedef struct SLNode{
	Elem Date;		// Date����{����Ҫ��
	struct SLNode *next;	// *next���ΤΥΩ`�ɤ�ָ���ݥ���
}SLNode;

/* "������"�Ļ������� */
bool InsertElem(SLNode *head, int index, Elem x);	// ���루�ڵ������ָ�����index���������������Ԫ��x���½�㣩
void CreateHead(SLNode *head, Elem x[], int n);		// ���^�ؤΒ��루�Ӻ���ǰ������������ÿ�ν���Ԫ�ز���"ͷָ���"��
void CreateTail(SLNode *head, Elem x[], int n);		// ��β�ؤΒ��루��ǰ����������������ÿ�ν���Ԫ�ز���"��β"��
bool DeleteElem(SLNode *head, int index);		// ������ɾ���������ָ�����index��㣩
SLNode* LocateElem(SLNode* head, Elem x);		// ̽��������ֵΪx�ĵ�һ����㲢������ָ�룩
SLNode* GetElem(SLNode *head, int index);		// ȡ���������ҵ�i��λ�õĽ�㲢������ָ�룩
void Print(SLNode *head); 				// ����