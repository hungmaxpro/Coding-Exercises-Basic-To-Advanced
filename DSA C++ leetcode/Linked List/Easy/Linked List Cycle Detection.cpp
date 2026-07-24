class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set <ListNode*> n;
        ListNode* curr = head;
        while (curr != nullptr) {
            n.insert(curr);
            if (n.count(curr->next)) {
                return true;
            }
            curr = curr->next;
        }
        return false;
    }
};