class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0, sum2=0;
        bool z1=false,z2=false;
        for(auto& n:nums1){
            if(n==0){
                sum1++;
                z1=true;
            }
            sum1+=n;
        }
        for(int n:nums2){
            if(n==0){
                sum2++;
                z2=true;
            }
            sum2+=n;
        }
        if(sum1 == sum2)return sum1;
        if(!z2&&sum2<sum1||!z1&&sum1<sum2)return -1;
        return max(sum1,sum2);
    }
};
