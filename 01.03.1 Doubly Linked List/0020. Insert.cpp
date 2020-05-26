#include "0000. Typedef.h"
/*********************************************************************************
  *������ InsertElem
  *������ ��˫�����ָ��������index�������������Ԫ��x���½��
  *���룺	DLNode *head		��ִ�в������˫�����ͷָ��*head
		int index		����λ�õĽ�����index
		Elem x			�������Ŀ��Ԫ��x
  *����� �Ѳ����½���˫����ͷָ��*head
  *���أ�	bool true		����ɹ��ķ���
		bool false		����ʧ�ܵķ���
**********************************************************************************/
bool InsertElem(DLNode *head, int index, Elem x) {
	// ˫�������ǰ�����Ϣ�������� "ǰ��" "���" ����������˴���"��巨"Ϊ��
	DLNode *target = GetElem(head, index);
	if (target == NULL) return false;
	DLNode *inserted = (DLNode*)malloc(sizeof(DLNode));
	inserted->Date = x;
	inserted->prior = target;
	inserted->next = target->next;
	// ����������ǰ, ����ᶪʧ��һ�����ĵ�ַ��Ϣ
	if (target->next != NULL) {
		target->next->prior = inserted;
	}
	target->next = inserted;
	return true;
}