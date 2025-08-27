class Solution {
public:
        // this function claculate reverse for each number in array.
        int reverse(int n){
            int rev=0;
            while(n!=0){
                int digit=n%10;
                rev=digit+rev*10;
                n=n/10;
            }
            return rev;
        }
    int countDistinctIntegers(vector<int>& nums) {
        int n =nums.size();
        // this loop used to push_back all the reverse number in array.
        for(int i=0;i<n;i++){
            nums.push_back(reverse(nums[i]));
        }
        //here we create an unordered_set because it not contain duplicate elment
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        return set.size();  //return the size of array after eleminating all duplicate elemnt.
        
    }
};