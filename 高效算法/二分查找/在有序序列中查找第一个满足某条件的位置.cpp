//在有序序列中查找第一个满足某条件的位置，二分区间为左闭右闭的区间[left,right]，f为要满足的条件
int solve(vector<int>& v, int left, int right, function<bool(int)> f) {
    int mid;
    while (left <= right) {
        if (left == right)
            return f(left) ? left : left + 1;
        mid = left + (right - left) / 2;
        if (f(mid))
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}
