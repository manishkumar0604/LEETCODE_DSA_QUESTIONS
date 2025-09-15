class Solution {
public:
    int helper(string &s, int i, long long num, int sign) {
        // stop if out of bounds or not a digit
        if (i >= s.size() || !isdigit(s[i])) 
            return (int)(sign * num);

        num = num * 10 + (s[i] - '0');

        // clamp for overflow
        long long limit = (sign == 1) ? INT_MAX : -(long long)INT_MIN;
        if (num > limit) 
            return (sign == 1) ? INT_MAX : INT_MIN;

        return helper(s, i + 1, num, sign);
    }

    int myAtoi(string s) {
        int i = 0, n = s.size();

        // 1. skip leading spaces
        while (i < n && s[i] == ' ') i++;

        // 2. handle sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // 3. start recursive digit processing
        return helper(s, i, 0, sign);
    }
};
