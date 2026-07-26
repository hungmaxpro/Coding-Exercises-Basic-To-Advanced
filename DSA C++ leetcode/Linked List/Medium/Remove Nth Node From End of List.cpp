class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head || !head->next) return nullptr;

        ListNode* first = head, * second = head;
        for (int i = 0; i < n; i++) {
            second = second->next;
        }
        if (!second) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        while (second->next) {
            second = second->next;
            first = first->next;
        }
        first->next = first->next->next;
        return head;
    }
};
