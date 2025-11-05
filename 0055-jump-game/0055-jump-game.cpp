class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxi=0; 
        
        for (int i=0;i<n;i++) {
            if(i>maxi)  // if we reach a point we can't get to
                return false;
            
            int range=nums[i];
            maxi=max(maxi, i+range); // update farthest reachable
            
            if (maxi>=n-1) // if we can reach or go beyond last index
                return true;
        }
        
        return true;
    }
};
