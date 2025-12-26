class Solution {
public:
    int bestClosingTime(string customers) {
        int penalty=0;
        for(char c : customers)
            if(c=='Y') penalty++;

        int minPenalty=penalty;
        int ans=0;
        for(int i=0;i<customers.size();i++) {
            if(customers[i]=='Y') penalty--; // good -> reduce penalty
            else penalty++;                    // bad -> increase penalty

        if(penalty < minPenalty)
        {
            minPenalty=penalty;
            ans=i+1;
        }
        }
        return ans;
    }
};