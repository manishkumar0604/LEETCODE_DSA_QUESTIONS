class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) mp[nums[i]]++;
        while(k>0)
        {
            int maxi=INT_MIN;
            int maxiIndex;
            for(auto it:mp)
            {
               if(it.second>maxi)
                {
                maxi=it.second;
                maxiIndex=it.first;
                } 
            }
            ans.emplace_back(maxiIndex);
            mp.erase(maxiIndex);
            k--;
        }
        return ans;
        
        
    }
};