class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";  

        unsigned int n = num;  // handle negative numbers by treating as unsigned
        string hexChars = "0123456789abcdef";
        string ans = "";

        while (n > 0) {
            ans = hexChars[n % 16] + ans;
            n /= 16;
        }

        return ans;
    }
};
