class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> dp(n, -1); // dp[i] stores the maximum jumps to reach index i
        dp[0] = 0; // Start at index 0 with 0 jumps

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                // Check if the jump from j to i is valid
                if (abs(nums[i] - nums[j]) <= target && dp[j] != -1) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        // If dp[n-1] is -1, it means the end is not reachable
        return dp[n - 1];
    }
};
