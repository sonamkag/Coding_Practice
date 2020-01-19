vector<int> itod(int A){
    vector<int> B;
    while(A!=0){
        B.push_back(A%10);
        A=A/10;
    }
    if(B.size()==0) B.push_back(0);
    reverse(B.begin(),B.end());
    return B;
}

int Solution::solve(vector<int> &A, int B, int C) {
    vector<int>cd=itod(C);
    int a=A.size(),c=cd.size();
    //if(B<1||B>9) return 0;
    //if(C<0||C>pow(10,9)) return 0;
    //for(int i=0;i<A;i++) if(A[i]<0||A[i]>9) return 0;
    
    //case1
    if(B>c||a==0) return 0;
    //case2
    else if(B<c){
        if(A[0]==0&&B!=1) return (a-1)*pow(a,B-1);
        else return pow(a,B);
    }
    //case3
    else{
        int dp[B+1],lower[11],d2;
        bool flag=true;
        for(int i=0;i<=B;i++) dp[i]=0;
        for(int i=0;i<11;i++) lower[i]=0;
        for(int i=0;i<a;i++) lower[A[i]+1]=1;
        for(int i=1;i<11;i++) lower[i]=lower[i-1]+lower[i]; 
        for(int i=1;i<=B;i++){
            d2=lower[cd[i-1]];
            dp[i]=dp[i-1]*a;
            // For first index we can't use 0
            if(i==1&&A[0]==0&&B!=1) d2=d2-1;
            //Whether (i-1) digit of generated number can be equal to (i - 1) digit of C.
            if(flag) dp[i]+=d2;
             //Is digit[i - 1] present in A ?
            flag=flag&(lower[cd[i-1]+1]==lower[cd[i-1]]+1);
        }
        return dp[B];
    }    
}

