class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(const auto& str: strs){
            vector<int>arr(26,0);
            for(char c: str){
                arr[c-'a']++;
            }
            string s = to_string(arr[0]);
            for(int i = 1; i < 26; i++){
                s += ',' + to_string(arr[i]);
            }
            mpp[s].push_back(str);
        }
        vector<vector<string>>ans;
        for(const auto& pair: mpp){
          ans.push_back(pair.second);
        }
        return ans;
    }
};
