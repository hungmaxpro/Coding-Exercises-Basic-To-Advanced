
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* temp = curr;
            curr = curr->next;
            temp->next = pre;
            pre = temp;
        }
        return pre;
    }
};
