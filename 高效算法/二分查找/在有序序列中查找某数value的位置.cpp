//在有序序列中查找某数value的位置，二分区间为左闭右闭的区间[left,right]
int binarySearch(vector<int>& v, int left, int right, int value) {
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (v[mid] == value)
            return mid;
        else if (v[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}