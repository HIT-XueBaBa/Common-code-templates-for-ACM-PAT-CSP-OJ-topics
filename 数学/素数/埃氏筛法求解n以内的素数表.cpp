//以下代码用埃氏筛法求解[2,n]以内的素数表
vector<LL> prime;  //素数表存储在prime中，prime是全局变量
void Eratosthenes(LL n) {
    //f[i]为true，表示数字i被筛去了；如果f[i]为false，表示数字i没有被筛去
    bitset<100005> f;  //这里默认n小于100005
    for (LL i = 2; i <= n; ++i)
        if (!f[i]) {  //i没有被筛去
            prime.push_back(i);
            for (LL j = i + i; j <= n; j += i)  //筛去i的所有倍数
                f[j] = true;
        }
}