class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0, r=0, maxlen=0;
        int n=fruits.size();
        unordered_map<int,int>mpp;

        while(r<n)
        {
            mpp[fruits[r]]++;
            // Shrink window if more than 2 fruit types
            if(mpp.size() > 2)
            {
                mpp[fruits[l]]--;
                if(mpp[fruits[l]] == 0) mpp.erase(fruits[l]);   // erase by KEY
                l++;
            }
            if(mpp.size()<=2) maxlen=max(maxlen,r-l+1);
            r++;
        }

        return maxlen;
    }
};
