class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int white = 0, ans = INT_MAX;
        for(int i=0 ;i<blocks.size(); i++){
            white += blocks[i]=='W';
            if(i>=k)white -= blocks[i-k]=='W';
            if(i>=k-1)ans = min(white,ans);
        }
        return ans;
    }
};
