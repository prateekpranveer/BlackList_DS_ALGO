void changeDirection (int &direction) {
        direction = (direction+1)%4;
    }
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        int i = 0, j = 0;
        pair<int,int>pr;
        int dir = 0;
        while (i>=0 and j>=0 and i<R and j<C) {
            pr.first = i;
            pr.second = j;
            if (matrix[i][j]==1) {
                matrix[i][j] = 0;
                if (dir==0) {
                    changeDirection(dir);
                    i++;
                }
                else if (dir==1) {
                    changeDirection(dir);
                    j--;
                }
                else if (dir==2) {
                    changeDirection(dir);
                    i--;
                }
                else {
                    changeDirection(dir);
                    j++;
                }
            }
            else {
                if (dir==0) j++;
                else if (dir==1) i++;
                else if (dir==2) j--;
                else i--;
            }
        }
        return pr;
        
    }