class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int ans=0;
        for(int i=0; i<k-1; i++){
            colors.push_back(colors[i]);
        }
        int l=0, r=1;
        while(r < colors.size()){
            if(colors[r] == colors[r-1]){
                l = r;
                r++;
                continue;
            }
            r++;
            if(r-l < k)continue;
            ans++;
            l++;
        }
        return ans;
    }
};
