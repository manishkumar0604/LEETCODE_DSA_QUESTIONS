class Solution {
public:
    vector<vector<int>> res;
    void dfs(vector<int>& candidates, vector<int>& path, int idx, int target) {
        if (target == 0) return res.push_back(path);
        for (int i = idx, n = candidates.size(); i < n; ++i) {
            int num = candidates[i];
            if (num > target) break;
            path.push_back(num);
            dfs(candidates, path, i, target - num);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> path;
        dfs(candidates, path, 0, target);
        return res;
    }
};