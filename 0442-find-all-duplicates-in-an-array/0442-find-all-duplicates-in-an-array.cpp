class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for(auto& p : mp) {
            if(p.second > 1) {
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};
