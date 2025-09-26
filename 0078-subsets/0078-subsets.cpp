class Solution {
public:
    int n;
    vector<vector<int>>ans;
    void solve(vector<int>&nums,vector<int>&temp,int i){
        if(i>=n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,temp,i+1);

        temp.pop_back();
        solve(nums,temp,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n=nums.size();
        vector<int>temp;
        solve(nums,temp,0);
        return ans;
    }
};