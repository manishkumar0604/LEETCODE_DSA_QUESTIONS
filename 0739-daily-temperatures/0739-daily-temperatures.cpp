class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n,0);       
        stack<int> st;               
        for(int i=0; i < n; i++)
        {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevIndex = st.top();
                st.pop();
                ans[prevIndex] = i - prevIndex;  // Days waited
            }
            st.push(i);  // Push current index
        }

        return ans;
    }
};
