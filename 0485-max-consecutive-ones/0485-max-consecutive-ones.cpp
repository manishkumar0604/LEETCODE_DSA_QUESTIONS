class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int count =0;
         int maxlen=0;
        for(int i=0;i<nums.size();i++)
        {
           
            if(nums[i]==1) count++ ;
            else count=0;
            maxlen=max(maxlen,count);

        }
        return maxlen;
        
    }
};