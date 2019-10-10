int A[n+1];
void f(int A[], int n, int index) {
    if (index == n + 1) {//边界条件
        for (int i = 1; i <= n; ++i)  //输出
            printf("%d%s", A[i], i == n ? "" : " ");
        puts("");
        return;
    }
    for (int i = 1; i <= n; ++i) //遍历数字1~n
        if (find(A + 1, A + index, i) == A + index) {  //如果数字i没取过
            A[index] = i;
            f(A, n, index + 1);  //继续递归
        }
}
