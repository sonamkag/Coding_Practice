long long int fact(int n) { return (n<=1) ? 1 : (n*fact(n-1)%1000003); } 
long long int power(long long int x, unsigned int y){
    long long int temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return (temp*temp)%1000003; 
    else
        return (x*temp*temp)%1000003; 
} 

int Solution::findRank(string A) {
    int mod=1000003;
    long long int rank=1;
    for(int i=0;i<A.length();i++){
        int smallChar=0; 
        for(int j=i+1;j<A.length();j++)
            if(int(A[i])>int(A[j])) smallChar++;
            
        vector<int> duplicates(52, 0); 
        for (int j=i;j<A.length();j++) { 
            if ((int(A[j]) >= 'A') && int(A[j]) <= 'Z') 
                duplicates[int(A[j]) - 'A'] += 1; 
            else
                duplicates[int(A[j]) - 'a' + 26] += 1; 
        } 
        long long int deno = 1; 
        for (int j=0;j<duplicates.size();j++){
            deno *= fact(duplicates[j]);
            deno %=mod;
        }
        //cout << deno << endl;
        deno=power(deno,mod-2);
        
        
        long long int redfact= smallChar*fact(A.length()-i-1);
        redfact %=mod;
        rank += redfact*deno;
        rank %=mod;
        
        //for (int j=0;j<duplicates.size();j++) cout << j << " " << duplicates[j] << endl;
        //cout << i << " " << smallChar << " " << fact(A.length()-i-1) << " " << deno<< " " << rank << endl;
    }
    return rank;
}

