class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> row(grid.size());
        vector<int> clo(grid.front().size());
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
            row[i] += grid[i][j];
            clo[j] += grid[i][j];
            }
        }
        int ans=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
            if(grid[i][j] && (row[i]>1 || clo[j]>1))ans++;
            }
        }
        return ans;
    }
};
