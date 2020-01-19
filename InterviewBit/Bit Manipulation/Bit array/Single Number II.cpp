int Solution::singleNumber(const vector<int> &A) {
    if(A.empty()) return 0;
    int one=0,two=0;
    for(int i=0;i<A.size();i++){
        two=two|(one&A[i]);
        one=one^A[i];
        int check = ~(one&two);
        one=one&check;
        two=two&check;
    } 
    return one;
}

