/*
You are given a read only array of n integers from 1 to n. Each integer appears exactly once except A which appears twice 
and B which is missing. Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
Note that in your output A should precede B.

Example:
Input:[3 1 2 5 3] 
Output:[3, 4] 
A = 3, B = 4
*/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> B;
    int*x=(int*)malloc(sizeof(int)); 
    int*y=(int*)malloc(sizeof(int)); 
    int xor1= A[0],flag=0,set_bit_no;
    *x =0;*y =0;
    for(int i=1;i<A.size();i++) xor1=xor1^A[i];    
    for(int i=1;i<=A.size();i++) xor1=xor1^i;
    set_bit_no = xor1 & ~(xor1-1);
    for(int i=0;i<A.size();i++){ 
        if (A[i] & set_bit_no) *x=*x^A[i]; 
        else *y=*y^A[i]; 
    } 
    
    for(int i=1;i<=A.size();i++){ 
        if(i&set_bit_no) *x=*x^i; 
        else *y = *y ^ i; 
    }

    for (int i=0;i<A.size();i++){
        if(*x==A[i]){
            flag=1;
            break;
        }
    }
    
    if(flag==1){
        B.push_back(*x);
        B.push_back(*y);
    }
    
    else{
        B.push_back(*y);
        B.push_back(*x); 
    }
    return B;
}
