int Solution::isPower(int A) {
    if(A <=1) return 1;
    for(int x=2;x<=sqrt(A);x++){
        double tmp = log(A) / log(x); 
        if ((tmp- (int)tmp) < 0.00000001) return 1;
    }
    return 0;    
}

