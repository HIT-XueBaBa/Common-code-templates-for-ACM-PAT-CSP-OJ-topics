C[0]=1;
for(LL i=1;i<=n;++i)
    C[i]=C[i-1]*(n-i+1)/i;//�˷��������
