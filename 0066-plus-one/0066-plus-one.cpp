class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        digits[n]++;
        for(int i = n; i>0; i--){
            if(digits[i]==10){
                digits[i] = 0;
                digits[i-1]++;
            }
            else break;
        }
        if(digits[0]==10){
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
        
    }
};