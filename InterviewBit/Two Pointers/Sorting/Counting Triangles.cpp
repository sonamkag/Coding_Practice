int Solution::nTriang(vector<int> &A) {
    int res=0,mod=1000000007;
    if(A.empty()) return res;
    sort(A.begin(),A.end());
    for(int i=A.size()-1;i>=0;i--){
        int j=0,k=i-1;
        while(j<k){
            long int miniSum=A[j]+A[k],maxi=A[i];
            if(miniSum>maxi){
                res=(res+(k-j)%mod)%mod;
                k--;
            }   
            else j++;  
        }
    }
    return res;
}

