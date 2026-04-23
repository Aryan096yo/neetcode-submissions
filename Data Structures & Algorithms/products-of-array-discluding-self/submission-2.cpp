class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size(); 
       int cnt = 0;
       int mul = 1;
       int mul2 = 1;
       for(int i = 0; i < n; i++){
          if(nums[i] == 0){
            cnt++;
          }
       }
       if(cnt == 1){
         for(int i = 0; i < n; i++){
            if(nums[i]==0)continue;
            else mul*=nums[i];
         }
       }else if(cnt == 0){
        for(int i = 0; i < n; i++) mul2*=nums[i];
       }
       vector<int>ans(n,0);
       for(int i = 0; i < n; i++){
          if(cnt>1){
            ans[i] = 0;
          }else if(cnt == 1){
            if(nums[i] == 0){
                ans[i] = mul;
            }else{
                ans[i] = 0;
            }
          }else if(cnt == 0){
            ans[i] = mul2/nums[i];
          }
       }
       return ans;
    }
};
