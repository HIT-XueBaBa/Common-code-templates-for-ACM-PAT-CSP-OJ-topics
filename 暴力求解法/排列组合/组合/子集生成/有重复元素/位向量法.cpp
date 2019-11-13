//调用subsets函数生成所有子集,子集存储在ans中
//bitset的长度需要比nums的最大长度大，这里的100要按题目要求变化
vector<vector<int>> ans;
void f(vector<int>& nums, bitset<100>& bits, int i) {
    if (i == nums.size()) {
        ans.push_back({});
        for (int i = 0; i < nums.size(); ++i)
            if (bits[i]) {
                ans.back().push_back(nums[i]);
            }
        return;
    }
    int j = find_if(nums.begin() + i, nums.end(), [i, &nums](int a) {
                return a != nums[i];
            }) - nums.begin();
    for (int k = i; k < j; ++k) {
        bits[k] = true;
        f(nums, bits, j);
    }
    for (int k = i; k < j; ++k)
        bits[k] = false;
    f(nums, bits, j);
}
void subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    bitset<100> bits;
    f(nums, bits, 0);
}