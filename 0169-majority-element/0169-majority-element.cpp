class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // here sorting take O(nlogn) timecomplexity
        int n = nums.size();
        return nums[n / 2];   // The middle element is always the majority
    }
};
