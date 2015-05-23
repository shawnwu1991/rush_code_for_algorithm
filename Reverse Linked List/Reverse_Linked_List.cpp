#include <iostream>

using namespace std;

//Definition for singly-linked list

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    public:
    	ListNode* reverseList(ListNode* head) {
	    if ((NULL == head) || (NULL == head->next))
	    	return head;
	    ListNode* pPre = head;
	    ListNode* pCur = pPre->next;
	    ListNode* pNext = NULL;

	    while (NULL != pCur) {
	    	pNext = pCur->next;
		pCur->next = pPre;
		pPre = pCur;
		pCur = pNext;
	    }

	    head->next = NULL;

	    return pPre;
	}
}
