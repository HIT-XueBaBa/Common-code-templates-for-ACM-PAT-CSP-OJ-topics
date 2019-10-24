auto lowbit = [](int x) { return x & (-x); };
vector<int> c(MAX);
void update(int x, int v) {
    for (int i = x; i < c.size(); i += lowbit(i))
        c[i] += v;
}
int getSum(int x) {
    int sum = 0;
    for (int i = x; i > 0; i -= lowbit(i))
        sum += c[i];
    return sum;
}