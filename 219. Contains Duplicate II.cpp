class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        for(int i=0;i<nums.size();i++){
            if(f.count(nums[i])){
                if(abs(f[nums[i]]-i) <= k){
                    return true;
                }
            }
            f[nums[i]] = i;
        }
        return false;
    }
};
