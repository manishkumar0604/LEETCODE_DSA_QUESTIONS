class Solution {
public:
   bool isPrime(int n){
        if (n <= 1) return false; // numbers <= 1 are not prime
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; i * 1LL * i <= n; i += 2){
            if (n % i == 0){ // divisible = not prime
                return false;
            }
        }
        return true; // no divisor = prime
    }

    int maximumPrimeDifference(vector<int>& nums) {
        vector<int> prime;
        for (int i = 0; i < nums.size(); i++){
            if (isPrime(nums[i])){
                prime.push_back(i);
            }
        }

        int prime_size = prime.size();
        if(prime_size == 0) return 0;
        int min = *min_element(prime.begin(),prime.end());
        int max = *max_element(prime.begin(),prime.end());
        return max-min;
    }
};