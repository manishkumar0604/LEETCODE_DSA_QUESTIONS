class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(auto &row : grid) {
            int l = 0, r = row.size()-1;
            while(l <= r) {
                int mid = (l+r)/2;
                if(row[mid] < 0) r = mid - 1;     
                else l = mid + 1; 
            }
            count += row.size() - l;             
        }
        return count;
    }
};