class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int ans=0;
        for(int i=0; i<cost.size(); i++){
            ans += cost[i];
        }
        int extra =0;
        for(int i=cost.size()-3; i>=0; i-=3){
            extra += cost[i];
        }
        return ans-extra;
    }
};
