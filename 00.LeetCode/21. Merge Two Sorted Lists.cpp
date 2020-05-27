#include"SLkList.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode *head, *p, *p1, *p2;
	head = (ListNode*)malloc(sizeof(ListNode));
	head->next = NULL;
	p = head, p1 = l1, p2 = l2;
	while (p1 && p2) {				/* 作比较，将较小结点拼上，直至其中一个到尾 */
		if (p1->val <= p2->val) {
			// 不必申请新结点，直接拆结点拼接
			p->next = p1;
			p1 = p1->next;			/* "链表l1"被拆掉一个结点时，头指针p1后移一格 */
		}
		else {
			// 不必申请新结点，直接拆结点拼接
			p->next = p2;
			p2 = p2->next;			/* "链表l2"被拆掉一个结点时，头指针p2后移一格 */
		}
		// 两种情况的"新链表头指针p"的后移，可统一为一句来写
		p = p->next;				/* "存放结果的链表"增加一个结点，头指针p后移一格 */
	}
	// 剩下的部分不用逐个拼，整截连上就好
	if (p1) p->next = p1;
	if (p2) p->next = p2;
	return head->next;
}
int main() {
	struct ListNode *l1 = (ListNode*)malloc(sizeof(ListNode));
	struct ListNode *l2 = (ListNode*)malloc(sizeof(ListNode));
	int x1[] = { 1,2,4 };
	int x2[] = { 1,3,4 };
	l1=CreateTail(l1, x1, 3);
	l2=CreateTail(l2, x2, 3);
	Print(l1);
	Print(l2);
	Print(mergeTwoLists(l1, l2));
}