int min_painters(vector<int> &A, int maxLen){
    int total=0, x=1; 
    for(int i=0;i<A.size();i++){ 
        total += A[i]; 
        if(total>maxLen){ 
            total=A[i]; 
            x++; 
        } 
    } 
    return x; 
}

int Solution::books(vector<int> &A, int B) {
    if(B>A.size()) return -1;
    int low=INT_MIN; int high=0; 
    for(int i=0;i<A.size();i++) 
        if(A[i]>low) low=A[i];
        
    for (int i=0;i<A.size();i++) 
       high+=A[i];
    
    while(low<high){ 
        int mid=low+(high-low)/2; 
        int x=min_painters(A,mid); 
        if(x>=mid) return -1;
        if(x<=B) high=mid; 
        else low=mid+1;
    } 
    return low; 
}

