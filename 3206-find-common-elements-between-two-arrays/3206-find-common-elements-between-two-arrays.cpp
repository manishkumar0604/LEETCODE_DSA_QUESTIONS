class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int ans1=0,ans2=0,n1=nums1.size(),n2=nums2.size();
        vector<int>freq1(101,0),freq2(101,0);
        for (int i:nums1) {  //count frequency of nums1.
            freq1[i]++;
        }
        for (int i:nums2) {  //count frequency of nums2.
            freq2[i]++;
        }
        for (int i:nums2) {  //find if freq1 exist in nums2 if exist the add in ans1.
            if (freq1[i]>0) ans1++;
        }
        for (int i:nums1) {   //find if freq2 exist in nums1 if exist the add in ans2.
            if (freq2[i]>0) ans2++;
        }
        return {ans2,ans1};
    }
};