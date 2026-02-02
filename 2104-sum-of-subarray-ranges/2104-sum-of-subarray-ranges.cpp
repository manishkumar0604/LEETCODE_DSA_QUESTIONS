class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int longest=nums[i];
            int smallest=nums[i];
            for(int j=i+1;j<n;j++)
            {
                longest=max(longest,nums[j]);
                smallest=min(smallest,nums[j]);
                sum+=(longest-smallest);
            }
        }
        return sum;
    }
};