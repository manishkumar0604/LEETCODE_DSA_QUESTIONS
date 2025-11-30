class Solution {
public:
    int maxDistinct(string s) {
        string str=s;
        unordered_set<char> st;
        for(char c :str) {
            st.insert(c);
        }
        return st.size();
    }
};