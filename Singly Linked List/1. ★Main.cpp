#include "0. Typedef.h"

int main()
{
	SLNode *head;									// ��ʼ��һ��ͷָ��
	head = (SLNode *)malloc(sizeof(SLNode));
	head->next = NULL;
	Elem date[] = { 1,2,3,4,5 };					// ���������ݣ�	Elem date[] = {1,2,3,4,5}
	/* ͷ�巨���� */
	CreateHead(head, date, 5);						// ͨ�� "ͷ�巨" ����һ��������
	Print(head);									// ��������	{5,4,3,2,1}
	/* β�巨���� */
	CreateTail(head, date, 5);						// ͨ�� "β�巨" ����һ��������
	Print(head);									// ��������	{1,2,3,4,5}
	/* ������ */
	InsertElem(head, 4, 3);							// �ڵ�4����㴦���������Ԫ��3���½��
	Print(head);									// ��������	{1,2,3,3,4,5}
	/* ɾ����� */
	DeleteElem(head, 5);							// ɾ��������ĵ�5�����
	Print(head);									// ��������	{1,2,3,3,5}
	/* ��ֵ���� */
	printf("%p\n", LocateElem(head, 5));			// ����ֵΪ5��Ԫ�����ڵĽ��ָ��		ÿ��ʵʱ��������ͬ
	printf("%p\n", LocateElem(head, 4));			// ���Ҳ�����Ԫ�����ڵĽ��ָ��		NULL
	/* ����Ų��� */
	printf("%d\n", GetElem(head, 4)->Date);			// ���ҵ�4�������Ԫ�ص�ֵ			3
	return 0;
}