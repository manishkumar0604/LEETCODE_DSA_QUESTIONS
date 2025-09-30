class Solution {
public:
    int numberOfChild(int n, int k) {
        int pos = 0, dir = 1; // start at 0, moving right
        for (int i = 0; i < k; i++) {
            pos += dir;
            if (pos == 0) dir = 1;       // bounce right
            if (pos == n - 1) dir = -1;  // bounce left
        }
        return pos;
    }
};
