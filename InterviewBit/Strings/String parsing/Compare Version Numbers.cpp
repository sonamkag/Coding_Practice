string trim(string A){
    int m=A.length(),i=0;
    string temp="";
    while(i<m && A[i]=='0') i++;
    if(i==m) temp="0";
    else{
        for(;i<m;i++) temp+=A[i];
    }
    return temp;
}

string num(string A,int &i){
    string temp="";
    while(i<A.length() && A[i]!='.'){
        temp+=A[i];
        i++;
    }
    return trim(temp);
}

int Solution::compareVersion(string A, string B){
    int i=0,j=0;
    string num1="-1",num2="-1";
    while(i<A.length() || j<B.length()){
        num1=num(A,i);
        i++;
        num2=num(B,j);
        j++;
        if(num1=="-1" || num2=="-1") return 0;
        if(num1.length()==num2.length()){
            if(num1 > num2) return 1;
            else if(num1 < num2) return -1;
        }
        else{
            if(num1.length() > num2.length()) return 1;
            else return -1;
        }
    }
    return 0;
}

