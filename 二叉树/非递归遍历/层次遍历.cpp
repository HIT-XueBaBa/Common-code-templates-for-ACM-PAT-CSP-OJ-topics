//ans中存储每一层的层次遍历序列
vector<vector<int>> ans;
vector<vector<int>> levelOrder(TreeNode* root) {
    if (root == nullptr)
        return {};
    queue<TreeNode*> q;
    q.push(root);
    vector<vector<int>> ans;
    while (!q.empty()) {
        int k = q.size();
        ans.push_back({});
        while (k--) {
            auto i = q.front();
            q.pop();
            ans.back().push_back(i->val);
            if (i->left != nullptr)
                q.push(i->left);
            if (i->right != nullptr)
                q.push(i->right);
        }
    }
    return ans;
}