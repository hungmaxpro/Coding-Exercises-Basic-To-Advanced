class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int currsize = q.size();
            vector<int> temp;
            while (currsize > 0) {
                temp.push_back(q.front()->val);

                currsize--;

                if (q.front()->left) q.push(q.front()->left);
                if (q.front()->right) q.push(q.front()->right);

                q.pop();
            }
            ans.push_back(temp.back());
        }
        return ans;
    }
};