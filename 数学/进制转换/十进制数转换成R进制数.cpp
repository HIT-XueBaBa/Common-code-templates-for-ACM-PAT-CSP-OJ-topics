vector<int> trans10toR(int i, int R) {
    vector<int> ans;
    do {
        ans.push_back(i % R);
        i /= R;
    } while (i != 0);
    reverse(ans.begin(), ans.end());
    return ans;
}