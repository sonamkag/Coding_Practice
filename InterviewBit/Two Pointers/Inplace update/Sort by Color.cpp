void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int *B=new int[3];
    for(int num:A) B[num]++;
    for(int i=0;i<B.length();i++) cout << B[i] << " ";
    cout << endl;
    for(int i=0;i<A.size();i++){
        if(B[0]!=0){ cout << "0" << endl; A[i]=0; B[0]--; }
        else if(B[1]!=0){ cout << "1" << endl; A[i]=1; B[1]--; }
        else{ cout << "2" << endl; A[i]=2; B[2]--; }
    }
}

