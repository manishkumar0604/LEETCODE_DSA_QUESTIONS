class Solution {
public:
    //remove duplicates element in sorted array to compare next element in array.
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]!=nums[i])
            {
                nums[i+1]=nums[j];
                i++;
            }
        }
        return (i+1);
    }
};
