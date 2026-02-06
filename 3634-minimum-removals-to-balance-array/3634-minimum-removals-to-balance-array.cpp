class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0;
        int maxLen=0;
        for(int i=0;i<n;i++) {
            // Shrink window if condition breaks
            while((long long)nums[i] > (long long)nums[l] * k) {
                l++;
            }
             // Update maximum balanced subarray length
            maxLen=max(maxLen,i-l+1);
        }
        // Minimum removals = total - largest valid group
        return n - maxLen;
    }
};
