class Solution {
public:
    //two pointers .
    int lengthOfLongestSubstring(string s) {
        vector<bool> count(256,0);
        int first=0,second=0,maxlen=0;
        while(second<s.size())
        {
            //repeating letter
            while(count[s[second]])
            {
                count[s[first]]=0;
                first++;
            }
            count[s[second]]=1;
            maxlen=max(maxlen,second-first+1);
            second++;
        }
        return maxlen;
        
    }
};