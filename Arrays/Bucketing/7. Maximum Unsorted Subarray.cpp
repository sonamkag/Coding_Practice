/*
You are given an array (zero indexed) of N non-negative integers, A0, A1 ,…, AN-1. Find the minimum sub array Al, Al+1 ,…, Ar 
so if we sort(in ascending order) that sub array, then the whole array should get sorted. If A is already sorted, output -1.

Example :
Input 1: A = [1, 3, 2, 4, 5]
Return: [1, 2]

Input 2: A = [1, 2, 3, 4, 5]
Return: [-1]
In the above example(Input 1), if we sort the subarray A1, A2, then whole array A should get sorted.
*/

vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> V;
    int n=A.size();
    int s=0,e=n-1;
    
    for(s=0;s<n-1;s++)
        if(A[s]>A[s+1]) break;
        
    if(s==n-1){
        V.push_back(-1);
        return V;
    }
  
    for(e=n-1;e>0;e--)
        if(A[e]<A[e-1]) break;
    
    int max=A[s],min=A[s];
    for(int i=s+1;i<=e;i++){
        if(A[i]>max) max=A[i]; 
        if(A[i]<min) min=A[i];
    }
    
    for(int i=0;i<s;i++){
        if(A[i]>min){ 
            s=i; 
            break;
        }
    }    
    
    for(int i=n-1;i>=e+1;i--){
        if(A[i]<max){ 
            e=i; 
            break;
        }
    }
    
    V.push_back(s);
    V.push_back(e);
    return V;
}
