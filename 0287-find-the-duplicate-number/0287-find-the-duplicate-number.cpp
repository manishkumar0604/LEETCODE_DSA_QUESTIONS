class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
       vector<int> map(n, 0);

       for(int i=0; i<n ; i++)
       {    
            if(map[nums[i]]>=1)
                 return nums[i];
            map[nums[i]]+=1;
       }
       return 0;
    }
};