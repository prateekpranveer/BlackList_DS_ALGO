bool switcher = true;
        int maxLevel(int h,int m) {
            int level = 0;
            while(1){
                if (switcher){
                    h+=3;
                    m+=2;
                    level++;
                    switcher = false;
                }
                else if (!switcher){
                    level++;
                    switcher = true;
                    if (m>10 && h>5){
                        h-=5;
                        m-=10;
                    }
                    else if (h>20 && m>0){
                            h-=20;
                            m+=5;
                    }
                    else{
                        break;
                    }
                }
            }
            return level-1;
        }