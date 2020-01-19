void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string B="";
    for(int i=A.length()-1;i>-1;--i){
        if (A[i]!=' '){
          int last=i,first=i;
          while(i>-1&&A[i]!=' ') --i;
          first=i+1;
          B.append(A.begin()+first,A.begin()+last+1);
          if(i>0){
            string tmp="",str=A.substr(0, i+1);
            tmp.append(i+1,' ');
            if(str!=tmp) B+=' ';
          }
        }
    }
    A=B;
}

