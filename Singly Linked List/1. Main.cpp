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

	InsertElem(p, 4, 3);							// �ڵ�4����㴦���������Ԫ��3���½��
	Print(p);
													// ɾ����ȡ���±�Ϊ0λ���ϵ�Ԫ��			Date[]{1,2,3,4,5,6,7,8,9}
	//DeleteElem(l, 0, e);
	//Print(l);

	printf("%p\n", LocateElem(p, 5));				// ����ֵΪ5��Ԫ�����ڵĽ��ָ��
	printf("%p\n", LocateElem(p, 7));				// ���Ҳ�����Ԫ�����ڵĽ��ָ��			NULL
	printf("%d\n", GetElem(p, 3)->Date);			// ���ҵ�3�������Ԫ�ص�ֵ				3
	return 0;
}