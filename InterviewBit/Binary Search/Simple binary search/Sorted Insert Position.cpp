int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int low=0; int high=A.size()-1;
    while(low<=high){ 
        int mid=low+(high-low)/2; 
        if(A[mid]==B||(mid==0&&B<A[mid])||(mid>0&&B<A[mid]&&B>A[mid-1])) return mid; 
        if(A[mid]<B) low=mid+1; 
        else high=mid-1; 
    }
    return A.size();
}

