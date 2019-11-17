//调用subsets函数生成所有子集,子集存储在ans中
vector<vector<int>> ans;
void subsets(vector<int>& nums) {
    int n = nums.size();
    ans.resize(1 << n);
    for (int i = 0; i < (1 << n); ++i)
        for (int j = 0; j < n; ++j)
            if ((i >> j) & 1) {
                ans[i].push_back(nums[j]);
            }
}