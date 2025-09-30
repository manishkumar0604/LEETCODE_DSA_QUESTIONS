class Solution {
public:
    int sumBase(int n, int k) {
        int number=0;
        while(n>0) {
            number=number+n%k;
            n/=k;
        }
        return number;
    }
};