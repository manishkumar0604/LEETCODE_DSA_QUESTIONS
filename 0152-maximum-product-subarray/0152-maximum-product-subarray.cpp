class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int prefix=1;
        int suffix=1;
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(prefix==0) prefix=1;  //if any case prefix will be zero.
            if(suffix==0) suffix=1;    //if any case suffix will be zero.
            prefix*=nums[i];         //prefix multiple from starting.
            suffix*=nums[n-1-i];    //suffix multiply from ending.
            maxi=max(maxi,max(prefix,suffix));   //find maximum product of prefix or suffix.
        }
        return maxi;
    }
};