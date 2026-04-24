class Solution {
public:
    void expand(const string& s, int left, int right, int& start, int& maxi){
        while(left>=0 && right<s.length() && s[left] == s[right]){
            int currlen = right - left + 1;
            if(currlen>maxi){
                maxi = currlen;
                start = left;
            }
            left--;
            right++;
        }
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int maxi = 1;
        int start = 0;
        for(int i = 0; i < n; i++){
            expand(s, i, i, start,maxi);
            expand(s,i, i+1, start, maxi);
        }
        return s.substr(start, maxi);
    }
};
