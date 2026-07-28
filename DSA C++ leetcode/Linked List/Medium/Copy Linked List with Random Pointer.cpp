class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        Node* curr = head;
        while (curr) {
            Node* newnode = new Node(curr->val);
            newnode->next = curr->next;
            curr->next = newnode;
            curr = newnode->next;
        }
        int i = 0;
        curr = head;
        Node* temp = head->random;
        while (curr) {
            if (i % 2 != 0 && curr != nullptr) {
                if (temp == nullptr) {
                    curr->random = temp;
                }
                else {
                    curr->random = temp->next;
                }
            }
            else if (i % 2 == 0 && curr != nullptr) {
                temp = curr->random;
            }
            i++;
            curr = curr->next;
        }
        i = 0;
        curr = head;
        Node* ans = head->next;
        while (curr) {
            Node* temp1 = curr;
            curr = curr->next;
            if (i % 2 != 0 && temp1->next != nullptr) {
                temp1->next = temp1->next->next;
            }
            else if (i % 2 == 0 && temp1->next != nullptr) {
                temp1->next = temp1->next->next;
            }
            i++;
        }
        return ans;
    }
};
