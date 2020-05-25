#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		DeletetElem
  *Description��		ɾ���������ָ�����index���
					SLNode *head	��ִ��ɾ�����������ͷָ��
					int index		Ŀ��������index
  *Output:  ��ɾ��ָ�����ĵ�����ͷָ��
  *Return:  (bool)true��		ɾ���ɹ��ķ���
			(bool)false��	ɾ��ʧ�ܵķ���
**********************************************************************************/
bool DeleteElem(SLNode *head, int index) {			/* ���ڵ�����û��ǰ�����Ϣ������ֻ���� "��ɾ��" */
	SLNode *preTarget = GetElem(head, index-1);		/* ���� GetElem �ҵ�ָ��λ�ý��� "ǰһ�����" */
	if (preTarget == NULL) return false;			// ���Ҳ������˳�
	SLNode *deleted = preTarget->next;
	preTarget->next = deleted->next;				/* �ӵ�������ɾ����� */
	free(deleted);									/* �ͷŽ�� */
	return true;
}