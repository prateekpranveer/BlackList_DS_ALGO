    set<string>s;
    void found (int i, int j, vector<vector<char>>& board, vector<vector<int>>&vis, string &empty, string word){
        if (empty==word) {
            s.insert(word);
            return;
        }
        if (i<0 || j<0 || i>=board.size() || j>=board[0].size() || vis[i][j]) return;
        vis[i][j]=1;
        empty.push_back(board[i][j]);
        found(i+1,j,board,vis, empty,word);
        found(i-1,j,board,vis, empty,word);
        found(i,j-1,board,vis, empty,word);
        found(i,j+1,board, vis, empty,word);
        found(i+1,j+1,board, vis, empty,word);
        found(i-1,j-1,board, vis, empty,word);
        found(i+1,j-1,board, vis, empty,word);
        found(i-1,j+1,board, vis, empty,word);
        empty.pop_back();
        vis[i][j] = 0;
    }
    
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    int n = board.size();
	    int m = board[0].size();
	    vector<string>v;
	    for (int index = 0; index<dictionary.size(); index++){
	        vector<vector<int> >vis(n, vector<int> (m,0));
	        string word = dictionary[index];
	        string empty = "";
	        for (int i = 0; i<n; i++){
	            for (int j = 0; j<m; j++){
	                found(i, j, board,vis, empty, word);
	            }
	        }
	    }
	    for (auto x:s){
	        v.push_back(x);
	    }
	    return v;
	}