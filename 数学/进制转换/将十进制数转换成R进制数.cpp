//以下代码用除基取余法将十进制数转换成R进制数
vector<LL> trans10toR(LL i, LL R) {
    vector<LL> ans;  //存储R进制数
    do {
        ans.push_back(i % R);  //取余
        i /= R;  //除基
    } while (i != 0);  //i==0时跳出循环
    reverse(ans.begin(), ans.end());  //翻转整个数组
    return ans;
}