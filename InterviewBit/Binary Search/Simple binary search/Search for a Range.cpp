vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int low=0,high=A.size()-1;
    int mid=low+(high-low)/2;
    vector<int>ans(2);
    ans[0]=-1;ans[1]=-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(A[mid]==B){
             ans[0]=mid;
             high=mid-1;
        }
        else if(A[mid]<B) low=mid+1;
        else high=mid-1;
    }
    if(ans[0]==-1) return ans;
    low=ans[0];high=A.size()-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(A[mid]==B){
             ans[1]=mid;
             low=mid+1;
        }
        else if(A[mid]<B) low=mid+1;
        else high=mid-1;
    }
return ans;
}

