class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string,vector<string>>res;
         for(const auto& s : strs){
            vector<int>arr(26,0);
            for(char c: s){
                arr[c - 'a']++;
            }
            string key = to_string(arr[0]);
            for(int i = 1; i < 26; i++){
               key += ',' + to_string(arr[i]);
            }
            res[key].push_back(s);
         }
         vector<vector<string>>ans;
         for(const auto& pair: res){
            ans.push_back(pair.second);
         }
          return ans;
    }
};
