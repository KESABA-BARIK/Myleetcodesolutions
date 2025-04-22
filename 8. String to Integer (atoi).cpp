class Solution {
public:
    int myAtoi(string s) {
        int i =0,result= 0;
        bool isneg =  false;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'||s[i]=='+'){
            isneg = (s[i]=='-');
            i++;
        }
        while(i<s.size()&&isdigit(s[i])){
            int dig = s[i]-'0';
            if(result>INT_MAX/10||(result==INT_MAX/10 && dig>INT_MAX%10)){
                return isneg? INT_MIN:INT_MAX;
            }
            result = result*10+dig;
            i++;
        }
        return isneg?-result:result;
    }
};
