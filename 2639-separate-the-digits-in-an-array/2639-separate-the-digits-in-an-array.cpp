class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n =nums.size();

        for (int i=0;i<n;i++) {
            vector<int>temp;  
            while (nums[i]>0) {
                int digit =nums[i]%10;
                temp.push_back(digit);
                nums[i]/=10;
            }
            // reverse digits to correct order before adding to ans
            for (int j=temp.size()-1;j>=0; j--) {
                ans.push_back(temp[j]);
            }
        }
        return ans;
    }
};
