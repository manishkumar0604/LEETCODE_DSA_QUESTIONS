class Solution {
public:
    int findLucky(vector<int>& arr) {
    unordered_map<int ,int > mp;
    int n=arr.size();
    for(int i=0;i<n;i++ )
    {
        mp[arr[i]]++;
    }
    int ans=-1;
    for(auto it:mp)
    {
        if(it.first==it.second) ans=max(it.first,ans);
    }
    return ans;
    
        
    }
};