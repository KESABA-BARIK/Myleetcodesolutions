class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        string t = countAndSay(n - 1);
        int i = 0;
        string ans = "";
        while (i < t.length()) {
            int j = i + 1;
            while (j < t.length() && t[i] == t[j]) {
                j++;
            }
            ans += to_string(j - i) + t[i];
            i = j;
        }
        return ans;
    }
};
