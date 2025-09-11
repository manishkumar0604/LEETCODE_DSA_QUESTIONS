class Solution {
 public:
  bool isIsomorphic(string s, string t) {
    vector<int> charToIndex_s(128);
    vector<int> charToIndex_t(128);

    for (int i = 0; i < s.length(); ++i) {
      if (charToIndex_s[s[i]] != charToIndex_t[t[i]])  //If the last recorded index of s[i] is different from the last recorded     index of t[i], then the mapping is inconsistent → return false
        return false;

      charToIndex_s[s[i]] = i + 1;
      charToIndex_t[t[i]] = i + 1;
    }
    return true;
  }
};