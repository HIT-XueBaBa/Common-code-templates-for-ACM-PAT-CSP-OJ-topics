string multiply(string num1, string num2) {
    int m=num1.size(),n=num2.size();
    string ans(n+m,'0');
    for(int i=m-1;i>=0;--i){
        for(int j=n-1;j>=0;--j){
            int k=(num1[i]-'0')*(num2[j]-'0');
            int t=k+(ans[i+j+1]-'0');
            ans[i+j]+=t/10;
            ans[i+j+1]=t%10+'0';
        }
    }
    ans.erase(0,ans.find_first_not_of("0"));
    return ans.empty()?"0":ans;
}
