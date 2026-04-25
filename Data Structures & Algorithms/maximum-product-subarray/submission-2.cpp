class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mini = nums[0];
        int maxi = nums[0];
        int ans = nums[0];
        for(int i = 1; i < n; i++){
            int curr = nums[i];
            int temp = maxi;
            maxi = max({curr, maxi*curr, mini*curr});
            mini = min({curr, temp*curr, mini*curr});
            ans = max(ans,maxi);
        }
        return ans;
    }
};
