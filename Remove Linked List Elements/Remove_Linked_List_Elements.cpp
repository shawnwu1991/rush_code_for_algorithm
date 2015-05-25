#include <iostream>

using namespace std;

/*
  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
*/

class Solution {
    public:
    ListNode* removeElements(ListNode* head, int val) {
    	if (NULL == head) return NULL;

	while (head->val == val) {
	    ListNode* tempNode = head;
	    head = head->next;
	    delete tempNode;

	    if (NULL == head) return NULL;
	}

	ListNode* curNode = head;
	
	while (NULL != curNode && NULL != curNode->next) {
	    if (curNode->next->val == val) {
	    	ListNode* tempNode = curNode->next;
		curNode->next = tempNode->next;
		delete tempNode;
	    }else
	    	curNode = curNode->next;
	}
	return head;
    }
};
