class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for (char c : s) ans ^= c;  //store all element in ans string ;
        for (char c : t) ans ^= c;  //if same elemnt found in t then operate xor operator.
        return ans;
    }
};
