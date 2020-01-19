string Solution::intToRoman(int A) {
    int i=0,num[]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};   
    string roman[]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string B="";
    while(A!=0){
        while (A>=num[i]){
            B+=roman[i];
            A-=num[i];
        }
        ++i;
    }
    return B;
}

