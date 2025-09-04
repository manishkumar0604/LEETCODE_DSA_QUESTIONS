class Solution {
public:
    int findClosest(int x, int y, int z) {
        // Keep moving until one or both reach z
        while (true) {
            if (x == z && y == z) return 0; // both reached
            if (x == z) return 1;           // x reached first
            if (y == z) return 2;           // y reached first

            // Move x closer to z
            if (x < z) x++;
            else if (x > z) x--;

            // Move y closer to z
            if (y < z) y++;
            else if (y > z) y--;
        }
    }
};
