// Brute Force Approach Giving TLE

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b; 
    b= temp;
}

void rotate(vector<int> &A){
    int n = A.size();
    
    for (int i = 0; i<n; i++){
        swap(A[i],A[n-1]);
    }
}

int findSum(vector <int> v){
    int n = v.size();
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum = sum + (v[i]*i);
    }
    
    return sum;
}

int max_sum(int Arr[],int N)
{
    vector<int> A;
    for (int i = 0; i<N; i++){
        A.push_back(Arr[i]);
    }
    
    int max = findSum(A);
    for (int i = 0; i<N; i++){
        rotate(A);
        int x = findSum(A);
        if(x>max){
            max = x;
        }
    }
    
    return max;
//Your code here
}
