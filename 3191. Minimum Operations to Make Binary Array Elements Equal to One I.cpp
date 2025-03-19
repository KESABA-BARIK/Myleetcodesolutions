class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        for(int i=2; i<nums.size(); i++){
            if(nums[i-2] == 0){
                nums[i] ^= 1;
                nums[i-1] ^= 1;
                nums[i-2] ^= 1;
                ans++;
            }
        }
        int s = count(nums.begin(), nums.end(), 1);
        if(s == nums.size())return ans;
        return -1;
    }
};
