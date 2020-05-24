#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		DeletetElem
  *Description��		ɾ����ȡ��ָ���±�λ���ϵ���
					/Sqlist *list/ ָ���ִ��ɾ���������Ա��ָ��
					/int p/ ���Ա�Ҫɾ��λ�õ��±�
					/Elem *x/ ָ���������ȡ��Ԫ�صĿ�ElemԪ�ص�ָ��
  *Output:  ��ɾ����ȡ����ָ��ElemԪ��
  *Return:  true when the delete operation is successfuly done, otherwise return false
**********************************************************************************/
bool DeleteElem(SqList &list, int p, Elem &x) {
	if (p < 0 || p == list.length || list.length == 0) {	// 1.ɾ��λ��С����� 2.ɾ��λ�ô��ڳ��� 3.���Ա�Ϊ��
		return false;
	}
	x = list.Date[p];										// ��ָ��λ�õ�����ȡ��
	for (int i = p; i < list.length; i++) {					// ��ָ��λ�������������β	(i����ʼλ�� p ��ָ��λ��ɾ��λ��)
		list.Date[i] = list.Date[i + 1];					// �����н�����ǰ��һ��	(i����ֹλ�� list.length-1 �����Ա�����һ��)
	}
	list.length--;											// ���Ա��ȼ���һ
	return true;
}