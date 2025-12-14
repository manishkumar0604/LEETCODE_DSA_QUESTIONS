class Solution {
public:
    vector<string> res;
    string mp[10] = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(int idx, string &digits, string curr) {
        // base case
        if (idx == digits.size()) {
            res.push_back(curr);
            return;
        }

        string letters = mp[digits[idx] - '0'];
        for (char ch : letters) {
            solve(idx + 1, digits, curr + ch); // recursion
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return res;
        solve(0, digits, "");
        return res;
    }
};
