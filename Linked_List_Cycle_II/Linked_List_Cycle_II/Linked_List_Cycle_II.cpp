/* Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

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
    ListNode *detectCycle(ListNode *head) {
      if (head == NULL) return NULL;
      ListNode* temp1 = head;
      ListNode* temp2 = head;
      while (temp2 != NULL)
      {
    	  temp2 = temp2->next;
    	  if (temp2 == NULL) {
    		  return NULL;
    	  }
    	  else {
    		  temp2 = temp2->next;
    	  }
    	  temp1 = temp1->next;
    
    	  if (temp1 == temp2)
    	  {
    		  break;
    	  }
      }
      
      if (temp2 == NULL)
      {
    	  return NULL;
      }
      temp1 = head;
    
      while (temp1 != temp2)
      {
    	  temp1 = temp1->next;
    	  temp2 = temp2->next;
      }
      return temp2;
    }
};