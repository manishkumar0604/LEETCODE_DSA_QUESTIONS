class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp(3, 0);

        for (int x : nums) {
            vector<int> cur(dp);  // copy current state
            for (int r = 0; r < 3; r++) {
                int newSum = dp[r] + x;
                int newR = newSum % 3;
                cur[newR] = max(cur[newR], newSum);
            }
            dp = cur;
        }

        return dp[0];
    }
};
