class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i=0,j=1;
        int n=nums.size();
        int maxi=-1;
        while(j<n)
        {
            if(nums[i]<nums[j])
            {
                maxi=max(maxi,nums[j]-nums[i]);
                j++;
            }
            else
            {
                i=j;
                j++;
            }
            
        }
        return maxi;
        
    }
};