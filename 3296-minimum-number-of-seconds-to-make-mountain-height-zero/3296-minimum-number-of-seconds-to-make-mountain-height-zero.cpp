class Solution {
public:
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        
        long long l = 1, r = 1e18;
        long long ans = r;

        while(l <= r)
        {
            long long mid = l + (r - l) / 2;
            long long total = 0;

            for(int t : workerTimes)
            {
                long long low = 0, high = mountainHeight;

                while(low <= high)
                {
                    long long k = (low + high) / 2;
                    long long time = (long long)t * k * (k + 1) / 2;

                    if(time <= mid)
                        low = k + 1;
                    else
                        high = k - 1;
                }

                total += high;
                if(total >= mountainHeight) break;
            }

            if(total >= mountainHeight)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        return ans;
    }
};