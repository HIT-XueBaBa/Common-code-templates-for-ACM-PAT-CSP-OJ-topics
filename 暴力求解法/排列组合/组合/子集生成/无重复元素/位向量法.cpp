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
    bits[i] = true;
    f(nums, bits, i + 1);
    bits[i] = false;
    f(nums, bits, i + 1);
}
void subsets(vector<int>& nums) {
    bitset<100> bits;
    f(nums, bits, 0);
}