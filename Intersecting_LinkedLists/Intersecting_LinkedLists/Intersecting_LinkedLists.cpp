﻿/* Write a program to find the node at which the intersection of two singly linked lists begins.

For example, the following two linked lists:

A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗            
B:     b1 → b2 → b3
begin to intersect at node c1.


Notes:

If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Your code should preferably run in O(n) time and use only O(1) memory.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (headA == NULL || headB == NULL) return NULL;

		ListNode* tempA = headA;
		ListNode* tempB = headB;

		int countA = 0;
		while(tempA != NULL)
		{
			countA++;
			tempA = tempA->next;
		}

		int countB = 0;
		while(tempB != NULL)
		{
			countB++;
			tempB = tempB->next;
		}
		
        tempA = headA;
        tempB = headB;
        int diff = 0;
		if (countA > countB) {
			diff = countA - countB;
            
			for(int i = 0; i < diff; i++)
			{
				tempA = tempA->next;
			}
		}
		else
		{
		    diff = countB - countA;
            
			for(int i = 0; i < diff; i++)
			{
				tempB = tempB->next;
			}
		}
		
		while(tempA != NULL && tempB != NULL && tempA != tempB)
		{
			tempA = tempA->next;
			tempB = tempB->next;
		}
		return tempA;
    }
};