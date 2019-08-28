vector<int> Solution::getRow(int A) {
    vector<int> B(A+1);
    int c=1;
    B[0]=c;
    for(int i=1;i<=A;i++){
        B[i]=c*(A-i+1)/i;
        c=B[i];
    }
    return B;
}
