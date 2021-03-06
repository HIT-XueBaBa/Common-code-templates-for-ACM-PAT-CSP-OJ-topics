//划分算法，将数组nums分成<t、==t、>t三部分，返回一个2维array，表示==t的部分的首元素索引、尾元素的下一个元素的索引
array<LL, 2> partition(vector<LL>& nums, LL t) {
    LL i = 0, j = 0, k = nums.size() - 1;
    while (i <= k) {
        if (nums[i] > t)
            swap(nums[i], nums[k--]);
        else if (nums[i] < t)
            swap(nums[i++], nums[j++]);
        else
            ++i;
    }
    return {j, i};
}