class Solution {
public:
    int search(int num, int start, int end, vector<int>& nums){
        int index=-1;
        for(int i=start;i<=end;i++)
            if(nums[i]==num) index=i;
        return index;
    }
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> V(2,-1);
        for(int i=0;i<size(nums);i++){
            int tmp=search(target-nums[i],i+1,size(nums)-1,nums);
            if(tmp!=-1) {V[0]=i; V[1]=tmp;}
            else continue;
        }
        return V;
    }
};
