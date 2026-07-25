class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* pre = nullptr;
        ListNode* curr = slow->next;
        slow->next = nullptr;
        while (curr != nullptr) {
            ListNode* temp = curr;
            curr = curr->next;
            temp->next = pre;
            pre = temp;
        }
        ListNode* first = head;
        ListNode* second = pre;
        while (first != nullptr && second != nullptr) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};
