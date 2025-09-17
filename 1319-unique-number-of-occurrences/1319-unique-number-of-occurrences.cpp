class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int num : arr) {
            mp[num]++;
        }

        unordered_set<int> seenFreq;
        for (auto& p : mp) {
            if (seenFreq.count(p.second)) {
                return false;  // duplicate frequency found
            }
            seenFreq.insert(p.second);
        }
        return true;  // all frequencies are unique
    }
};