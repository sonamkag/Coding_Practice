int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0,j=0,k=0,min_MAX=INT_MAX;
    while (i<A.size() && j<B.size() && k<C.size()){
        int minVal=min(A[i], min(B[j],C[k]));
        int maxVal=max(A[i], max(B[j],C[k]));
        if(min_MAX>maxVal-minVal) min_MAX=maxVal-minVal;
        if(minVal==A[i]) i++;
        else if(minVal==B[j]) j++;
        else k++;
    }
    return min_MAX;
}
