bool isPrime(LL n) {
    if (n < 2)  //n小于2，一定不是素数
        return false;
    for (LL i = 2; i <= (LL)sqrt(n * 1.0); ++i)  //遍历2~根号n所有的数
        if (n % i == 0)  //n能被i整除，说明n不是素数
            return false;
    return true;  //n不能被2~根号n任何数整除，则n是素数
}