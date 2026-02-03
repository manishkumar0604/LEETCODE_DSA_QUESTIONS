class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        //increasing 
        while(i+1<n && nums[i]<nums[i+1]) i++;
        if(i==0 ||i==n-1) return false; //if number not incresing or only increasing and reach last index of an array.

        //decreasing 
        while(i+1<n && nums[i]>nums[i+1]) i++;
        if(i==n-1) return false; //check if i reach last index of the array. 

        //incresing 
        while(i+1<n && nums[i]<nums[i+1]) i++;
        return i==n-1;  // i reach last index then return true
    }
};