class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second==2) ans.emplace_back(it.first);
        }
        return ans;
        
    }
};