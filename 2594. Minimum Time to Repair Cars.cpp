class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        int l = *min_element(ranks.begin(),ranks.end()), r = *max_element(ranks.begin(),ranks.end());
        long long low = 1, high = 1LL*l*cars*cars;
        while(low < high){
            long long mid = (low+high)/2;
            long long cr = 0;
            for(int& i : ranks){
                cr += (long long)sqrt(mid / (long long)i);
            }
            if(cr >= cars){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};
