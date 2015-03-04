/*You are given two linked lists representing two non-negative numbers. 
The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
*/

#include <iostream>

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

ListNode *AddTwoLists(ListNode *l1, ListNode *l2, int carry) {
	if (l1 == NULL && l2 == NULL && carry == 0)
		return NULL;

	ListNode* result = new ListNode(carry);
	int value = carry;
	if (l1 != NULL)
		value+=l1->val;

	if (l2 != NULL)
		value+=l2->val;

	result->val = value % 10;

	ListNode* next = AddTwoLists(l1 != NULL ? l1->next : NULL, l2 != NULL ? l2->next : NULL, value >= 10 ? 1 : 0);

	result->next = next;
	return result;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {	
	int carry = 0;
	return AddTwoLists(l1, l2, carry);        
}

int main()
{	
	ListNode* newNode1 = new ListNode(5);
	ListNode* newNode2 = new ListNode(5);
	addTwoNumbers(newNode1, newNode2);
}