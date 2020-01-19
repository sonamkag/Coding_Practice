string divideBy2(string A){
    string B;
    int n=A.length(),i=0,carry=0;
    while(i<n){
        int num=A[i]-'0';
        num+=(carry*10);
        carry=num%2;
        int tmp=num/2;
        B.push_back(tmp+'0');
        i++;
    }
    if(carry==1){
        string C;
        C.push_back(carry+'0');
        return C;
    }
    while(B.length()>0 && B[0]=='0') B.erase(B.begin());
    return B;
}

int Solution::power(string A) {
    if(A.length()==1 && A[0]=='1') return 0;
    string tmp=A;
    while(tmp.length()>0){
        if(tmp.length()==1 && tmp[0]=='1') break;
        int n=tmp.length(),t=tmp[n-1]-'0';
        if(t%2!=0) return 0;
        tmp=divideBy2(tmp);
    }
    return 1;
}

