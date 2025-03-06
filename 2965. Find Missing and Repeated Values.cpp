class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> count(n*n + 1, 0);
        int twice;
        
        for(auto row:grid){
            for(int num:row){
                if(count[num] >0)twice=num;
                count[num]++;
            }
        }
        for(int i=1; i<=n*n+1; i++){
            if(count[i]==0)
            return {twice,i};
        }
        return {};
    }
};
