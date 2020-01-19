int Solution::reverse(int A) {
    long long int rev=0;
    int tmp = A;
    while(tmp){
        rev=rev*10+tmp%10;
        if(rev>INT_MAX || rev<INT_MIN) return 0;
        tmp/=10;
    }
    return rev;
}

