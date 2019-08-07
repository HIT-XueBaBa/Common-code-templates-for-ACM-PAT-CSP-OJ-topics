void phi_table(int n, vector<int>&phi) {
    for(int i = 2; i <= n; i++) 
        phi[i] = 0;
    phi[1] = 1;
    for(int i = 2; i <= n; i++) 
        if(phi[i]==0)
            for(int j = i; j <= n; j += i) {
                if(phi[j]==0) 
                    phi[j] = j;
                phi[j] = phi[j] / i * (i-1);
            }
}
