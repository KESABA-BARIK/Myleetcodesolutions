class Solution {
public:
    int numberOfSubstrings(string s) {
        int position[3] = {-1, -1, -1};
        int ans = 0;
        int i=0;
        while (i < s.size()) {
            position[s[i] - 'a'] = i;
            ans += 1 + min(position[0], min(position[1], position[2]));
            i++;
        }
        return ans;
    }
};
