class Solution {
public:
int first(vector<int>& nums, int x) {
    int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==x){
            ans=mid;
            e=mid-1;
        }
        else if(x>nums[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;

}
int last(vector<int>& nums, int x) {
    int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==x){
            ans=mid;
             s=mid+1;
        }
        else if(x>nums[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;

}
    vector<int> searchRange(vector<int>& nums, int target) {
       int k = first(nums, target);
        int k1 = (k == -1) ? -1 : last(nums, target);
        return {k, k1};
    }
};









//    int ans1= firstocc(nums,target);
//    int ans2 = ans1 == -1 lastocc(nums,target);
//    return{ans1,ans2};