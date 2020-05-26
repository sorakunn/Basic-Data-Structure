#include "0000. Typedef.h"
/*********************************************************************************
  *函数： CreateHead
  *描述： 从后往前逆向建立双链表，每次将新元素插在"头指针后"
  *输入：	DLNode *head		待执行 "头插法" 建表的双链表头指针*head
		Elem x[]		存放待插入元素的数组x[]
		int n			数组中待插入元素的个数n
  *输出： 完成元素插入的双链表头指针*head
  *返回：	无
**********************************************************************************/
void CreateHead(DLNode *head, Elem x[], int n) {
	for (int i = 0; i < n; i++) {
		DLNode *temp = (DLNode*)malloc(sizeof(DLNode));	/* 建立存放数据的结点 */
		temp->Date = x[i];
		temp->prior = head;
		// 先连后再连前, 否则会丢失后一个结点的地址信息
		temp->next = head->next;			/* 新结点的尾放在 "第一个元素前" */ 
		head->next = temp;				/* 新结点的头放在 "头指针后" */
		// 如果后元素存在，才需要进行后元素的前指针修改
		if (temp->next != NULL) {			/* 判断是否需要修改后元素的前指针*/
			temp->next->prior = temp;
		}
	}
}