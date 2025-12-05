class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(int x: nums) sum+=x;
        if (sum%2==1) return 0;
        // If total is even then all partitions are valid.
        return nums.size()-1;
    }
};
