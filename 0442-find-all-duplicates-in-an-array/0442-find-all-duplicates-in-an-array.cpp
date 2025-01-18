class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        int j=0;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for( i=0;i<nums.size()-1;i++){
            
                if(nums[i]==nums[i+1]){
               ans.push_back(nums[i]);
                
                
                
            }

        }
      return ans;
    }
};