class Solution {
public:
    int mySqrt(int x) {
        long long int low=1,high=x;
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid>x)
                high=mid-1;
            else 
                low=mid+1;
        }
        return high;
        
    }
};