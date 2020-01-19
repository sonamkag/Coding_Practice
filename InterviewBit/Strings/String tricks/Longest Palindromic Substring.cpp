string Solution::longestPalindrome(string A) {
    int length=A.size(),start=0,maxLen=1;
    int low=0,high;
    for(int i=0;i<length;i++){
        low=i-1;
        high=i;
        while((low>=0)&&(high<length)&&(A[low]==A[high])){
            if((high-low+1)>maxLen){
                maxLen=high-low+1;
                start=low;
            }        
            low--;
            high++;
        }
        low=i-1;
        high=i+1;
        while((low>=0)&&(high<length)&&(A[low]==A[high])){
            if((high-low+1)>maxLen){
                maxLen=high-low+1;
                start=low;
            }
            low--;
            high++;
        }
    }
    string sol="";
    high=start+maxLen;
    while(start!=high){
        sol=sol+A[start];
        start++;
    }
    return sol;
}

