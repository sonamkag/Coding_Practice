vector<int> Solution::maxset(vector<int> &A) {
    vector<int> B;
    int max_len=0;long int max_sum=0;int start=0;
    int curr_len=0;long int curr_sum=0;int s=0;  
    for(int i=0;i<A.size();i++){ 
        if(A[i]>=0){
            curr_sum+=A[i];
            curr_len++;
            if(curr_sum==A[i]) s=i;
        }
        
        if(max_sum==curr_sum){
            //cout << "a" << endl;
            if(max_len==curr_len){
                //cout << "aa" << endl;
                start=min(s,start);
            }
            
            if(max_len<curr_len){
                //cout << "ab" << endl;
                max_len=curr_len;
                start=min(s,start);
            }
        }
        
        if(max_sum<curr_sum){ 
            //cout << "b" << endl;
            max_sum=curr_sum;
            max_len=curr_len;
            start=s; 
        }
        
        if(A[i]<0){
            //cout << "c" << endl;
            curr_sum=0;
            curr_len=0;
        }
         //cout << max_sum << " "  << curr_sum << " " << curr_len << " " << max_len << " " << s << " " << start  << endl;
    } 
    
    if(max_len>0){
        while(max_len!=0){
            B.push_back(A[start]);
            start+=1;
            max_len--;
        }
    } 
    return B; 
}
