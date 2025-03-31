class Solution {
public:
    bool canCross(vector<int>& stones) {
        unordered_map<int, unordered_set<int>> bruh;
        bruh[stones[0]+1] = {1};
        for(int i=1; i<stones.size(); ++i){
            for(auto br : bruh[stones[i]]){
                bruh[stones[i] + br].insert(br);
                bruh[stones[i] + br - 1].insert(br - 1);
                bruh[stones[i] + br + 1].insert(br + 1);
            }
        }
        return bruh[stones.back()].size()!=0;
    }
};
