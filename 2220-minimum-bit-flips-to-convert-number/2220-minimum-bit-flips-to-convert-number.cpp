class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=start^goal;  // 10^7=13(no of set bits is 3 . and 3 is the answer)
        int count=0;
        for(int i=0;i<32;i++)
        {
            if(ans & (1<<i)) count++;   // check if ith bit is set or not
        }
        return count;  // return no. of set bits
    }
};