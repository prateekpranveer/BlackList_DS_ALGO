int maxIndexDiff(int A[], int N) 
    { 
        int max_ind = -1;
        int j = N-1;
        int i = 0;
        
        while (i<N-1){
            if (A[i]<=A[j]){
                max_ind = max(max_ind, j-i);
                j = N-1;
                i++;
            }
            else{
                j--;
            }
        }
        
        return max_ind;
        
    }