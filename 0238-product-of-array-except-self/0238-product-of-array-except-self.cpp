class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        int prefix = 1;
        int value = 1;

        // Step 1: Compute prefix product for each element
        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        // Step 2: Compute suffix product and multiply
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= value;
            value *= nums[i];
        }

        return ans;
    }
};
