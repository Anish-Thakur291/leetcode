class Solution {
public:

    int minIncrementForUnique(vector<int>& nums) {
        int count=0;
        if(nums.size()==1){
            return 0;
        }
        else{
      
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
    if(nums[i]<=nums[i-1]){
         int newVal = nums[i] + 1;
        count+=(newVal-nums[i]);
        nums[i]=newVal;
    }

       
    }
        }
       

    return count;
    
    }
};