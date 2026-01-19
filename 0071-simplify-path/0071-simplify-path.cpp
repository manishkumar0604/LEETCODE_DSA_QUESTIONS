class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        string cur = "";

        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {
                if (cur == "..") {
                    if (!v.empty()) v.pop_back();
                } 
                else if (cur != "" && cur != ".") {
                    v.push_back(cur);
                }
                cur = "";
            } else {
                cur += path[i];
            }
        }

        string ans = "/";
        for (int i = 0; i < v.size(); i++) {
            ans += v[i];
            if (i < v.size() - 1) ans += "/";
        }
        return ans;
    }
};