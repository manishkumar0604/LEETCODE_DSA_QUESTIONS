class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int> count;
        for(int x:nums) count[x]++;
        
        int k=0;
        for(auto x:count)
        {
            for(int i=1;i<=x.second;i++)
            {
                nums[k]=x.first;
                k++;
            }
        }
        return nums;
    }
};