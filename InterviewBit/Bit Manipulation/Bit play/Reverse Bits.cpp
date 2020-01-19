unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int numOfBits = sizeof(A)*8,result = 0;   //Simple bitwise approach
    for(auto i=0;i<numOfBits;++i){
        if((A>>i) & 1==1)
            result |= 1 << ((numOfBits-1)-i);
    }   
    return result;
    /*
    unsigned int num=0; //Bits Math Logic Approach
    int bits=31,i=0;
    while(A){
        num+=pow(2,31-i)*(A%2);
        A=A/2;
        i++;
    }
    return num;
    */
}

