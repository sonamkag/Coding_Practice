int Solution::maxArea(vector<int> &A) {
    int i=0,j=A.size()-1,maxArea=0;
    while(i<j){
        int base=min(A[j],A[i]);
        maxArea=max(maxArea,(j-i)*base);
        if(A[i]==base) i++;
        else j--;
    }
    return maxArea;
}

