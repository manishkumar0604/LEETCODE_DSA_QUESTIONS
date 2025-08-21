class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() > 0 && s.find(part) < s.length())  /*we run loop until the length of s is greter than 0 and we are also*/
        // we will also check part is less than the length of string
        {
            s.erase(s.find(part) , part.length());  // s.find(part) gives starting index and part.length() gives size of erase index of letters
        }   
        return s;
    }
};