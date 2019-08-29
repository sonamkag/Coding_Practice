/*
Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].
If there is no solution possible, return -1.

Example :
A : [3 5 4 2]
Output : 2 (for the pair (3, 4)).
*/

int Solution::maximumGap(const vector<int> &A) {
    int n=A.size();
    //if(n==1) return 0;
    int maxDiff=-1,i,j;
    vector<int> Lmin(n);
    vector<int> Rmax(n);
    Lmin[0]=A[0];Rmax[n-1]=A[n-1]; 
    for(i=1;i<n;++i) Lmin[i]=min(A[i],Lmin[i-1]);
    for(j=n-2;j>=0;--j) Rmax[j]=max(A[j],Rmax[j+1]);  
    i=0,j=0;
    //if(Lmin[n-1]==Rmax[0]) return 0;
    while(j<n&&i<n){  
        if(Lmin[i]<=Rmax[j]){  
            maxDiff=max(maxDiff,j-i);  
            j++;
        }  
        else i++;  
    }  
    return maxDiff;  
}
