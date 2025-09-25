class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        stack<int> st;
        int third = INT_MIN;  // This will represent nums[k] (the '2' in the 132 pattern)

        // Traverse from right to left
        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] < third) {
                return true; // Found nums[i] < nums[k] < nums[j]
            }
            while (!st.empty() && nums[i] > st.top()) {
                third = st.top(); // nums[k] candidate
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};
