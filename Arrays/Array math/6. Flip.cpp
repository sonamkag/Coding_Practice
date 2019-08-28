vector<int> Solution::flip(string A) {
    vector<int> B;
    int total_ones=0,curr_max=0,val,s=0,start=0,end=0,max_diff=INT_MIN;
    for (int i=0;i< A.size();i++){ 
        if((A[i]-'0')==1) total_ones++; 
        val=((A[i]-'0')==0)?1:-1;
        curr_max += val; 
        if(max_diff<curr_max){ 
            max_diff=curr_max; 
            start=s; 
            end=i; 
        } 
        
        if(curr_max<0){ 
            curr_max=0; 
            s=i+1; 
        }  
        //cout<< curr_max << " " << max_diff << " " << s << " " << start << " " << end << endl;
    }
    if(max_diff<0) return B;
    else{
        B.push_back(start+1);
        B.push_back(end+1);
        return B;
    }
}
