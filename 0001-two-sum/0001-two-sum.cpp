class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        for (int i = 0; i < nums.size(); i++) {    //brute force apporach.
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    return {i, j}; //return index.
                }
            }
        }
        // Return an empty vector if no solution is found
        return {};
  
  }
};
