class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = nullptr;
        ListNode* curr = nullptr;
        ListNode* other = nullptr;
        if (list1 == nullptr) {
            return list2;
        }
        else if (list2 == nullptr) {
            return list1;
        }
        if (list1->val <= list2->val) {
            curr = list1;
            other = list2;
        }
        else {
            curr = list2;
            other = list1;
        }
        ListNode* head = curr;
        while (curr != nullptr) {
            if (curr->next == nullptr) {
                curr->next = other;
                return head;
            }
            else if (curr->next->val > other->val) {
                temp = curr->next;
                curr->next = other;
                other = temp;
            }
            curr = curr->next;
        }
        return head;
    }
};