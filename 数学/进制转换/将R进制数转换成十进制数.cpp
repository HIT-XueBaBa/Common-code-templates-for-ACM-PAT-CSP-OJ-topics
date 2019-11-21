//以下代码将R进制数转换成十进制数
LL transRto10(const vector<LL>& r, LL R) {
    LL d = 0;
    for (LL i : r)
        d = d * R + i;
    return d;
}