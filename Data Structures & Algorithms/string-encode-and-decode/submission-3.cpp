class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(int i = 0; i < strs.size(); i++){
            int sze = strs[i].size();
            ans += to_string(sze) + "#";
            for(int j = 0; j < sze ; j++){
                char c = strs[i][j];
                ans += c;
            }
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i = 0;
        while(i < s.size()){
            int pos = s.find('#', i);
            int len = stoi(s.substr(i, pos - i));
            ans.push_back(s.substr(pos + 1, len));
            i = pos + 1 + len;
        }
        return ans;
    }
};