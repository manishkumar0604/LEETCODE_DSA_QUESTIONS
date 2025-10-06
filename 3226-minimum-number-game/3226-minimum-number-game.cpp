class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        sort(nums.begin(), nums.end()); 
        int n = nums.size();
        vector<int> arr; 

        int alice, bob;
        for (int i = 0; i < n; i += 2) {
            alice = nums[i];
            bob = nums[i + 1];
            arr.emplace_back(bob);   // Bob picked second-smallest
            arr.emplace_back(alice); // Alice picked smallest
        }

        return arr;
    }
};
