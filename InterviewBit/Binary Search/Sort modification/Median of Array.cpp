double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()<B.size()) return findMedianSortedArrays(B,A);
    
    int low=0, high=2*B.size();
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int mid1=A.size()+B.size()-mid;
        
        double L1=(mid1==0) ? INT_MIN:A[(mid1-1)/2];    
        double L2=(mid==0) ? INT_MIN:B[(mid-1)/2];
        double R1=(mid1==A.size()*2) ? INT_MAX:A[(mid1)/2];
        double R2=(mid==B.size()*2) ? INT_MAX:B[(mid)/2];
        
        if(L1>R2) low=mid+1;        
        else if(L2>R1) high=mid-1;    
        else return(max(L1,L2)+min(R1,R2))/2;    
}
}

