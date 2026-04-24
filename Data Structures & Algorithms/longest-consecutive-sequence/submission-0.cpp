class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>st;
       for(int i = 0; i < nums.size(); i++){
        st.insert(nums[i]);
       }
       int maxi = 0;
       for(auto num : st){
           if(st.find(num-1) == st.end()){
             int curr = num;
             int curr_count = 1;
             while(st.find(curr+1)!=st.end()){
                curr+=1;
                curr_count++;
             }
             maxi = max(maxi,curr_count);
           }
       }
       return maxi;
    }
};
