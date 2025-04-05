class Solution {
public:
    vector<int> findPeaks(vector<int>& mo) {
        vector<int> ans;
        for (int i = 1; i < mo.size() - 1; i++) {
            if (mo[i] > mo[i - 1] && mo[i] > mo[i + 1])
                ans.push_back(i);
        }
        return ans;
    }
};
