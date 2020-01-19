int Solution::solve(string A) {
    int totalsubStr=0;
    char vowels[] = {'a','e','i','o','u','A','E','I','O','U'};
    char* end = vowels+sizeof(vowels)/sizeof(vowels[0]); 
    for(int i=0;i<A.length();i++){
        char* position = std::find(vowels,end,A[i]);
        if(position!=end) totalsubStr+=(A.length()-i);
        totalsubStr%=10003;
    }
    return totalsubStr;
}

