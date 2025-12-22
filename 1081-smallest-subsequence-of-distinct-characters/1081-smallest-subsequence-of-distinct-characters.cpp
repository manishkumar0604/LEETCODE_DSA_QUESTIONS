class Solution {
public:
    string smallestSubsequence(string s) {
         vector<int> freq(26,0);
        vector<bool> used(26,false);
        stack<char> st;

        // Count frequency of each character
        for(char c : s) freq[c - 'a']++;

        for(char c : s) {
            freq[c-'a']--;

            // If already used, skip
            if(used[c - 'a']) continue;

            // Maintain lexicographical order
            while(!st.empty() && st.top() > c && freq[st.top() - 'a'] > 0) {
                used[st.top() - 'a']=false;
                st.pop();
            }

            st.push(c);
            used[c - 'a']=true;
        }

        // Build result
        string ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};