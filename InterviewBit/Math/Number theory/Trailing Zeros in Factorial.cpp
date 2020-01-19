int Solution::trailingZeroes(int A) {
    long int total=0;
    while(A!=0){
        total += A/5;
        A /= 5;
    }
    return total;
}

