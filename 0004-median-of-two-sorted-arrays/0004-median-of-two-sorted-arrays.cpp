class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        // merge both arrays
        ans.insert(ans.end(), nums1.begin(), nums1.end());
        ans.insert(ans.end(), nums2.begin(), nums2.end());

        // sort combined array
        sort(ans.begin(), ans.end());

        int s = ans.size();
        if (s == 0) return 0.0;

        int mid = s / 2;
        if (s % 2 == 1)
            return static_cast<double>(ans[mid]);
        else
            return (ans[mid - 1] + ans[mid]) / 2.0;
    }
};