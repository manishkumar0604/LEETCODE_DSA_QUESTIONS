class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxlen = 0;
        int n = nums.size();
        vector<int> ans(101, 0);

        for (int i = 0; i < n; i++) {
            ans[nums[i]]++;
        }
        for (int i = 0; i < 101; i++) {
            maxlen = max(maxlen, ans[i]);
        }
        int total = 0;  
        for (int i = 0; i < 101; i++) {
            if (maxlen == ans[i]) {
                total += ans[i];  
            }
        }

        return total;
    }
};
