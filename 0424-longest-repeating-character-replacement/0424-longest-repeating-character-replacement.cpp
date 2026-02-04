class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, maxfreq=0, maxlen=0;
        vector<int> hash(26, 0);
        
        for(int r=0; r<s.size(); r++)
        {
            hash[s[r] - 'A']++;
            maxfreq=max(maxfreq, hash[s[r] - 'A']);
            // If more than k replacements needed, shrink window
            while ((r - l + 1) - maxfreq > k) {
                hash[s[l] - 'A']--;
                l++;
            }
            maxlen = max(maxlen, r - l + 1);
        }
        return maxlen;
    }
};
