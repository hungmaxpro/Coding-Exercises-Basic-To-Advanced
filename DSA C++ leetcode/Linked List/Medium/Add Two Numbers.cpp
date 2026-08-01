class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1 = l1;
        int temp = 0;
        while (p1 && l2) {
            p1->val += l2->val;
            p1->val += temp;
            temp = 0;
            if (p1->val > 9) {
                temp = 1;
                p1->val -= 10;
            }
            if (!p1->next && !l2->next) {
                break;
            }
            if (p1->next) {
                p1 = p1->next;
            }
            else {
                p1->next = l2->next;
                p1 = p1->next;
                l2->next = nullptr;
            }
            if (l2->next) {
                l2 = l2->next;
            }
            else {
                l2->val = 0;
            }
        }
        if (temp > 0) {
            ListNode* newnode = new ListNode(1);
            p1->next = newnode;
        }
        return l1;
    }
};