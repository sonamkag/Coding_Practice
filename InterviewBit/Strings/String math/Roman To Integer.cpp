int Solution::romanToInt(string A) {
    int B=0;
    string roman="IVXLCDM";
    int val[]={1, 5, 10, 50, 100, 500, 1000};
    for(int i=0;i<A.length();i++){
        int s1=val[roman.find(A[i])];
        if(i+1<A.length()) {
            int s2=val[roman.find(A[i+1])];
            if(s1>=s2) B+=s1;
            else{
                B+=s2-s1;
                i++;
            }
        }
        else{
            B+=s1;
            i++;
        }
    }
    return B;
}

