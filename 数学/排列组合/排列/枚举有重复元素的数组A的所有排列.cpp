//调用drive(A),如果要求字典序输出全排列，请使用map代替 unordered_map
void permute(vector<int> &v, int index, unordered_map<int, int> &um) {
    if (index <= 0) {
        //处理当前的排列
        return;
    }
    for (auto &i : um) {
        if (i.second <= 0)
            continue;
        --i.second;
        v.push_back(i.first);
        permute(v, index - 1, um);
        v.pop_back();
        ++i.second;
    }
}
void drive(vector<int> &A) {
    unordered_map<int, int> um;
    for (int i : A)
        ++um[i];
    vector<int> v;
    permute(v, A.size(), um);
}
