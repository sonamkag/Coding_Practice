int Solution::threeSumClosest(vector<int> &A, int B) {
    int min=INT_MAX,res=0;    
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-2;i++){
        int j=i+1,k=A.size()-1;
        while(j<k){
            int sum=A[i]+A[j]+A[k];
            int diff=abs(sum-B);
            if(diff==0) return B;
            if(diff<min){ min=diff;res=sum; }
            if(sum<=B) j++;
            else k--;
        }
    }
    return res;
}

