class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int j=-1;   //prev contain 1's position.
        int n=nums.size();
        for (int i=0;i<n;i++) {
            if (nums[i] == 1) {
                if (j!=-1&& i-j-1<k)
                    return false;
                j=i;
            }
        }
        return true;
    }
};
