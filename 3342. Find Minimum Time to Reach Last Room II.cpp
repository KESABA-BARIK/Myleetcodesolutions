class sp {
    public:
        int x;
        int y;
        int dis;
        sp(int x, int y, int dis) : x(x), y(y), dis(dis) {}
};

class Solution {
public:
    const int inf = INT_MAX;
    int minTimeToReach(vector<vector<int>>& mt) {
        int n=mt.size(), m=mt[0].size();
        vector<vector<int>> distance(n, vector<int>(m,inf));
        vector<vector<int>> vertex(n, vector<int>(m,0));
        int moves[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        distance[0][0] = 0;
        auto cmp = [](const sp& a, const sp& b){return a.dis > b.dis;};
        priority_queue<sp, vector<sp>, decltype(cmp)> q(cmp);
        q.push(sp(0,0,0));
        while(q.size()){
            sp s = q.top();
            q.pop();
            if(vertex[s.x][s.y]){
                continue;
            }if(s.x == n-1 && s.y==m-1){break;}
            vertex[s.x][s.y] = 1;
            for(int i=0; i<4; i++){
                int nx = s.x+moves[i][0];
                int ny = s.y+moves[i][1];
                if(nx<0 || nx>=n || ny<0 || ny>=m){
                    continue;
                }
                int dist =max(distance[s.x][s.y], mt[nx][ny]) + (s.x + s.y) % 2 + 1;
                if(distance[nx][ny]>dist){
                    distance[nx][ny]=dist;
                    q.push(sp(nx,ny,dist));
                }
            }
        }
        return distance[n-1][m-1];
    }
};
