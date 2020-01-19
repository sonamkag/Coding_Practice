int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m=A.size(),n=A[0].size();
    int row=-1;
    for(int i=0;i<m;i++)
        if(B>=A[i][0]&&B<=A[i][n-1]){
            row=i;
            break;
        }
    if(row==-1) return 0;
    int low=0; int high=n-1;
    while(low<=high){ 
        int mid=low+(high-low)/2; 
        if(A[row][mid]==B) return 1; 
        if(A[row][mid]<B) low=mid+1; 
        else high=mid-1; 
    } 
  return 0;
}

