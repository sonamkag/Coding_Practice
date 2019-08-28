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
