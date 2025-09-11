class Solution {
public:
    string frequencySort(string s) {
        // Count frequency of each character
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        // Store pairs (char, frequency) in a vector
        vector<pair<char, int>> freqVec(freq.begin(), freq.end());

        // Sort by frequency in descending order
        sort(freqVec.begin(), freqVec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Build the result string
        string ans;
        for (auto &p : freqVec) {
            ans.append(p.second, p.first);  // repeat char p.second times
        }

        return ans;
    }
};
