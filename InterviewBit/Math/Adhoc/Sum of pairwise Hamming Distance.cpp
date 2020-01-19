int Solution::hammingDistance(const vector<int> &A) {
    long long int sum,x; //y=A.size()-x. 
    sum =0;
    for(int i=0;i<32;i++){
        x = 0; //count of 1s at a particular bit
        for(int j=0;j<A.size();j++){
            if(A[j]&(1<<i)) x++;
        }
        sum += (2*x*(A.size()-x));
        sum %= 1000000007;
    }
    return (int)sum;
}
