class Solution {
public:
    string longestPalindrome(string s) 
    {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            int low=i;
            int high=i;

            while(low>=0 && high<s.size() && s[low]==s[high])
            {
                if(high-low+1 > ans.size())
                    ans=s.substr(low,high-low+1);
                low--;high++;
            }

            low=i-1;
            high=i;

            while(low>=0 && high<s.size() && s[low]==s[high])
            {
                if(high-low+1 >ans.size()) ans=s.substr(low,high-low+1);
                low--; high++;
            }
        }   
        return ans;
    }
};