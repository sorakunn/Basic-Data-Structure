#include "0000. Typedef.h"

int main()
{
	SqList list;
	list.Date = (Elem *)malloc(sizeof(Elem)*MAXSIZE);	// ��ʼ��һ�����Ա�
	list.length = 0;
	/* ���뽨�� */
	for (int i = 0; i <= 5; i++) InsertElem(list, i, i);	// ͨ�� "����" ����һ��˳���
	Print(list);						// ��������	{0,1,2,3,4,5}
	/* ɾ��Ԫ�� */
	DeleteElem(list, 0);					// ɾ��˳���ĵ�0��Ԫ��
	Print(list);						// ��������	{1,2,3,4,5}
	/* ��ֵ���� */
	printf("%d", LocateElem(list, 5));			// ����ֵΪ9�ĵ�һ��Ԫ�ز��������±�	4
	return 0;
}