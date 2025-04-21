class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long mx=0, mn=0, a = 0;
        for(int i : differences){
            a += i;
            mx = max(mx,a);
            mn = min(mn,a);
        }
        return max(0,(int)((upper-lower+1)-(mx-mn)));
    }
};
