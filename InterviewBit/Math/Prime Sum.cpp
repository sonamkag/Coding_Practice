int isPrime(int A) {
    int isPrime;
    if(A ==0 || A==1) isPrime=0;
    else isPrime=1;
    for(int i=2;i<=sqrt(A);i++){
        if(A%i == 0) isPrime=0;
    }
    return isPrime;
}

vector<int> Solution::primesum(int A) {
    vector<int> B;
    for(int i=2;i<=(A/2);i++){
        if(isPrime(i)==1){
            int j=A-i;
            if(isPrime(j)==1 && A%2==0){
                B.push_back(i);
                B.push_back(j);
                return B;
            }
        }
    }
}
