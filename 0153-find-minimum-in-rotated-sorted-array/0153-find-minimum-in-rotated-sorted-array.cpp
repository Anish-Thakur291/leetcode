class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    //       int st=0;
    // int end=nums.size()-1;
    // int mid=st+(end-st)/2;
    // while(st<end){
    //     if(nums[st]<nums[end]){
    //         return nums[st];
    //     }
    //     if(nums[mid]>=nums[0]){
    //         st=mid+1;
    //     }
    //     else{
    //         end =mid;
    //     }
    //  mid=st+(end-st)/2;
    // }
    //     return nums[st];
    }
};