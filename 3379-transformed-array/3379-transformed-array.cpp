class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++)
        {
            int newIndex=(i+nums[i]) % n;
            // handle negative modulo
            if(newIndex < 0) newIndex += n;
            ans[i]=nums[newIndex];
        }
        return ans;
    }
};
