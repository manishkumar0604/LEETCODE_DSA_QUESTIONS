class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i:nums)
        count[i]++;
        for(int i:nums)
        {
            if(count[i]==1)
            return i;
        }
        return -1;
    }
};