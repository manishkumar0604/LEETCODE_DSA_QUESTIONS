class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> freq(3, 0);
        int res = 0;
        int n=s.size();
        int l= 0;
        for(int r=0;r<n;r++)
        {
            freq[s[r] - 'a']++;
            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
                res += (n-r);
                freq[s[l] - 'a']--;
                l++;
            }
        }
        return res;
    }
};