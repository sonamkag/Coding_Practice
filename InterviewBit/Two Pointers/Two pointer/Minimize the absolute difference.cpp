int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int diff=INT_MAX,i=0,j=0,k=0;
    while (i<A.size() && j<B.size() && k<C.size()){
        int maximum=max(A[i], max(B[j],C[k])), minimum=min(A[i], min(B[j],C[k]));
        if(maximum-minimum < diff) diff = maximum-minimum;
        if(diff==0) break;
        if(A[i]==minimum) i++;
        else if(B[j]==minimum) j++;
        else k++;
        }
        return diff;
}

