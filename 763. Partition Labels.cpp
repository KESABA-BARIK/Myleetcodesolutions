class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char, int> last;
        for(int i=0; i<s.length(); i++){
            last[s[i]] = i;
        }
        int far = 0, left=0;
        for(int i=0; i<s.length(); i++){
            far = max(far, last[s[i]]);
            if(i == far){
                ans.push_back(i+1-left);
                left = i+1;
            }
        }
        return ans;
    }
};
