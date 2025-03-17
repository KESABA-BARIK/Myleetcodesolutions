class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> fre;
        for(int num : nums){
            fre[num]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b){
            if(fre[a] == fre[b])return a>b;
            return fre[a]<fre[b];
        });
        return nums;
    }
};
