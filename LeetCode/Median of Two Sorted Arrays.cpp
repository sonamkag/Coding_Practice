class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        if(m<n) return findMedianSortedArrays(nums2,nums1);
        int jmin=0,jmax=2*n;
        while(jmin<=jmax){
            int C2=jmin+(jmax-jmin)/2; //cut position in nums2 vector
            int C1=m+n-C2; //cut position in nums1 vector
            
            double L1=(C1==0)?INT_MIN:nums1[(C1-1)/2];
            double R1=(C1==2*m)?INT_MAX:nums1[C1/2];
            double L2=(C2==0)?INT_MIN:nums2[(C2-1)/2];
            double R2=(C2==2*n)?INT_MAX:nums2[C2/2];
            
            if (L1>R2) jmin=C2+1;
            else if (L2>R1) jmax=C2-1;
            else return (max(L1,L2)+min(R1,R2))/2;
        } 
        return 0;
    }
};
