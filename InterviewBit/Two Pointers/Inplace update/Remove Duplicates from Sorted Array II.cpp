int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int index=0,n=A.size();
    for(int i=0;i<n;++i){
        if(i<n-2 && A[i]==A[i+1] && A[i]==A[i+2]) continue;
        else A[index++] = A[i];
    }
    return index;
}

