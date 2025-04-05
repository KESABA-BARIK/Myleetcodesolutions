class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r=*max_element(piles.begin(),piles.end()),ans=r;
        while(l<=r){
            int mid = (l+r)/2;
            long long t=0;
            for(int p : piles){
                t += (p+mid-1LL)/mid;
            }
            if(t<=h){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};
