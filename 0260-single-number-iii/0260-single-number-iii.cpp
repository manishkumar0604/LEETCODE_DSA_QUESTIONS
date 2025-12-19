class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        long long Xor = 0;
        for(int i=0;i<n;i++)
        {
            Xor^=nums[i];
        }
        int rightmost=(Xor & (Xor-1)) ^ Xor;
        int xor1=0,xor2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] & rightmost){
                xor1^=nums[i];
            }
            else xor2^=nums[i];
        }
        if(xor1>xor2) return {xor2,xor1};
        return {xor1,xor2};
    }
};