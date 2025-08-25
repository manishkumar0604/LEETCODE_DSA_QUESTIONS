class Solution {
public:
    bool isBalanced(string num) {
        int odd = 0;
        int even = 0;
        
        for (int i = 0; i < num.size(); i++) {
            int digit = num[i] - '0';  // convert char → int digit
            
            if (i % 2 == 0) {
                even += digit;
            } else {
                odd += digit;
            }
        }
        
        return even == odd; // directly return condition
    }
};
