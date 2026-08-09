
class Solution {
public:
    int kiluc = 0;
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }

        int trai = maxDepth(root->left);
        int phai = maxDepth(root->right);

        kiluc = max(trai + phai, kiluc);

        return 1 + max(trai, phai);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return kiluc;
    }
};