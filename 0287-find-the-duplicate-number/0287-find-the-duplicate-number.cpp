class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==1)
            return nums[0]; 
        for(int i=1; i<nums.size(); i++){
            int temp = nums[i-1];
            if(temp == nums[i])
                return nums[i];
        }
        return 0;
    }
};