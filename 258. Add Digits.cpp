class Solution {
public:
    int addDigits(int num) {
    while(num>9){
    int n=0,r;
    while(num!=0){
        r=num%10;
        num/=10;
        n+=r;
    }
    num=n;
    }
    return num;
}
};
