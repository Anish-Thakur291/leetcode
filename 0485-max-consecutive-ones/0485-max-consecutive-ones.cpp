class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int maxi=0;
      int j=0;
     
      
      for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            j++;
            maxi=max(maxi,j);
        }
        else{
            j=0;
        maxi=max(maxi,j);
        }
      }
     return maxi;
    }
};