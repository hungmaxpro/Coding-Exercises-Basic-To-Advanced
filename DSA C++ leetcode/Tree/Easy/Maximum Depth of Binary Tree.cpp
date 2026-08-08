class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }

        int trai = maxDepth(root->left);
        int phai = maxDepth(root->right);

        return 1 + max(trai, phai);
    }
};