/*
Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers.
If such arrangement is not possible, it must be rearranged as the lowest possible order ie, sorted in an ascending order.
The replacement must be in-place, do not allocate extra memory.

Examples:
1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1
20,50,113 → 20,113,50
   
Warning : DO NOT USE LIBRARY FUNCTION FOR NEXT PERMUTATION. 
*/

void Solution::nextPermutation(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size(),k=-1,l=0;
    for(int i=0; i<n-1; i++)
            if(A[i]<A[i+1]) k=i;
                
    if(k==-1){ sort(A.begin(),A.end()); return; }
    for(int i=k+1;i<n;i++)
            if(A[i]>A[k]) l=i;
                
     int tmp=A[l];
        A[l]= A[k];
        A[k]=tmp;
        int j=k+1,last=n-1;
        while(j<=last){
           tmp = A[j];
            A[j]=A[last];
            A[last]=tmp;
            j++;
            last--;
        }
}
