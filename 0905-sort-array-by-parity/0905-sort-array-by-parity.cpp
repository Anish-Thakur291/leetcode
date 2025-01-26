class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> k;
        for(int i=0;i<nums.size();i++){

            if(nums[i]%2==0){
                k.push_back(nums[i]);
            }
        }
           for(int i=0;i<nums.size();i++){

               if(nums[i]%2!=0){
                k.push_back(nums[i]);
            }
            }
        
        return k;
        
    }
};