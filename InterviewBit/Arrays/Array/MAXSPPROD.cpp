/*
You are given an array A containing N integers. 
The special product of each ith integer in this array is defined as the product of the following:<ul>
LeftSpecialValue: For an index i, it is defined as the index j such that A[j]>A[i] (i>j).
RightSpecialValue: For an index i, it is defined as the index j such that A[j]>A[i] (j>i). 
If multiple A[j]s are present in multiple positions, the LeftSpecialValue is the maximum value of j and 
the RightSpecialValue is the minimum value of j.
Find the maximum special product of any integer in the array.

Input: You will receive array of integers as argument to function.
Output: Maximum special product of any integer in the array modulo 1000000007.
Note: If j does not exist, the LeftSpecialValue and RightSpecialValue are considered to be 0.
*/

int Solution::maxSpecialProduct(vector<int> &A) {
    int n=A.size();
    vector<int>Left(n,0),Right(n,0);
    stack<int>leftCalc;
    leftCalc.push(0);
    Left[0]=0;
    for(int i=1;i<n;i++){
        while(!leftCalc.empty()){
            if(A[leftCalc.top()]>A[i]) break;
            leftCalc.pop();
        }
        Left[i]=(leftCalc.empty())?0:leftCalc.top();
        leftCalc.push(i);
    }
    stack<int> rightCalc;
    rightCalc.push(n-1);
    Right[n-1]=0;
    for(int i=n-2;i>=0;i--){
        while(!rightCalc.empty()){
            if(A[rightCalc.top()]>A[i]) break;
            rightCalc.pop();
        }
        Right[i]=(rightCalc.empty())?0:rightCalc.top();
        rightCalc.push(i);
    }
    long long mx=-1;
    for(int i=0;i<n;i++){
        mx=max(mx,Left[i]*1LL*Right[i]);
    }
    return mx%1000000007;
}
