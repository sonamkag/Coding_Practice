int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int start = 1, end = A;
    int B;
    if(A==0||A==1) return A;
    while (start<=end){
        int mid=(start+end)/2; 
        if (mid*mid==A) return mid;  //perfect square
        if (mid<=A/mid){
            start=mid+1; 
            B=mid; 
        }  
        else 
            end=mid-1;         
    } 
    return B; 
}

