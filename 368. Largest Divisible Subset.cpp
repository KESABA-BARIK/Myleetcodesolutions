class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> dp(nums.size(),1), arr(nums.size(),-1);
        int tem=0;
        for(int i=1; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[i]%nums[j]==0 & dp[i]<dp[j]+1){
                    dp[i] = dp[j]+1;
                    arr[i] = j;
                }
            }
            if(dp[tem]<dp[i])tem = i;
        }
        vector<int>ans;
        for(int i=tem; i>=0; i = arr[i]){
            ans.push_back(nums[i]);
            if(arr[i]==-1)break;
        }
        return ans;
    }
};
