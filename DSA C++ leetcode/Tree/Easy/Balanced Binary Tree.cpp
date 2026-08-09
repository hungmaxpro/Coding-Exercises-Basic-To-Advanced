class Solution {
public:
    bool ans = true;
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }

        int trai = maxDepth(root->left);
        int phai = maxDepth(root->right);

        if (abs(phai - trai) > 1) {
            ans = false;
        }

        return 1 + max(trai, phai);
    }
    bool isBalanced(TreeNode* root) {
        if (!root) {
            return true;
        }
        maxDepth(root);
        return ans;
    }
};
