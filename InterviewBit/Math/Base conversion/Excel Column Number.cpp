int Solution::titleToNumber(string A) {
    int tmp = 1; long int colNum = 0; int j=A.size()-1;
    //cout << A << " " << A.size() << endl;
    while(j>=0){
        int ch = A[j] - 64;
        colNum += (tmp*ch);
        //cout << j << " " << A[j] << " " << ch << " " << tmp << " " << colNum << endl;
        tmp *= 26;
        j--;
    }
    return colNum;
}

