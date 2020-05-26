#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
typedef int Elem;		// Elem��Ŀ�ˤΥǩ`������

/* "˫����"�Ķ��� */
typedef struct DLNode {
	Elem Date;		// Date����{����Ҫ��
	struct DLNode *prior;	// *prior��ǰ�ΥΩ`�ɤ�ָ���ݥ���
	struct DLNode *next;	// *next���ΤΥΩ`�ɤ�ָ���ݥ���
}DLNode;

/* "˫����"�Ļ������� */
bool InsertElem(DLNode *head, int index, Elem x);	// ���루��˫�����ָ��������index�������������Ԫ��x���½�㣩
void CreateHead(DLNode *head, Elem x[], int n);		// ���^�ؤΒ��루�Ӻ���ǰ������˫����ÿ�ν���Ԫ�ز���"ͷָ���"��
void CreateTail(DLNode *head, Elem x[], int n);		// ��β�ؤΒ��루��ǰ����������˫����ÿ�ν���Ԫ�ز���"��β"��
//bool DeleteElem(DLNode *head, int index);		// ������ɾ��˫�����ָ�����indexλ�õĽ�㣩
DLNode* LocateElem(DLNode* head, Elem x);		// ̽��������ֵΪx�ĵ�һ����㲢������ָ�룩
DLNode* GetElem(DLNode *head, int index);		// ȡ����������ָ�����index�Ľ�㲢������ָ��)
void Print(DLNode *head); 				// ��������ӡ˫���������Ԫ�أ�