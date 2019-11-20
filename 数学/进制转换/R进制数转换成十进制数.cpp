int transRto10(const vector<int>& r, int R) {
    int d = 0;
    for (int i : r)
        d = d * R + i;
    return d;
}