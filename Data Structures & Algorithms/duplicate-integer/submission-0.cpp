class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i = 0; i < nums.size(); i++){
            if(mpp.find(nums[i]) == mpp.end()){
                mpp.insert({nums[i],i});
            }else{
                return true;
            }
        }
        return false;
    }
};