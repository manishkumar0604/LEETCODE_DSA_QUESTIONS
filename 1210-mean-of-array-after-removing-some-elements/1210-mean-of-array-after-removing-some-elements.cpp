class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int remove = n * 0.05;  // 5% elements to remove from each end

        double sum = 0;
        for (int i = remove; i < n - remove; i++) {
            sum += arr[i];
        }

        int count = n - 2 * remove;
        return sum / count;
    }
};
