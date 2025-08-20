class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     int l=0;
   int sum=0;
     int minl=INT_MAX;
     for(int r=0;r<nums.size();r++){
        sum+=nums[r];
        while(sum>=target){
            minl=min(minl,r-l+1);
            sum-=nums[l];
            l++;
        }
     }
      if(minl==INT_MAX){
        return 0;
      }
      else
      return minl;
      
    }
};