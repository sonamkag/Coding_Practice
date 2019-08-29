/*
Find out the maximum sub-array of non negative numbers from an array.
The sub-array should be continuous. That is, a sub-array created by choosing the second and fourth element and skipping the third
element is invalid.
Maximum sub-array is defined in terms of the sum of the elements in the sub-array. 
Sub-array A is greater than sub-array B if sum(A) > sum(B).

For Example:
A : [1, 2, 5, -7, 2, 3]
The two sub-arrays are [1, 2, 5] [2, 3]. The answer is [1, 2, 5] as its sum is larger than [2, 3].

NOTE: If there is a tie, then compare with segment's length and return segment which has maximum length.
NOTE 2: If there is still a tie, then return the segment with minimum starting index.
*/

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
