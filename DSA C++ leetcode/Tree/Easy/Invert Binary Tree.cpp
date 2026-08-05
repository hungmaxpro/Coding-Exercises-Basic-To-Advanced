class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) {
            return nullptr;
        }

        TreeNode* nhanh_trai = invertTree(root->left);
        TreeNode* nhanh_phai = invertTree(root->right);

        root->right = nhanh_trai;
        root->left = nhanh_phai;


        return root;
    }
};