#include <iostream>

using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return addTwoLists(l1, l2, 0);
    }

    ListNode* addTwoLists(ListNode* l1, ListNode* l2, int carry) {
        if (!l1 && !l2)
            if (carry) return new ListNode(carry);
            else return NULL;

        int val = carry + (l1? l1->val: 0) + (l2? l2->val: 0);
        ListNode* currentNode = new ListNode(val % 10);
        currentNode->next = addTwoLists(l1? l1->next: NULL, l2? l2->next: NULL, val / 10);
        return currentNode;
    }
};
