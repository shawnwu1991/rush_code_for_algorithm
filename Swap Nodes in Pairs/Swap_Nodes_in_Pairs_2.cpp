#include <iostream>

using namespace std;

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *      int val;
 *      ListNode *left;
 *      ListNode *right;
 *      ListNode(int x) : val(x), left(NULL), right(NULL) {}
 * };*/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
         if (!head || !head->next) return head;
         ListNode *tempHead = head, *newHead = head->next, *tailHead = swapPairs(head->next->next);
         newHead->next = tempHead;
         tempHead->next = tailHead;
         return newHead;
    }
};
