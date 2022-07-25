void pushPerm(string main, string &s, vector<int>&taken, set<string>&ans){
	        if (s.size()==main.size()){
	            ans.insert(s);
	            return;
	        }
	        for (int i = 0; i<main.size(); i++){
	            if (!taken[i]){
	                s.push_back(main[i]);
	                taken[i] = 1;
	                pushPerm(main, s, taken, ans);
	                taken[i] = 0;
	                s.pop_back();
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    vector<int>taken(S.size(),0);
		    set<string> ans;
		    vector<string>final;
		    string s = "";
		    pushPerm(S, s,taken, ans);
		    for (string x:ans){
		        final.push_back(x);
		    }
		    return final;
		}