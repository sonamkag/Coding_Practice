int fact(int n) {
    return (n<=1) ? 1 : (n*fact(n-1))%1000003; 
} 

int Solution::findRank(string A) {
    long long int rank=1;
    for(int i=0;i<A.length();i++){
        int smallChar=0; 
        for(int j=i+1;j<A.length();j++)
            if(A[i]>A[j]) smallChar++;
        rank += smallChar*(fact(A.length()-i-1))%1000003;
    }
    return (rank)%1000003;
}
