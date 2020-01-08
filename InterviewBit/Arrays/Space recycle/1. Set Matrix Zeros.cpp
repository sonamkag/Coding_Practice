/*
Given an m x n matrix of 0s and 1s, if an element is 0, set its entire row and column to 0. Do it in place.

Example: Given array A as
1 0 1
1 1 1 
1 1 1
On returning, the array A should be :
0 0 0
1 0 1
1 0 1

Note that this will be evaluated on the extra memory used. Try to minimize the space and time complexity.
*/

void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m=A.size(),n=A[0].size();
    bool row_flag = false, col_flag = false; 
    for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++){ 
            if(i==0 && A[i][j]==0) row_flag=true; 
            if(j==0 && A[i][j]==0) col_flag=true; 
            if(A[i][j]==0){ 
                A[0][j] = 0; 
                A[i][0] = 0; 
            } 
        } 
    } 
    
    for(int i=1;i<m;i++){ 
        for(int j=1;j<n;j++){ 
            if(A[0][j]==0 || A[i][0]==0) A[i][j]=0; 
        } 
    } 

    if(row_flag==true){ 
        for(int i=0;i<n;i++){ 
            A[0][i]=0; 
        } 
    } 

    if(col_flag==true){ 
        for(int i=0;i<m;i++){ 
            A[i][0]=0; 
        } 
    }
}
