class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> ans(10, 0);

        while (n > 0) {
            int digit = n % 10;   //it gives last digit
            ans[digit]++;         //count occurence of character
            n /= 10;              //remove last digit
        }

        int min = INT_MAX;
        int freq = -1;

        for (int i = 0; i < 10; i++) {
            if (ans[i] > 0 && ans[i] < min) {
                min = ans[i];
                freq = i;
            }
        }

        return freq;  // returns the least frequent digit
    }
};
