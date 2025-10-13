class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        vector<int> prevFreq(26, 0);

        for (const string& word : words) {
            vector<int> currFreq(26, 0);
            for (char ch : word) {
                currFreq[ch - 'a']++;
            }

            if (currFreq != prevFreq) {
                result.emplace_back(word);
                prevFreq = move(currFreq); // Avoid copy
            }
        }

        return result;
    }
};