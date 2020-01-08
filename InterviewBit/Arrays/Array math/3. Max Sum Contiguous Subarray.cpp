/*
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example:
Given the array [-2,1,-3,4,-1,2,1,-5,4], the contiguous subarray [4,-1,2,1] has the largest sum = 6.
For this problem, return the maximum sum.
*/

int Solution::maxSubArray(const vector<int> &A) {
    int global_max=A[0],local_max=A[0];
    for(int i=1;i<A.size();i++){
        local_max=max(A[i],(local_max+A[i]));
        global_max=max(global_max,local_max);
    }
    return global_max;
}
