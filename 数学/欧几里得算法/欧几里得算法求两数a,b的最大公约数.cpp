//以下代码通过欧几里得算法计算两个正整数的最大公约数
LL gcd(LL a, LL b) {
    return b == 0 ? a : gcd(b, a % b);
}