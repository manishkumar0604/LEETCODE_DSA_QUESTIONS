class Solution {
public:
    long long minimumSteps(string s) {
        long long ones = 0;   // number of '1's seen so far
        long long steps = 0;  // total swaps

        for (char c : s) {
            if (c == '1') {
                ones++;  // count how many black balls we've seen
            } else { // c == '0'
                steps += ones;  // each '0' must pass all previous '1's
            }
        }
        return steps;
    }
};
