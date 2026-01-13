class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int n = nums2.size();
        int m = nums1.size();
        vector<int> res(m);
        vector<int> nge(n, -1); // next greater for each index in nums2

        // build next greater for nums2 using indices in the stack
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && nums2[st.top()] < nums2[i]) {
                nge[st.top()] = nums2[i];
                st.pop();
            }
            st.push(i);
        }

        // answer for nums1 by finding index in nums2 (linear scan)
        for (int i = 0; i < m; ++i) {
            int val = nums1[i];
            int ans = -1;
            for (int j = 0; j < n; ++j) {
                if (nums2[j] == val) {
                    ans = nge[j];
                    break;
                }
            }
            res[i] = ans;
        }

        return res;
    }
};