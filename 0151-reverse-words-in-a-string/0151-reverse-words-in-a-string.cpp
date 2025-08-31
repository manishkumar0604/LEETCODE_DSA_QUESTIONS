class Solution {
public:
    string reverseWords(string s) {
    int n=s.length();
    string ans="";      //create new string 
    reverse(s.begin(),s.end());

    for(int i=0;i<n;i++)   // loop for reverse the each word in word
    {
        string word="";
        while(i<n && s[i]!=' ')
        {
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0) ans+=" "+word;  // for zero length element 
    }
    return ans.substr(1);      
    }
};