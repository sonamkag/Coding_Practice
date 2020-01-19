string findDigitsInBinary(int A) {
    string B = "";
    int rem; //remainder
    //int i=0;
    if(A==0) return "0";
    while(A>0){
        rem = A%10;
        B.push_back(rem - '0');
        A=A/10;
        //cout << rem << " " << A << " " << B[i] << endl;
        //i++;
    }
    reverse(B.begin(), B.end());
    return B;
}

int Solution::isPalindrome(int A) {
    if(A<0) return false;
    string s = findDigitsInBinary(A);
    int i=0, j=s.size()-1, flag=1;
    for(int k=0;k<s.size()/2;k++){
        if(s[k]==s[j]){
            j--;
            continue;
        }
        else { flag=0; break; }
    }
    
    if(flag==0) return false;
    else return true;
}

