#include "0000. Typedef.h"
/*********************************************************************************
  *������ InsertElem
  *������ �ڵ������ָ�����index�������������Ԫ��x���½��
  *���룺	SLNode *head		��ִ�в�������������ͷָ��*head
		int index		����λ�õĽ�����index
		Elem x			�������Ŀ��Ԫ��x
  *����� �Ѳ����½��ĵ�����ͷָ��*head
  *���أ�	bool true		����ɹ��ķ���
		bool false		����ʧ�ܵķ���
**********************************************************************************/
bool InsertElem(SLNode *head, int index, Elem x) {
	// ���ڵ�����û��ǰ�����Ϣ������ֻ�ܶ�Ŀ�����ǰһ�����ʵ�� "��巨" 
	SLNode *preTarget = GetElem(head, index-1);		/* ���� GetElem �ҵ�ָ��λ�ý��� "ǰһ�����" */
	// ���Ҳ������˳�
	if (preTarget == NULL) return false;
	// �����½��
	SLNode *insert = (SLNode*)malloc(sizeof(SLNode));
	insert->Date = x;
	// ����������ǰ, ����ᶪʧ��һ�����ĵ�ַ��Ϣ
	insert->next = preTarget->next;				/* �½����� "ָ�����֮ǰ" */ 
	preTarget->next = insert;				/* �½����� "ǰ���֮��" */
	return true;
}