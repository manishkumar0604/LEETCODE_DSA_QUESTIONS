class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int ans = INT_MAX;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If subarray is already sorted
            if (nums[low] <= nums[high]) {
                ans = min(ans, nums[low]);   // take minimum of ans and low of nums.
                break;
            }

            // Left half is sorted
            if (nums[low] <= nums[mid]) {
                ans = min(ans, nums[low]);   // take minimum of ans and nums[low] ans after delete or ignore the sorted part
                low = mid + 1;
            }
            // Right half is sorted
            else {
                ans = min(ans, nums[mid]);  // same as here take minimum of ans and nums[mid] after delete or ignore the sorted part. 
                high = mid - 1;
            }
        }
        return ans;   // return ans beacuse it store minimum element 
    }
};
