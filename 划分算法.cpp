//�����㷨��������nums�ֳ�<t��==t��>t�����֣�����һ��2άarray����ʾ==t�Ĳ��ֵ���Ԫ��������βԪ�ص���һ��Ԫ�ص�����
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