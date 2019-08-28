vector<vector<int> > Solution::solve(int A) {
    if(A<0){ vector<vector<int>> B; return B; }
     vector<vector<int>> B(A); // #rows = A, #columns varies.
     for(int row=0;row<A;row++){ 
        for(int i=0;i<=row;i++){
            if(row==i || i==0) B[row].push_back(1); 
            else
                B[row].push_back(B[row-1][i-1]+B[row-1][i]); 
        } 
    }
    return B;
}
