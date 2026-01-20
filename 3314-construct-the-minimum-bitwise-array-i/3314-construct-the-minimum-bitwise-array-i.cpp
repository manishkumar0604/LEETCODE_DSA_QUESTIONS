class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            //ans[i] ka koi aisa value exist krna chahiye jo condition ko satisfy kre
            for(int j=1;j<=1000;j++)
            {
                if((j | j+1)==nums[i])
                {
                    ans[i]=j;
                    break;
                }
                else ans[i]=-1;
            }
        }
        return ans;
    }
};
