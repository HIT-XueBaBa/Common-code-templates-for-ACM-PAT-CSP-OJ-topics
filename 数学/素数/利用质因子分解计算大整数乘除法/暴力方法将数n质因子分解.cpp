//以下代码利用质因子分解计算大整数乘除法
//质因子存储在factor中，键表示质因子，值表示该质因子个数
unordered_map<LL, LL> factor;
void getFactor(LL n, LL arg) {  //arg为1时表示数n在分子上，作乘法；arg为-1表示数n在分母上，作除法
    for (LL i = 2; i <= (LL)sqrt(n * 1.0); ++i) {
        LL j = 0;
        for (; n % i == 0; n /= i)
            ++j;
        if (j != 0)
            factor[i] += arg * j;
        if (n == 1)
            break;
    }
    if (n > 1)
        factor[n] += arg;
}