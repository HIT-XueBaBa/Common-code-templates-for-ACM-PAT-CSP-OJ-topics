unordered_map<int,int>factor;//质因子在factor中，键表示质因子，值表示该质因子个数，注意map会按键排序
void getFactor(int n,int arg){//arg为1时表示数n在分子上，作乘法；arg为-1表示数n在分母上，作除法
    if(n==1){
        factor[1]=1;
        return;
    }
    for(int i=2;i<=(int)sqrt(n*1.0);++i){
        int j=0;
        for(;n%i==0;n/=i)
            ++j;
        factor[i]+=arg*j;
        if(n==1)
            break;
    }
}
