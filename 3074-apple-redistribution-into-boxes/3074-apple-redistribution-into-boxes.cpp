class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n=apple.size();
        int m=capacity.size();
        int totalapple=0;
        for(int i=0;i<n;i++)    //calculate total apples.
        {
            totalapple+=apple[i];
        }

        int reqbox=0;
        int sum=0;
        sort(capacity.begin(),capacity.end(),greater<int>());  //reverse sort
        for(int i=0;i<m;i++)     // find capacity sum 
        {
            sum+=capacity[i];
            reqbox++;
            if(sum>=totalapple)
                return reqbox;
        }
        return -1;
    }
};