/*
Given an unsorted array, find the maximum difference between the successive elements in its sorted form. 
Try to solve it in linear time/space.
Example :
Input : [1, 10, 5]
Output : 5 
Return 0 if the array contains less than 2 elements.

NOTE: You may assume that all the elements in the array are non-negative integers and fit in the 32-bit signed integer range 
and the difference will not overflow.
*/

int Solution::maximumGap(const vector<int> &A) {
    int n=A.size(),maxVal=A[0],minVal=A[0]; 
    if(n<2) return 0;
    for (int i=1;i<n;i++){ 
        maxVal=max(maxVal,A[i]); 
        minVal=min(minVal,A[i]); 
    } 
  
    int maxBucket[n-1]; 
    int minBucket[n-1]; 
    fill_n(maxBucket,n-1,INT_MIN); 
    fill_n(minBucket,n-1,INT_MAX); 
  
    float delta=(float)(maxVal-minVal)/(float)(n-1); 
  
    for (int i=0;i<n;i++){ 
        if(A[i]==maxVal||A[i]==minVal) continue; 
        int index=(float)(floor(A[i]-minVal)/delta); 
  
        if(maxBucket[index]==INT_MIN) maxBucket[index]=A[i]; 
        else maxBucket[index]=max(maxBucket[index],A[i]); 
  
        if(minBucket[index]==INT_MAX) minBucket[index]=A[i]; 
        else minBucket[index]=min(minBucket[index],A[i]); 
    } 

    int prev_val=minVal,max_gap=0; 
    for(int i=0;i<n-1;i++){ 
        if(minBucket[i]==INT_MAX) continue; 
        max_gap=max(max_gap,minBucket[i]-prev_val); 
        prev_val=maxBucket[i]; 
    } 
    max_gap=max(max_gap,maxVal-prev_val); 
    return max_gap; 
}
