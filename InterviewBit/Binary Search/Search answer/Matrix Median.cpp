int Solution::findMedian(vector<vector<int> > &A) {
    int min=INT_MAX, max=INT_MIN; 
    for (int i=0;i<A.size();i++) {
        if (A[i][0]<min) min=A[i][0]; //minimum element
        if (A[i][A[0].size()-1] > max) max=A[i][A[0].size()-1]; //maximum element
    } 
  
    int desired=(A.size()*A[0].size()+1)/2; 
    while(min<max) {
        int mid=min+(max-min)/2; 
        int small_elem_count=0; 

        for (int i=0;i<A.size();++i)  small_elem_count += upper_bound(A[i].begin(), A[i].end(), mid)-A[i].begin(); 
        if (small_elem_count<desired) min=mid+1; 
        else max=mid; 
    } 
    return min; 
}

