class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) {
            return true;
        }
        else if ((!p && q) || (p && !q) || (p->val != q->val)) {
            return false;
        }
        bool trai = isSameTree(p->left, q->left);
        bool phai = isSameTree(p->right, q->right);

        if (trai == false || phai == false) {
            return false;
        }
        else if (trai == true && phai == true) {
            return true;
        }
    }
};