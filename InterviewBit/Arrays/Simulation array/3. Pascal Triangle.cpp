/*
Given numRows, generate the first numRows of Pascal’s triangle.
Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:
Given numRows = 5,
Return:
[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]
*/

vector<vector<int> > Solution::solve(int A) {
    if(A<0){ vector<vector<int>> B; return B; }
     vector<vector<int>> B(A); // #rows = A, #columns varies.
     for(int row=0;row<A;row++){ 
        for(int i=0;i<=row;i++){
            if(row==i || i==0) B[row].push_back(1); 
            else
                B[row].push_back(B[row-1][i-1]+B[row-1][i]); 
        } 
    }
    return B;
}
