int Solution::strStr(const string A, const string B) {
    int i,j;
    if(A.empty()||B.empty()) return -1;
    for(i=0;i<A.length();i++)
        if(A[i]==B[0]){
            j=0;
            while(j<B.length()&&A[j+i]==B[j]) j++;
            if(j==B.length()) return i;
        }
    return -1;
}

