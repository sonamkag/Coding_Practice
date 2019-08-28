vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size(),count=0;
    vector<vector<int>> B(2*n-1);
     for(int i=0;i<n;i++){
        int x=0,y=i;
        while(x<n&&y>=0){
            B[count].push_back(A[x][y]);
            x++;
            y--;
        }
        count++;
    }
    
    for(int i=1;i<n;i++){
        int x=i,y=n-1;
        while(x<n&&y>=0){
            B[count].push_back(A[x][y]);
            x++;
            y--;
        }
        count++;
    }
    return B;
}
