class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        for(;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                   return nums[i];
                }
            }
        }
        return nums[i];
    }
};