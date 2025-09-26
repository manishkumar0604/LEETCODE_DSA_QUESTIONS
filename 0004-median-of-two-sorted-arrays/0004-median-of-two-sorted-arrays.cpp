class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        for(int i=0;i<nums1.size();i++)
        {
            merged.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            merged.push_back(nums2[i]);
        }
        sort(merged.begin(), merged.end());

        int total = merged.size();

        if (total % 2 == 1) {
            return static_cast<double>(merged[total / 2]);
        }
         else {
            // If the total number of elements is even, calculate the average of the two middle elements as the median.
            int middle1 = merged[total / 2 - 1];
            int middle2 = merged[total / 2];
            return (static_cast<double>(middle1) + static_cast<double>(middle2)) / 2.0;
        }
    
        
    }
};