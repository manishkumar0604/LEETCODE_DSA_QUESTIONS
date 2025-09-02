class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0,minPrice=prices[0];
        for(auto price : prices)
        {
            minPrice=min(price,minPrice);
            maxprofit=max(maxprofit,price-minPrice);
        }
        return maxprofit;

    }
};