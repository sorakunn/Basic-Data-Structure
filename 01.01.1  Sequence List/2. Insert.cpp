#include "0. Typedef.h"
/*********************************************************************************
  *������ InsertElem
  *������ ��ָ���±�λ�ô���������Ԫ��
		/Sqlist *list/ ָ���ִ�в���������Ա��ָ��
	/int p/ ���Ա�Ҫ����λ�õ��±�
					/Elem x/ �������Ŀ��ElemԪ��
  *���:  none
  *����:  true when the insert operation is successfuly done, otherwise return false
**********************************************************************************/
bool InsertElem(SqList &list, int p, Elem x) {
	if (p < 0 || p>list.length || list.length == MAXSIZE) {	// 1.����λ��С����� 2.����λ�ô��ڳ��� 3.���Ա�����
		return false;
	}
	for (int i = list.length; i > p; i--) {						// �Ӻ���ǰ������ָ��λ��	(i����ʼλ�� list.length �����Ա��һ��Ŀհ״�)
		list.Date[i] = list.Date[i - 1];						// �����н����ݺ���һ��	(i����ֹλ�� p+1 ��ָ������λ�õĺ�һ��)
	}
	list.Date[p] = x;											// ��ָ��λ�ò�������
	list.length++;												// ���Ա�������һ
	return true;
}