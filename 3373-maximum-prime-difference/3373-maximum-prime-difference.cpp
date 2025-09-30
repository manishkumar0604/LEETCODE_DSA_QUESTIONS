#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n){
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; 1LL * i * i <= n; i += 2){
            if (n % i == 0) return false;
        }
        return true;
    }

    int maximumPrimeDifference(vector<int>& nums) {
        int prime_size = 0;
        int min = INT_MAX;
        int max = INT_MIN;

        for (int i = 0; i < (int)nums.size(); ++i){
            if (isPrime(nums[i])){
                ++prime_size;
                if (i < min) min = i;
                if (i > max) max = i;
            }
        }

        if (prime_size == 0) return 0;
        return max - min;
    }
};