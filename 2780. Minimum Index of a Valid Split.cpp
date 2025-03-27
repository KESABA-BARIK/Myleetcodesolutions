class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int> f, s;
        for(int& num : nums){
            f[num]++;
        }
        for(int i=0; i<nums.size(); i++){
            int temp = nums[i];
            s[temp]++;
            f[temp]--;
            if(s[temp]*2 > i+1 && f[temp]*2 > nums.size()-i-1){
                return i;
            }
        }
        return -1;
    }
};
