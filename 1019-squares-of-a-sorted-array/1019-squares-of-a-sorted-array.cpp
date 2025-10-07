class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int it:nums)
        {
            ans.emplace_back(it*it);
        }
        int n=ans.size()-1;
        sort(ans.begin(),ans.end());
        return ans;

    }
};