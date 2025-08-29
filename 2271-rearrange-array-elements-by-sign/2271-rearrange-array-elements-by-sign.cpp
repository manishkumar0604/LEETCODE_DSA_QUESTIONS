class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);   //create new vector
        int posIndex=0,negIndex=1;  
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)   //for negative integer.
            {
                ans[negIndex]=nums[i];
                negIndex+=2;
            }
            else            //for positive integer.
            {
                ans[posIndex]=nums[i];
                posIndex+=2;
            }
        }
        return ans;
    }
};