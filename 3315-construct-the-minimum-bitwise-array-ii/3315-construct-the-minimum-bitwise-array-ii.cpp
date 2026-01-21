class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int N=nums.size();
        vector<int>ans(N,-1);
        for(int i=0; i<N; i++){
            if(nums[i]%2==0) continue;
            int n=nums[i], j=-1;
            while(n&1) j++, n>>=1;
            ans[i]=nums[i]^(1<<j);
        }
        return ans;
    }
};