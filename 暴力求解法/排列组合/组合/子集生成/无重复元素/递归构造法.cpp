//调用subsets函数生成所有子集,子集存储在ans中
vector<vector<LL>> ans;
void f(vector<LL>& nums, vector<LL>& temp, LL i) {
    ans.push_back(temp);
    for (LL j = i; j < nums.size(); ++j) {
        temp.push_back(nums[j]);
        f(nums, temp, j + 1);
        temp.pop_back();
    }
}
void subsets(vector<LL>& nums) {
    vector<LL> temp;
    f(nums, temp, 0);
}
