class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        if(k<0) return 0;  //base case
        int l=0,cnt=0,oddCount = 0;
        for(int r=0;r< nums.size();r++)
        {
            oddCount +=nums[r] % 2;  // add if current is odd

            while(oddCount > k)  // shrink window
            {       
                oddCount -= nums[l] % 2;
                l++;
            }

            cnt +=(r-l+1);  // all valid subarrays ending at right
        }

        return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
