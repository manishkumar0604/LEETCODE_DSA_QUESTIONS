class Solution {
public:
    int binaryGap(int n) {
        string res="";
        while(n>0)
        {
            int digit=n%2;
            res+=(digit+'0');   //store '0' or '1'
            n/=2;
        }
        // reverse(res.begin(), res.end());
        int l=-1;
        int r=0;
        int maxlen=0;
        for(int i=0;i<res.size();i++)
        {
            if(res[i]=='1')
            {
                if(l != -1) maxlen=max(maxlen,i-l); // distance
                l = i;
            }
        }
        return maxlen;
    }
};