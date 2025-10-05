class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos = haystack.find(needle);  //find the first occurence in a string or starting index.
        if (pos != string::npos) {      //string::npos means the substring was not found, so return -1 
                                        //as specified by the problem.
            return pos;
        } else {
            return -1;
        }
    }
};
