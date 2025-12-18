class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> res,cur,next;
        for (int x : arr) {
            next={x};
            for (int v : cur) next.insert(v | x);
            cur=next;
            res.insert(cur.begin(), cur.end());
        }
        return res.size();
    }
};
