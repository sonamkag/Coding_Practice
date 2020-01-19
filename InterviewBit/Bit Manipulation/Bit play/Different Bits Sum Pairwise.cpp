int Solution::cntBits(vector<int> &A) {
    long long int sum=0;
    int cnt;
    for(int i=0;i<31;i++){
        cnt=0;
        for(int j=0;j<A.size();j++)
            if(A[j]&(1<<i)) cnt++;
        sum+=(2*cnt*(A.size()-cnt));
        sum%=1000000007;
    }
    return (int)sum;
}

