class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> year(2051, 0);

        for (auto &l : logs) {
            year[l[0]]++;
            year[l[1]]--;
        }

        int maxPop = 0, curr = 0, ans = 0;

        for (int i = 1950; i <= 2050; i++) {
            curr += year[i];
            if (curr > maxPop) {
                maxPop = curr;
                ans = i;
            }
        }
        return ans;
    }
};
