#include <iostream>

using namespace std;

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *      int val;
 *      ListNode *next;
 *      ListNode(int x): val(x), next(NULL){}
 * };*/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* headT = head, temp;
        temp = headT->next;
        headT->next = temp->next;
        temp->next = headT;
        head = temp;

        while (headT->next && headT->next->next) {
            temp = headT->next->next;
            headT->next->next = temp->next;
            temp->next = headT->next;
            headT->next = temp;
            headT = headT->next->next;
        }
        return head;
    }
};
