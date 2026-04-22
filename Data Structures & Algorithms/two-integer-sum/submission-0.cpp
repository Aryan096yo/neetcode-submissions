class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp.insert({nums[i],i});
        }
        vector<int>ans;
        for(int i = 0; i < nums.size();i++){
           int rem = target-nums[i];
           if(mpp.find(rem)!=mpp.end()){
             auto ind1 = mpp.find(rem);
             if(ind1!=mpp.end()){
               int ind2 = ind1->second;
                if(ind2>i){
                    ans.push_back(i);
                    ans.push_back(ind2);
                    break;
                }else if(ind2<i){
                    ans.push_back(ind2);
                    ans.push_back(i);
                    break;
                }
             }
           }
        }
        return ans;
    }
};
