class Solution {
public:
    int dfs(vector<int>&nums, vector<int>&dp, int ind, int sze){
        if(ind>sze) return 0;
        if(dp[ind] != -1) return dp[ind];
        int take = nums[ind] + dfs(nums, dp, ind+2, sze);
        int skip = dfs(nums, dp, ind+1, sze);
        return dp[ind] = max(take,skip);
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int n = nums.size();
        vector<int>dp(n,-1),dp2(n,-1);
        int l1 = dfs(nums, dp, 0, n-2);
        int l2 = dfs(nums, dp2, 1, n-1);
        return max(l1,l2);
    }
};
