C[0]=1;
for(int i=1;i<=n;++i)
    C[i]=C[i-1]*(n-i+1)/i;//乘法可能溢出
