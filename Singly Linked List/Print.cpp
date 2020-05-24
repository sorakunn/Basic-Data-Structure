#include "0. Typedef.h"
/*********************************************************************************
  *Function:  		Print
  *Description：		打印单链表的所有元素
					SLNode *head	待打印单链表的头指针
  *Output:  单链表的所有元素
  *Return:  无
**********************************************************************************/
void Print(SLNode *head) {
	SLNode *p;
	p = head;
	p = p->next;
	while (p) {
		printf("%d ", p->Date);
		p = p->next;
	}
	printf("\n");
}