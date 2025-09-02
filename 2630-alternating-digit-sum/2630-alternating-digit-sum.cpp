class Solution {
public:
    int alternateDigitSum(int m) {
        string s = to_string(m);
        int sum = 0;
        for(int i = 0; i<s.size(); i++){
            if(i%2 == 0) sum = sum + (s[i] - '0');
            else sum = sum - (s[i] -'0');
        }
        return sum;
    }
};