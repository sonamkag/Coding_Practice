/*
You are given an array of N integers, A1, A2 ,…, AN. Return maximum value of f(i, j) for all 1 ≤ i, j ≤ N.
f(i,j) is defined as |A[i]-A[j]|+|i-j|, where |x| denotes absolute value of x.

For example,
A=[1, 3, -1]
f(1, 1) = f(2, 2) = f(3, 3) = 0
f(1, 2) = f(2, 1) = |1 - 3| + |1 - 2| = 3
f(1, 3) = f(3, 1) = |1 - (-1)| + |1 - 3| = 4
f(2, 3) = f(3, 2) = |3 - (-1)| + |2 - 3| = 5
So, we return 5.
*/

int Solution::maxArr(vector<int> &A) {
    int max_plus=INT_MIN,min_plus=INT_MAX;
    int max_minus=INT_MIN,min_minus=INT_MAX;
    for(int i=0;i<A.size();i++){
        max_plus=max(max_plus,A[i]+i);
        min_plus=min(min_plus,A[i]+i);
        max_minus=max(max_minus,A[i]-i);
        min_minus=min(min_minus,A[i]-i);
    }
    return max((max_plus-min_plus),(max_minus-min_minus));    
}
