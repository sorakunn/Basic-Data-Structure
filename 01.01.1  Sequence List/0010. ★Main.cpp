#include "000. Typedef.h"

void main()
{
	SqList l;
	l.Date = (Elem *)malloc(sizeof(Elem)*MAXSIZE);			// ��ʼ��һ�����Ա�
	l.length = 0;

	for (int i = 0; i <= 9; i++) {							// ͨ�����빹��һ�����Ա�					Date[]{0,1,2,3,4,5,6,7,8,9}
		InsertElem(l, i, i);
	}
	Print(l);

	Elem e; 												// ɾ����ȡ���±�Ϊ0λ���ϵ�Ԫ��			Date[]{1,2,3,4,5,6,7,8,9}
	DeleteElem(l, 0, e);
	Print(l);

	printf("%d", LocateElem(l, 9));							// ����ֵΪ9��Ԫ�����ڵ��±�λ��			8
}