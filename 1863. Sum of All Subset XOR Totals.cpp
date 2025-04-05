class Solution {
public:
    int helper(vector<int>& nums, int ind, int curxor){
        if(ind == nums.size())return curxor;
        
        int inc = helper(nums, ind+1, curxor^nums[ind]);
        int lev = helper(nums, ind+1, curxor);

        return inc+lev;
    }
    int subsetXORSum(vector<int>& nums) {
        return helper(nums, 0, 0);
    }
};
