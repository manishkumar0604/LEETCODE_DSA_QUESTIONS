class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0) return 1;

        string s="";
        int temp = n;

        while(temp > 0)
        {
            int digit = temp % 2;
            temp /= 2;
            s += (digit + '0');
        }

        reverse(s.begin(), s.end());

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0') s[i] = '1';
            else s[i] = '0';
        }

        int ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            ans = ans * 2 + (s[i] - '0');
        }

        return ans;
    }
};