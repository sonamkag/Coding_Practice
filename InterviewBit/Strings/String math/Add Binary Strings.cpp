string Solution::addBinary(string A, string B) {
    string sum;
    int tmp=0,la=A.size()-1,lb=B.size()-1;
    while(la>=0||lb>=0||tmp==1){
        tmp+=((la>=0)?A[la]-'0':0);
        tmp+=((lb>=0)?B[lb]-'0':0);
        sum=char(tmp%2+'0')+sum;
        tmp/=2;
        la--;lb--;
    }
    return sum;
}

