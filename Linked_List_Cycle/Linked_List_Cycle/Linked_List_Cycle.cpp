/* Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?
*/

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool hasCycle(ListNode *head) {
		if (head == NULL) return false;
		ListNode* temp1 = head;
		ListNode* temp2 = head;
		while (temp2 != NULL)
		{
			temp2 = temp2->next;
			if (temp2 == NULL) return false;
			else  {
				temp2 = temp2->next;
			}
			temp1 = temp1->next;
			if (temp1 == temp2)
				return true;
		}
		return false;
	}
};
