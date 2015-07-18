#include <iostream>

using namespace std;

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *      int val;
 *      ListNode *next;
 *      ListNode(int x): val(x), next(NULL) {}
 * };*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (k < 1 || !head || !head->next) return head;
        ListNode* tempH = temp  = head;
        int counter = 0;
        while (!tempH) {
            tempH = tempH->next;
            counter++;
        }
        tempH = head;
        k = k % counter;
        counter = counter - k;
        while (!counter) {tempH = tempH->next; }
        head = tempH;
        while (!tempH) {tempH = tempH->next; }
        tempH->next = temp;
        return head;
    }
}
