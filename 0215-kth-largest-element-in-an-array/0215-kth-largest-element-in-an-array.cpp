class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), greater<int>());
        // return nums[k - 1];
    //   1,2,2,3,3,4,5,5,6
    int l= nums.size();
    if(k>=l){
        return 1 ;
    }
    int m=l-k;
    if(l%2!=0){
    return nums[m];
    }
        return nums[m-1];

    }
};