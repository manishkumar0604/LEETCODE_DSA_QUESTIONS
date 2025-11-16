class Solution {
public:
    int numSub(string s) {
        const long long MOD=1e9 + 7;
        long long total=0;
        long long count=0;  

        for (char c : s) {
            if(c=='1') {
                count++;       
                total=(total + count)%MOD;
            } 
            else 
                count=0;   
        }

        return total;
    }
};
