class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> allocation(n,1);
        int sum = 0;

        for(int i=1;i<n;i++)
        {
            if(ratings[i] > ratings[i-1])
                allocation[i] = allocation[i-1] + 1;
        }

        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i] > ratings[i+1] && allocation[i] <= allocation[i+1])
                allocation[i] = allocation[i+1] + 1;
        }

        for(int i=0;i<n;i++)
        {
            sum += allocation[i];
        }

        return sum;
    }
};