class Solution {
public:
    bool hasAlternatingBits(int n) {
        string res="";
        while(n>0) //convert into binary
        {
            int digit=n%2;
            n/=2;
            res+=digit;
        }
        for(int i=0;i<res.size()-1;i++)  //checking alternet bits
        {
            if(res[i]==res[i+1]) return false;
        }
        return true;
    }
};