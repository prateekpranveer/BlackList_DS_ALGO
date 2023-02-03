	    int mod = 1e9+7;
	    int dp[10004];
	    int help (int i, string &str) {
	        if (i==str.size()) return 1;
	        int ans = 0;
	        int a = str[i]-'0';
	        int b;
	        if (dp[i]!=-1) return dp[i];
	        if (i<str.size()-1) {
	            b = a*10+str[i+1]-'0';
	        }
	        if (a>0) ans+=help(i+1,str)%mod;
	        if (b>9 && b<=26) ans+=help(i+2,str)%mod;
	        return dp[i] = ans%mod;
	    }
		int CountWays(string str){
		    memset(dp, -1, sizeof dp);
		    return help(0, str)%mod;
		}
