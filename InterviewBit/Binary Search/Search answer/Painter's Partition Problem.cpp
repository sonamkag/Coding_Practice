int min_painters(vector<int> &C, long long int maxLen){
    int total=0, x=1; 
    for(int i=0;i<C.size();i++){ 
        total += C[i]; 
        if(total>maxLen){ 
            total=C[i]; 
            x++; 
        } 
    } 
    return x; 
}

int Solution::paint(int A, int B, vector<int> &C) {
    long long int low=INT_MIN; long long int high=0; 
    for(int i=0;i<C.size();i++) 
        if(C[i]>low) low=C[i];
        
    for (int i=0;i<C.size();i++) 
       high+=C[i];
    
    while(low<high){ 
        long long int mid=low+(high-low)/2; 
        int x=min_painters(C,mid); 
        if(x<=A) high=mid; 
        else low=(mid+1);
        
    //int count =0;
    //cout << low << " " << high << " " << mid << " " << x << endl;
    //count++;
    } 
    return (low*B)%10000003; 
}

