class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>arr(26,0),brr(26,0);
        for(int i = 0; i<s.size();i++){
            arr[s[i]-'a']++;
        }
        for(int i = 0; i < t.size();i++){
            brr[t[i]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(arr[i]!=brr[i]){
                return false;
            }
        }
        return true;
    }
};
