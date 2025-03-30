class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(auto pair: intervals){
            if(ans.empty() || ans.back()[1]<pair[0]){
                ans.push_back(pair);
            }else{
                ans.back()[1] = max(pair[1],ans.back()[1]);
            }
        }
        return ans;
    }
};
