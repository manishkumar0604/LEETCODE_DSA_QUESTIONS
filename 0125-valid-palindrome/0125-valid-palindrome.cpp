class Solution {
public:
    bool isAlphaNum(char ch)   // check alpha numeric or not
    {
        if((ch>='0' && ch<='9') || (tolower(ch) >='a' && tolower(ch) <= 'z'))
        {
            return true;
        }
        return false;

    
    }
    bool isPalindrome(string s) {

        int st=0;
        int end=s.length()-1;
        while(st < end)
        {
           if (!isAlphaNum(s[st])){   // if start is not  alpha numeric then st++ and continue  
            st++; continue;
           }
           if(!isAlphaNum(s[end])){   // if end is not  alpha numeric then end-- and continue
            end--; continue;
           }
           if(tolower(s[st]) != tolower(s[end])){  //other wise convert st and end to lower and check either both are equal or not 
            return false;                           //if equal then st++ and end-- other wise return false 
           }

           st++; end--;
        }

        return true;
    }
};