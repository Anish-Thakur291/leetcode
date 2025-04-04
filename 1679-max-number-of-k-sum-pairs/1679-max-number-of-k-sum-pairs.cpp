class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int s=0;
        int count=0;
        int e=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(s<e){
        int sum=nums[s]+nums[e];
        if(sum==k){
            count +=1;
            s++;
            e--;
        }
        else if(sum>k){
            e--;
        }
        else{
            s++;
        }
        
        }
        return count;
        
    }
};