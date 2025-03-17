class Solution {
public:
    bool divideArray(vector<int>& nums) {
        stack<int> s;
        sort(nums.begin(), nums.end());
        for(int num : nums){
            if(!s.empty() && s.top()==num)s.pop();
            else s.push(num);
         }
        return s.empty();
    }
};
