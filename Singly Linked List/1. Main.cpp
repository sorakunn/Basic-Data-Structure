#include "0. Typedef.h"

int main()
{
	SLNode *head;									// ��ʼ��һ��ͷָ��
	head = (SLNode *)malloc(sizeof(SLNode));
	head->next = NULL;
	SLNode *p=head;

	Elem date[] = { 0,1,2,3,4,5,6 };				// ���������ݣ�	Elem date[] = {0,1,2,3,4,5,6}

	CreateHead(head, date, 7);						// ͨ�� "ͷ�巨" ����һ��������
	Print(p);										// ��������	{6,5,4,3,2,1,0}
	CreateTail(head, date, 7);						// ͨ�� "β�巨" ����һ��������
	Print(p);										// ��������	{0,1,2,3,4,5,6}

	//Elem e; 										// ɾ����ȡ���±�Ϊ0λ���ϵ�Ԫ��			Date[]{1,2,3,4,5,6,7,8,9}
	//DeleteElem(l, 0, e);
	//Print(l);

	//printf("%d", LocateElem(l, 9));				// ����ֵΪ9��Ԫ�����ڵ��±�λ��			8
	printf("%d", GetElem(p, 7)->Date);				// ���ҵ�һ�������Ԫ�ص�ֵ				6
	return 0;
}