int ct = 0;
int shortestPath( int x, int y){ 
       while(x!=y){
           (x>y) ? x/=2 : y/=2;
           ct++;
       }
       return ct;
   }