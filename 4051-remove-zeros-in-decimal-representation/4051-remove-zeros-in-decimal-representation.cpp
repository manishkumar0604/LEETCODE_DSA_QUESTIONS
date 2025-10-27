class Solution {
public:
    long long removeZeros(long long n) {
        long long num=0,index=1;
        while(n>0) {
            if (n%10>0) {
                num=num+index*(n%10);
                index*=10;
            }
            n/=10;
        }
        return num;
    }
};