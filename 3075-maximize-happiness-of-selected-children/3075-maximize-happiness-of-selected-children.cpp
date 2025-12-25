class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        sort(happiness.rbegin(), happiness.rend());
        long long total=0;
        
        // Step 2: Pick top k children
        for (int i=0;i<k;i++)
        {
            // Effective happiness after reduction
            int effective=max(happiness[i] - i, 0);
            total += effective;
        }
        
        return total;
    }
};