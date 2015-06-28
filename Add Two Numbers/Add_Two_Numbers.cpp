#include <iostream>

using namespace std;

/*Definition for singly-linked list.
 * struct ListNode {
 *      int val;
 *      ListNode *next;
 *      ListNode(int x) : val(x), next(NULL) {}
 * };*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        ListNode* result = l1;
        int lenL1 = 0, lenL2 = 0;
        while (!result) {lenL1++; result = result->next; }
        result = l2;
        while (!result) {lenL2++; result = result->next; }
        if (lenL1 < lenL2) {result = l1; l1 = l2; l2 = result; }
        result = l1;

        while (lenL2) {
            if ((l1->val + l2->val) > 9) {
                l1->val = (l1->val + l2->val) % 10;
                if (!l1->next) {ListNode* temp(1); l1->next = temp; return result; }
                l1 = l1->next;
                l2 = l2->next;
                l1->val++;
            }else {
                 l1->val = l1->val + l2->val;
                 l1 = l1->next;
                 l2 = l2->next;
            }
            lenL2--;
        }

        if (l1->val > 9)
            while (l1)
                if (l1->val > 9) {
                    l1->val = l1->val % 10;
                    if (!l1->next) {ListNode* temp(1); l1->next = temp; return result; }
                    l1 = l1->next;
                    l1->val++;
                } else l1 = l1->next;

        return result;
    }
};
