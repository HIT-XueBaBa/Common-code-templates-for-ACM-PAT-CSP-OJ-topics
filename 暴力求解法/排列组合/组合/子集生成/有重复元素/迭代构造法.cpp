//调用subsets函数生成所有子集,子集存储在ans中
vector<vector<int>> ans;
void subsets(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    ans.push_back({});
    int s = 0;
    for (int i = 0; i < nums.size(); ++i) {
        int j = (i > 0 && nums[i] == nums[i - 1]) ? s : 0;
        s = ans.size();
        for (; j < s; ++j) {
            ans.push_back(ans[j]);
            ans.back().push_back(nums[i]);
        }
    }
}