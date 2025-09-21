class Solution {
public:
    string convert(string s, int numRows) {
        std::string output = "";
        size_t start = 0, end = std::max(1, numRows * 2 - 2), segment = 0, n = s.size(), step = std::max(1, numRows * 2 - 2);
        while (start <= end) {
            int i = start;
            while (i < n) {
                output.push_back(s[i]);
                i += step;
                if (segment && step && i < n) output.push_back(s[i]);
                i += segment;
            }
            step -= 2;
            segment += 2;
            ++start;
            --end;
        }
        return output;
    }
};