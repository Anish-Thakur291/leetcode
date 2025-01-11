
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> v; // Vector to store the value and its original index

        // Step 1: Populate the vector with the value and its original index
        for (int i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], i});
        }

        // Step 2: Sort the vector based on the values
        sort(v.begin(), v.end());

        int l = 0;
        int r = v.size() - 1;

        // Step 3: Two-pointer approach to find the pair
        while (l < r) {
            int sum = v[l].first + v[r].first;
            if (sum == target) {
                // Return the original indices of the two numbers
                return {v[l].second, v[r].second};
            } else if (sum > target) {
                r--;
            } else {
                l++;
            }
        }

        return {}; // Return an empty vector if no solution exists
    }
};

//     vector<int> twoSum(vector<int>& nums, int target) {
       
//        vector<int>v;
//        for(int i=0;i<nums.size();i++){
//         v.push_back(nums[i]);
//        }
//        sort(v.begin(),v.end());
//        int l=0;
//        int r=v.size()-1;
//        vector<int>ans;
//        while(l<r){
//         if(v[l] + v[r]==target){
//             ans.push_back(l);
//             ans.push_back(r);
//             return ans;
//         }
//         else if(v[l]+v[r]>target){
//         r--;
//         }
//        else{
//         l++;
//        }
//        }
//        return{};
//     }
// };