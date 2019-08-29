/*
You are given a binary string(i.e. with characters 0 and 1) S consisting of characters S1, S2, …, SN. 
In a single operation, you can choose two indices L and R such that 1 ≤ L ≤ R ≤ N and flip the characters SL, SL+1, …, SR. 
By flipping, we mean change character 0 to 1 and vice-versa.

Your aim is to perform ATMOST one operation such that in final string number of 1s is maximised. 
If you don’t want to perform the operation, return an empty array. Else, return an array consisting of two elements 
denoting L and R. If there are multiple solutions, return the lexicographically smallest pair of L and R.

Note: Pair (a, b) is lexicographically smaller than pair (c, d) if a < c or, if a == c and b < d.
For Example: 
If S = 010, then we return [1,1] which is lexicograpically smaller in [1,1] & [1,3].
*/

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
