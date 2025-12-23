class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long mini=*min_element(nums.begin(),nums.end());
        long long moves=0;
        for(int x : nums)
        {
            moves+=(x-mini);
        }

        return moves;
    }
};