class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = numBottles;  // drink all initial bottles
        int empty = numBottles;

        while (empty >= numExchange) {
            int newBottles = empty / numExchange;  // exchange
            sum += newBottles;                     // drink them
            empty = empty % numExchange + newBottles; // remaining empty bottles
        }
        return sum;
    }
};
