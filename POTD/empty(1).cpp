// Put Your Code here
#include <bits/stdc++.h>
using namespace std;

void merge(vector <int> &v, int left, int mid, int right){
    vector <int> merged(j-i+1);
    int id1 = left;
    int id2 = mid+1;
    int x = 0;

    while ()
}


void divide(vector <int> &v, int left, int right){
    if (i>j){
        return;
    }
    int mid = left + right/2;
    divide(v, 0, mid);
    divide(v, mid+1, right);
    merge(v, left, right , mid);
}

int main(){
    vector <int>v;
    int n; while (n--){
        int x;
        cin>>x;
        v.push_back(x);
    }

    divide(v, 0, n-1);
    for (int i = 0; i<n; i++){
        cout << arr[i] << endl;
    }

}