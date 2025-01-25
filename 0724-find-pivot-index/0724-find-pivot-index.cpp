class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int total=0;
       int left=0;
       for(int num:nums){
        total+=num;
       }
       for(int i=0;i<nums.size();i++){
        int right=total-left-nums[i];
       
       if(right==left){
        return i;
       }
       
       left +=nums[i];
       }
       return -1;
    }
};