class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i:nums)   // using map this will count the value of occurence
        count[i]++;
        for(int i:nums)     
        {
            if(count[i]==1)  //check single occurence number
            return i;       //return this index;
        }
        return -1;
    }
};