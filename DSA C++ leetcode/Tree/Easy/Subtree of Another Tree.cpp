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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) {
            return false;
        }
        if (isSameTree(root, subRoot)) {
            return true;
        }
        bool trai = isSubtree(root->left, subRoot);
        bool phai = isSubtree(root->right, subRoot);
        if (trai == true || phai == true) {
            return true;
        }

        return false;
    }
};