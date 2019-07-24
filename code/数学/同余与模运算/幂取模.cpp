//求a^n%m
int powMod(int a,int n,int m){
    if(n==0)
        return 1;
    int x=powMod(a,n/2,m);
    long long ans=x*1ll*x%m;
    if(n%2==1)
        ans=ans*a%m;
    return (int)ans;
}
