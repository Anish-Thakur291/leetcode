class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // if(nums.size()==1)
        //     return nums[0]; 
        // for(int i=1; i<nums.size(); i++){
        //     int temp = nums[i-1];
        //     // checks the alternate vale
        //     if(temp == nums[i])
        //         return nums[i];
        // }
        // return 0;
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]==nums[i+1]){
        //       return nums[i];
        //     }
           
        // }
        // return 0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]==nums[i]){
                    return nums[i];
                }
            }
        }
        return 0;

    }
};