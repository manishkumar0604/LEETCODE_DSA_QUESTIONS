class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> result(2, -1); //if target not in the nums then return -1,-1.
        if(nums.empty())
        {
            return result;
        }

        //find leftmost index
        int low=0,high=nums.size()-1;
        int first=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                first=mid;    //it first index intialize with mid if equal to the target.
                high=mid-1;   //check previous elemnt are equal to target . if statement run until find leftmost index.
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }

        //find lastmost index
        low=0,high=nums.size()-1;
        int last=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                last=mid;    //it last index intialize with mid if equal to the target.
                low=mid+1;   // and check next elemnt are equal to target . if statement run until find rightmost index.
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return {first,last};   // return first and last most index .
        
    }
    
};