class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashMap;  // key value pair
        int ans = -1;
        for (auto x : nums) {      // map all key and vlaue pair in map
            hashMap[x] +=  1;
        }
        for (auto x : hashMap) {
            if (x.second == 1) {   // x.second check value 
                ans = x.first;     //x.first return key
            }
        }
        return ans;

    }
};