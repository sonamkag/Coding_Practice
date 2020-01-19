int Solution::solve(string A) {
    int n=A.size(),ans=1;
    if(n==0) return 0;
    for(int i=1;i<n;i++){
        int start=0,end=i,flag=1;
        while(start<end){
            if(A[start]!=A[end]){ flag=0; break; }
            start++;
            end--;
        }
        if(flag) ans=i+1;
    }
    return n-ans; 
}

