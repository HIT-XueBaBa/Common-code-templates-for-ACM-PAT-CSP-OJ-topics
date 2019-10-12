bool isPrime(int n){
    for(int i=2;i<=(int)sqrt(n*1.0);++i)
        if(n%i==0)
            return false;
    return true;
}
