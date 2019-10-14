C[0]=1;
for(int i=1;i<C.size();++i)
    C[i]=C[i-1]*(C.size()-i)/i;//乘法可能溢出
