#include<stdio.h>
#include<stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

ListNode* CreateTail(ListNode *head, int x[], int n) {					/*建立测试数据*/
	ListNode *p = head;
	for (int i = 0; i < n; i++) {
		ListNode *temp = (ListNode*)malloc(sizeof(ListNode));
		temp->val = x[i];
		temp->next = NULL;
		p->next = temp;
		p = temp;
	}
	return head->next;
}
void Print(ListNode *head) {								/*打印输出功能*/
	ListNode *p = head;
	while (p) {
		printf("%d ", p->val);
		p = p->next;
	}
	printf("\n");
}
