void f(vector<int>& A, int n) {
    if (A.size() == n) {  //递归边界
        for (int i = 0; i < A.size(); i++) printf("%d ", A[i]);
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++) {  //尝试在A末尾填各种整数i
        if (find(A.begin(), A.end(), i) != A.end())
            continue;
        A.push_back(i);
        f(A, n);  //递归调用
        A.pop_back();
    }
}