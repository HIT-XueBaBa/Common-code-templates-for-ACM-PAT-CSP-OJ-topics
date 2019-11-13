//调用subsets函数生成所有子集,子集存储在ans中
vector<vector<int>> ans;
void subsets(vector<int>& nums) {
    ans.push_back({});
    for (int n : nums) {
        for (int i = 0, s = ans.size(); i < s; ++i) {
            ans.push_back(ans[i]);
            ans.back().push_back(n);
        }
    }
}