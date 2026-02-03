
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, -1);
        int l=0, r=0, maxlen=0;
        int n=s.size();

        while(r<n)
        {
            // If character seen before AND inside current window
            if(hash[s[r]] != -1 && hash[s[r]] >= l)
            {
                l = hash[s[r]] + 1;
            }

            hash[s[r]] = r;               // update last seen index
            maxlen=max(maxlen, r-l+1);
            r++;
        }
        return maxlen;
    }
};
