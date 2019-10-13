void combine(int n, int k) {
    int i = 0;
    vector<int> p(k, 0);
    while (i >= 0) {
        p[i]++;
        if (p[i] > n)
            --i;
        else if (i == k - 1) {
            //处理当前组合
        } else {
            ++i;
            p[i] = p[i - 1];
        }
    }
}