#include <iostream>

/* Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists. */

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
	if (l1 == NULL) return l2;
	if (l2 == NULL) return l1;

	ListNode* result = NULL;

	if (l1->val <= l2->val)
	{
		result = l1;
		result->next = mergeTwoLists(l1->next, l2);
	}
	else
	{
		result = l2;
		result->next = mergeTwoLists(l2->next, l1);
	}
	return result;
}

int main()
{
	ListNode* newNode1 = new ListNode(-2);
	ListNode* newNode2 = new ListNode(5);
	newNode1->next = newNode2;
	newNode2->next = NULL;

	ListNode* newNode3 = new ListNode(-9);
	ListNode* newNode4 = new ListNode(-6);
	ListNode* newNode5 = new ListNode(-3);
	ListNode* newNode6 = new ListNode(-1);
	ListNode* newNode7 = new ListNode(1);
	ListNode* newNode8 = new ListNode(6);
	newNode3->next = newNode4;
	newNode4->next = newNode5;
	newNode5->next = newNode6;
	newNode6->next = newNode7;
	newNode7->next = newNode8;
	newNode8->next = NULL;

	mergeTwoLists(newNode1, newNode3);
}