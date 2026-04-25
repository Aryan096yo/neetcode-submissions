class Solution {
public:
    int countSubstrings(string s){
        int n = s.size();
        vector<vector<bool>>dp(n, vector<bool>(n,false));
        int start = 0, maxi = 1;
        for(int i = 0; i < n; i++) dp[i][i] = true; 

        for(int i = 0; i < n-1; i++){
            if(s[i] == s[i+1]){
                dp[i][i+1] = true;
                start = i;
                maxi = 2;
            }
        }
        for(int len = 3; len<=n; len++){
            for(int i = 0; i<=n-len;i++){
                int j = i+len-1;
                if(s[i] == s[j] && dp[i+1][j-1]){
                    dp[i][j] = true;
                    start = i;
                    maxi = len;
                }
            }
        }
        int cnt = 0;
        for(int i = 0;  i < n; i++){
            for(int j = 0; j < n; j++){
                if(dp[i][j] == true){
                    cnt++;
                }
            }
          
        }
          return cnt;
    }
};
