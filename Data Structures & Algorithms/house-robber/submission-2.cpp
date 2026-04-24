class Solution {
public:
     int dfs(vector<int>& nums,vector<int>&dp,int ind,int n){
         if(ind>nums.size() - 1) return 0;
         if(dp[ind]!=-1) return dp[ind];
         int take = nums[ind] + dfs(nums,dp,ind+2,n);
         int skip = dfs(nums,dp,ind+1,n);
         return dp[ind] = max(take,skip);
    }
    int rob(vector<int>& nums){
        int n = nums.size();
        vector<int>dp(n,-1);
        int ans = dfs(nums,dp,0,n);
        return ans;
    }
    
};
