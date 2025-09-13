class Solution {
public:
    bool isHappy(int n) {
        while (n > 9) {
            int sum = 0;
            while (n) {
                int d = n % 10;
                sum += d * d;
                n /= 10;
            }
            n = sum;
        }
        return n == 1 || n == 7;
    }
};
