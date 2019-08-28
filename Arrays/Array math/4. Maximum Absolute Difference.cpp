int Solution::maxArr(vector<int> &A) {
    int max_plus=INT_MIN,min_plus=INT_MAX;
    int max_minus=INT_MIN,min_minus=INT_MAX;
    for(int i=0;i<A.size();i++){
        max_plus=max(max_plus,A[i]+i);
        min_plus=min(min_plus,A[i]+i);
        max_minus=max(max_minus,A[i]-i);
        min_minus=min(min_minus,A[i]-i);
    }
    return max((max_plus-min_plus),(max_minus-min_minus));    
}
