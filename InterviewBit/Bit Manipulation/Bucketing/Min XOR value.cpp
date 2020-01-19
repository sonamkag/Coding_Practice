int Solution::findMinXor(vector<int> &A) {
    int minXor=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++) minXor=min(minXor,A[i]^A[i+1]);
    return minXor;
}

