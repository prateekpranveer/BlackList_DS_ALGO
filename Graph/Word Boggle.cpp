
    set<string>s;
    bool found (int i, int j, int idx, vector<vector<char>>& board, string &empty, string word){
        if (i<0 || j<0 || i>=board.size() || j>=board[0].size() || word[idx] != board[i][j]) return false;
        if (idx==word.size()-1) {
            return true;
        }
        char temp = board[i][j];
        board[i][j] = '*';
        bool a = found(i+1,j, idx+1, board, empty,word);
        bool b = found(i-1,j,idx+1,board, empty,word);
        bool c = found(i,j-1,idx+1,board, empty,word);
        bool d = found(i,j+1,idx+1,board, empty,word);
        bool e = found(i+1,j+1,idx+1,board, empty,word);
        bool f = found(i-1,j-1,idx+1,board, empty,word);
        bool g = found(i+1,j-1,idx+1,board, empty,word);
        bool h = found(i-1,j+1,idx+1,board, empty,word);
        board[i][j] = temp;
        return a|b|c|d|e|f|g|h;
    }
    
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    int n = board.size();
	    int m = board[0].size();
	    vector<string>v;
	    for (int index = 0; index<dictionary.size(); index++){
	        string word = dictionary[index];
	        string empty = "";
	        for (int i = 0; i<n; i++){
	            for (int j = 0; j<m; j++){
	                if (found(i, j, 0, board, empty, word)){
	                    s.insert(word);
	                    break;
	                }
	            }
	        }
	    }
	    for (auto x :s){
	        v.push_back(x);
	    }
	    return v;
	}

