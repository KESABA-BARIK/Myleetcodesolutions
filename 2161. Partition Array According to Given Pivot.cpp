class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lesser,greater;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==pivot)count++;
            if(nums[i]>pivot)greater.push_back(nums[i]);
            if(nums[i]<pivot)lesser.push_back(nums[i]);
        }
        while(count>0){
            lesser.push_back(pivot);
            count--;
        }
        lesser.insert(lesser.end(),greater.begin(),greater.end());
        return lesser;
    }
};
