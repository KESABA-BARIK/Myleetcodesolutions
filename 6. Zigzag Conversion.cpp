class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows>s.length())
        return s;
        string ans;
        vector<vector<char>> rows(numRows);
        int i=0, d=1;
        for(char c:s){
            rows[i].push_back(c);
            if(i==0){
                d=1;
            }else if(i==numRows-1){
                d=-1;
            }
            i+=d;
        }
        for(auto& row : rows){
            for(char c: row){
                ans+=c;
            }
        }

        return ans;
    }
};
