class Solution {
public:
    bool isBalanced(string num) {
        int odds=0, evens=0;
        for(int i=0; i<num.size(); i+=2){
            int temp = num[i]-'0';
            odds+=temp;
        }
        for(int i=1; i<num.size(); i+=2){
            int temp = num[i]-'0';
            evens+=temp;
        }
        if(odds != evens)return false;
        return true;
    }
};
