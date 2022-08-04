void dfs(int sr, int sc, vector<vector<int>>& image, int oldColor, int newColor){
        if (sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size()) return;
        if (image[sr][sc]!=oldColor || image[sr][sc]==newColor) return;
        else{
            image[sr][sc] = newColor;
            dfs(sr+1, sc, image, oldColor, newColor);
            dfs(sr, sc+1, image, oldColor, newColor);
            dfs(sr-1, sc, image, oldColor, newColor);
            dfs(sr, sc-1, image, oldColor, newColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        dfs(sr,sc,image,oldColor,newColor);
        return image;
    }