#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		InsertElem
  *Description��		�ڵ������ָ�����index���������������Ԫ��x���½��
					SLNode *head	��ִ�в�����������ͷָ��
					int index		Ŀ��������index
					Elem x			�������Ŀ��ElemԪ��
  *Output:  �Ѳ����½��ĵ�����ͷָ��
  *Return:  (bool)true��		����ɹ��ķ���
			(bool)false��	����ʧ�ܵķ���
**********************************************************************************/
bool InsertElem(SLNode *head, int index, Elem x) {			/* ���ڵ�����û��ǰ�����Ϣ������ֻ���� "��巨" */ 
	SLNode *preTarget = GetElem(head, index-1);				// ���� GetElem �ҵ�ָ��λ�ý��� "ǰһ�����"
	if (preTarget == NULL) return false;					// ���Ҳ������˳�
	SLNode *insert = (SLNode*)malloc(sizeof(SLNode));		// �����½��
	insert->Date = x;
	insert->next = preTarget->next;							/* �½����� "ָ�����֮ǰ" */ 
	preTarget->next = insert;								/* �½����� "ǰ���֮��" */
	return true;											/* ����������ǰ, ����ᶪʧ������Ϣ */
}