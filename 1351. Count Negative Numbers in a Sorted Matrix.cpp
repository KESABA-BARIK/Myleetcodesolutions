class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i=grid.size()-1, j=0, ans=0;
        int c = grid[0].size();
        while(i>=0 && j<c){
            if(grid[i][j]<0){
                i--;
                ans+=c-j;
            }else{
                j++;
            }
        }
        return ans;
    }
};
