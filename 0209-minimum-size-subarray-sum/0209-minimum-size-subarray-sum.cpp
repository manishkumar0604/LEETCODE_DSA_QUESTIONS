class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;   
        int prefix = 0;       
        int count = 0;        

        for (int i = 0; i < n; i++) {
            prefix += nums[i];  
            // while window sum >= target, try to shrink it
            while (prefix >= target) {
                mini = min(mini, i-count+1);  
                prefix -= nums[count];            
                count++;                          
            }
        }
        // if no valid subarray found, return 0
        return (mini == INT_MAX) ? 0 : mini;
    }
};
