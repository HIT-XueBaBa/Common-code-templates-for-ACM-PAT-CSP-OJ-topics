string addBinary(const string& a, const string& b) {
    string s;
    int carry = 0;
    for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0 || carry != 0; --i, --j) {
        int p1 = i >= 0 ? a[i] - '0' : 0, p2 = j >= 0 ? b[j] - '0' : 0;
        int k = p1 + p2 + carry;
        s.push_back(k % 10 + '0');
        carry = k / 10;
    }
    reverse(s.begin(), s.end());
    return s;
}