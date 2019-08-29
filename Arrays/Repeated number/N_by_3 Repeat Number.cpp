/*
You’re given a read only array of n integers. Find out if any integer occurs more than n/3 times in the array in linear time 
and constant additional space. If so, return the integer. If not, return -1. If there are multiple solutions, return any one.

Example :
Input : [1 2 3 1 1]
Output : 1 
1 occurs 3 times which is more than 5/3 times. 
*/

int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size(),count1=0,count2=0; 
    int first=INT_MAX,second=INT_MAX,freq=0; 
    for(int i=0;i<n;i++){
        if(count1>0 && A[i]==first) count1+=1;
        else if(count2>0 && A[i]==second) count2+=1;
        else if(count1==0){ first=A[i]; count1=1; }
        else if(count2==0){ second=A[i]; count2=1; }
        else{ count1--; count2--; }
    }
    if(count1==0 && count2==0) return -1;
    if(count1){
        for(int i=0;i<n;i++){ if(A[i]==first) freq++; }
        if(freq>n/3) return first;
    }
    freq=0;
    if(count2){
        for(int i=0;i<n;i++){ if(A[i]==second) freq++; }
        if(freq>n/3) return second;
    }
    return -1;
}
