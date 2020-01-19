int findPivot(const vector<int> &A){
    int low=0;int high=A.size()-1;int mid;
    while(low<=high){
        mid= low+(high-low)/2;
        int next=(mid+1)%A.size();
        int prev=(mid-1+A.size())%A.size();
        if(A[low] <= A[high]) return low;
        else if((A[mid]<=A[prev])&&(A[mid]<=A[next])) return mid;
        else if(A[mid]<=A[high]) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int binarySearch(const vector<int> &A, int B, int low, int high){
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(A[mid]==B) return mid;
        else if(A[mid]>B) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int pivot=findPivot(A);
    if(B==A[pivot]) return pivot;
    int ans=binarySearch(A,B,0,pivot-1);
    if(ans== -1) return binarySearch(A,B,pivot+1,A.size()-1);    
    return ans;
}

