class Solution {
public:
    map<int,vector<int>>temp;
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        for(int i=0; i<groupSizes.size(); i++)temp[groupSizes[i]].push_back(i);
        vector<vector<int>> ans;
          for (auto& [size, p] : temp) {
            for (int i = 0; i < p.size(); i += size) {
                vector<int> g;
                for (int j = 0; j < size; ++j) {
                    g.push_back(p[i + j]);
                }
                ans.push_back(g);
            }
        }
        return ans;
    }
};
