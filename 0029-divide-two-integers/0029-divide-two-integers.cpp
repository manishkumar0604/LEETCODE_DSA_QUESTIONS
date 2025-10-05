class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) 
            return INT_MAX;
        if (dividend == INT_MIN && divisor == 1) 
            return INT_MIN;
        
        double ans = floor(dividend / divisor);
        return ans;
    }
};