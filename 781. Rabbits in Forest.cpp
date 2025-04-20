class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int ans=0, f[1000]={0};
        for(int i : answers){
            ans += (f[i]++%(i+1)==0)*(i+1);
        }
        return ans;
    }
};
