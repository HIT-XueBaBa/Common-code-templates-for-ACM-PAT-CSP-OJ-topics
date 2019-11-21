//以下代码对正整数n进行质因子分解
//如果题目中要求对质因子排序，则使用map；否则使用unordered_map
//质因子存储在factor中，键表示质因子，值表示该质因子个数
unordered_map<LL, LL> factor;
void getFactor(LL n) {
    Eratosthenes(n);  //打印n以内的素数表存储到prime中
    for (LL i : prime) {  //枚举素数表内所有素数
        while (n % i == 0) {  //n能被素数i整除
            ++factor[i];  //递增质因子i的出现次数
            n /= i;
        }
        if (n == 1)  //n==1结束算法
            break;
    }
}