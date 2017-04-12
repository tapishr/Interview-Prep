//Problem link - https://leetcode.com/problems/linked-list-cycle/
//Algo - Floyd's Cycle on http://www.geeksforgeeks.org/write-a-c-function-to-detect-loop-in-a-linked-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *it1, *it2;
        it1 = head;
        if (it1 == NULL || it1->next == NULL) return false;
        it2 = it1->next;
        while(it1 != it2) {
            if ((it1 = it1->next) == NULL) return false;
            if (it2->next == NULL || (it2 = it2->next->next) == NULL) return false;
        }
        return true;
    }
};
