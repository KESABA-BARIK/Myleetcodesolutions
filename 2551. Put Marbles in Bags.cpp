class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        
        int n = weights.size();
        if(n <= k)return 0;
        vector<int> pairs(n-1,0);
        for(int i=0; i<n-1; i++){
            pairs[i] = weights[i]+weights[i+1];
        }
        sort(pairs.begin(), pairs.end());
        long long mn = 0, mx = 0;
        for(int i=0; i<k-1; i++){
            mn += pairs[i];
            mx += pairs[n-2-i];
        }
        return mx-mn;
    }
};
