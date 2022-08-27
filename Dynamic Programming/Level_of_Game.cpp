int v[1004][1004];
        bool switcher = true;
        int level(int h,int m){
            if (h<=0 || m<=0) return -1;
            if (v[h][m]!=-1) return v[h][m];
            if (switcher){
                switcher = false;
                 return v[h][m] = 1 + level(h+3,m+2);
            }
            else {
                switcher = true;
                return v[h][m] = 1 + max(level(h-5,m-10),level(h-20,m+5));
            }
        }
        
        int maxLevel(int h,int m) {
            memset(v,-1,sizeof v);
            return level(h,m);
        }