class Solution {
    private:
    void solve(vector<int>nums, vector<int>output, int index,vector<vector<int>>& ans){
        if(index>=nums.size()){
            ans.push_back(output);
            return ;
        }
        // excluding i++;
       solve(nums,output,index+1,ans);

       //including num[i] output me push 

       output.push_back(nums[index]);
       solve(nums,output,index+1,ans);


    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > ans;
        int index=0;
        vector<int> output;
        solve(nums,output,0,ans);
        return ans;
    }
};