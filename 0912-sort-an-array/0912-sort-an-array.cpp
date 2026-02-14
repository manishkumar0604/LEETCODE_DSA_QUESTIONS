class Solution {
public:
    void merge(vector<int> & nums,int start,int mid,int end)
    {
        vector<int> temp(end-start+1);
        int left=start,right=mid+1,index=0;
        while(left<=mid && right<=end)
        {
            if(nums[left]<=nums[right])
            {
                temp[index]=nums[left];
                index++;left++;
            }
            else
            {
                temp[index]=nums[right];
                index++;right++;
            }
        }
        //if any element remaining in left array
        while(left<=mid)
        {
            temp[index]=nums[left];
            index++;left++;
        }
        //if any element remaining in right array
        while(right<=end)
        {
            temp[index]=nums[right];
            right++;index++;
        }

        //putting all element into original array.
        index=0;
        while(start<=end)
        {
            nums[start]=temp[index];
            index++; start++;
        }

    }
    void mergesort(vector<int>& nums,int start,int end)
    {
        if(start==end) return;
        int mid=start+(end-start)/2;
        mergesort(nums,start,mid);//left array
        mergesort(nums,mid+1,end);//right array
        merge(nums,start,mid,end);//merging
    }
    vector<int> sortArray(vector<int>& nums) {
       mergesort(nums,0,nums.size()-1);
       return nums;
    }
};