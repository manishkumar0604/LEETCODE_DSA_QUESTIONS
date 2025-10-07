class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int it:nums)
        {
            ans.emplace_back(abs(it*it));
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};