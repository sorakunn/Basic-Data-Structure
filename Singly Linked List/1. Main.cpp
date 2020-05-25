#include "0. Typedef.h"

int main()
{
	SLNode *head;									// ��ʼ��һ��ͷָ��
	head = (SLNode *)malloc(sizeof(SLNode));
	head->next = NULL;
	SLNode *p=head;

	Elem date[] = { 1,2,3,4,5 };					// ���������ݣ�	Elem date[] = {1,2,3,4,5}
	CreateHead(head, date, 5);						// ͨ�� "ͷ�巨" ����һ��������
	Print(p);										// ��������	{5,4,3,2,1}
	CreateTail(head, date, 5);						// ͨ�� "β�巨" ����һ��������
	Print(p);										// ��������	{1,2,3,4,5}

	InsertElem(head, 4, 3);							// �ڵ�4����㴦���������Ԫ��3���½��
	Print(p);										// ��������	{1,2,3,3,4,5}
	
	DeleteElem(head, 5);							// ɾ��������ĵ�5�����
	Print(p);										// ��������	{1,2,3,3,5}

	printf("%p\n", LocateElem(p, 5));				// ����ֵΪ5��Ԫ�����ڵĽ��ָ��
	printf("%p\n", LocateElem(p, 4));				// ���Ҳ�����Ԫ�����ڵĽ��ָ��			NULL
	printf("%d\n", GetElem(p, 4)->Date);			// ���ҵ�4�������Ԫ�ص�ֵ				3
	return 0;
}