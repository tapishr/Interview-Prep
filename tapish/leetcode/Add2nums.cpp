//https://leetcode.com/problems/add-two-numbers/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* ans = new ListNode((l1->val + l2->val)%10);
    int carry = (l1->val + l2->val)/10;

    ListNode* iter = ans;
    int val1, val2;
    bool l1null, l2null;

    //Using OR since number of digits for both numbers might not be equal
    while((l1null = (l1->next != NULL)) | (l2null = (l2->next != NULL))) {

        val1 = 0, val2 = 0;
        if (l1null) {
            l1 = l1->next;
            val1 = l1->val;
        }

        if (l2null) {
            l2 = l2->next;
            val2 = l2->val;
        }

        ListNode* nlnode = new ListNode((val1 + val2 + carry)%10);
        carry = (val1 + val2 + carry)/10;

        iter->next = nlnode;
        iter = nlnode;
    }

    //Last digit
    if (carry != 0) {
        ListNode* nlnode = new ListNode(carry);
        iter->next = nlnode;
    }
    return ans;
}
