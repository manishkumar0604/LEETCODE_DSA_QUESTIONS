class Solution {
public:
    void backtrack(vector<string>& ans, string current, int open, int close, int n) {
        // If the current string is complete
        if (current.size() == 2 * n) {
            ans.push_back(current);
            return;
        }

        // If we can still add an open parenthesis
        if (open < n)
            backtrack(ans, current + '(', open + 1, close, n);

        // If we can add a closing parenthesis
        if (close < open)
            backtrack(ans, current + ')', open, close + 1, n);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(ans, "", 0, 0, n);
        return ans;
    }
};
