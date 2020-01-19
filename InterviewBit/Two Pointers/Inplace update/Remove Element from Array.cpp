int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> res;
   int start=0,index=0;
   while(A[start]==B && start<A.size()) start++;
   if(start==A.size()) return 0;
   A[index]=A[start];
   index++;
   start++;

   for(int i=start;i<A.size();i++)
        if(A[i]!=B){
            A[index]=A[i];
            index++;
        }
    return index;
}

