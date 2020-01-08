class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int total_unique_chars=256, n=s.size(), prev_index;
        int cur_len=1, max_len=1;
        vector<int> visited(256,-1); //-1 for not visiting
        visited[s[0]]=0; //marking first character by storing it's index
        
        if(n==0) return 0;
        
        for(int i=1;i<n;i++){
           prev_index=visited[s[i]];
           if(prev_index==-1||i-cur_len>prev_index) cur_len++; //if not present, then increase cur_len.
            else{ //else update current_substring to start from the next character of the previous instance
                if(cur_len>max_len) max_len=cur_len;
                cur_len=i-prev_index;   
            }
            visited[s[i]]=i; //update current index
        }
        if(cur_len>max_len) max_len=cur_len;
        visited.clear();
        return max_len;
    }
};
