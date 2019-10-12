void f(vector<int>&A, int index) {
    if(index==A.size()){
        //处理当前的排列
        return;
    }
    for(int i=index;i<A.size();++i){
        swap(A[index],A[i]);
        f(A,index+1);
        swap(A[index],A[i]);
    }
}
