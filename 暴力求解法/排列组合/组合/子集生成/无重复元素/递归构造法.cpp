//调用subsets函数生成所有子集,子集存储在ans中
vector<vector<int>> ans;
void f(vector<int>& nums, vector<int>& temp, int i) {
    ans.push_back(temp);
    for (int j = i; j < nums.size(); ++j) {
        temp.push_back(nums[j]);
        f(nums, temp, j + 1);
        temp.pop_back();
    }
}
void subsets(vector<int>& nums) {
    vector<int> temp;
    f(nums, temp, 0);
}