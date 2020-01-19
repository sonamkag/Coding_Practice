int generateNum(string s,int start,int end){
    int A=0;
    for(int i=start;i<end;i++) A=A*10+s[i]-'0';
    return A;
}

bool isValid(string s){
    int i=0,n=s.length();
    while(i<n){
        int j=i;
        while(j<n&&s[j]!='.') j++;
        if(j-i>3||j-i==0) return false;
        int num=generateNum(s,i,j);
        if(num>255) return false;
        if(j-i>1&&(num==0||s[i]=='0')) return false;
        i=j+1;
    }
    return true; 
}

string generateString(string A,int a,int b,int k){
    string s;
    for(int i=0;i<A.length();i++){
        s=s+A[i];
        if(i==a||i==b||i==k) s=s+'.';   
    }
    return s;
}

vector<string> Solution::restoreIpAddresses(string A) {
    int n=A.length();
    vector<string> B;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n-1;j++)
            for(int k=j+1;k<n-1;k++){
                string s=generateString(A,i,j,k);
                if(isValid(s)) B.push_back(s);
            }
    return B;
}

