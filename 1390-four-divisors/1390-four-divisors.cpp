class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int n : nums) {
            int sum=0, cnt=0;
            for(int i=1;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    cnt++;
                    sum+=i;
                    if(i!=n/i)
                    {
                        cnt++;
                        sum+=(n/i);
                    }
                }
                if(cnt>4) break;  // no need to continue
            }
            if(cnt==4) ans+=sum;
        }
        return ans;
    }
};
