#include "0000. Typedef.h"
/*********************************************************************************
  *������ DeletetElem
  *������ ɾ��˳����ָ���±�index�ϵ�Ԫ��
  *���룺	SqList &list		��ִ��ɾ������˳������������&list
		int index		ɾ��λ�õ��±�index
  *����� ��ɾ��ָ��Ԫ�ص�˳�����������&list
  *���أ� 	bool true		ɾ���ɹ��ķ���
		bool false		ɾ��ʧ�ܵķ���
**********************************************************************************/
bool DeleteElem(SqList &list, int index) {
	if (index < 0) return false;				// 1.ɾ��λ��С����� (���Ե���)
	if (index > list.length) return false;			// 2.ɾ��λ�ô��ڳ���
	if (list.length == 0) return false;			// 3.˳���Ϊ��
	for (int i = index; i < list.length; i++) {		/* ��ָ��λ�������������β */	
		//i�� "��ʼλ��" index		��ָ����ɾ��λ��
		list.Date[i] = list.Date[i + 1];		/* �����н�����ǰ��һ�� */	
		//i�� "��ֹλ��" list.length-1	��˳�������һ��
	}
	list.length--;						/* ˳����ȼ���һ*/
	return true;
}