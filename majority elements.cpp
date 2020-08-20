class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {
if(nums[i]==nums[i+1] || nums[i]==nums[i+2])
return nums[i];
        
    }
        return 0;
    }
};
