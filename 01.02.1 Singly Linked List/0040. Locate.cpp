#include "0000. Typedef.h"
/*********************************************************************************
  *函数： LocateElem
  *描述： 查找值为x的第一个结点并返回其指针
  *输入：	SLNode* head		待执行查找操作单链表的头指针*head
		Elem x			需查找的目标结点值x
  *输出： 无
  *返回： 	SLNode* pointer		目标结点的指针
		NULL			查找失败的反馈
**********************************************************************************/
SLNode* LocateElem(SLNode* head, Elem x) {
	SLNode *p = head;
	// 有头指针的单链表要先进一格
	p = p->next;
	while (p != NULL) {					/* 遍历到单链表尾 */
		if (p->Date == x) break;			/* 判断当前数据是否等于目标值 */
		p = p->next;
		//退出循环时，找到了则p为 "目标结点地址"，没找到则p为 "NULL"
	}
	return p;
}