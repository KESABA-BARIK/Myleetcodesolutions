class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        sort(candies.begin(), candies.end());
        long long l = 1, r = *max_element(candies.begin(), candies.end());
        int ans = 0;
        while (l <= r) {
            long long m = l + (r - l) / 2;
            long long count = 0;
            for (int candy : candies) {
                count += candy / m;
            }
            if (count >= k) {
                ans = m;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return ans;
    }
};
