class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        //find more than one time occurence element in nums.
        for(auto it:freq)
        {
            if(it.second>1) return it.first;
        }
        return -1;
    }
};