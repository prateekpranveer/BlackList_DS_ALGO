#include <bits/stdc++.h>



bool vectorPal(vector<int>&v, int i, int j){
    vector<int>v_new; 
    vector<int>v_main;
    v_new.assign(v.begin()+i, v.begin()+j);
    v_main.assign(v.begin()+i, v.begin()+j);
    reverse(v_new.begin(),v_new.end());
    return (v_new == v_main);
    
}

int maxPalindrome(Node *head)
{
    Node * temp = head;
    vector<int>v;
    while(temp){
        v.push_back(temp->data);
        temp = temp->next;
    }
    int l = 0;
    for (int i = 0; i<v.size(); i++){
        for (int j = i+1; j<=v.size(); j++){
            if (vectorPal(v,i,j)) l = max(l,j-i);
        }
    }
    return l;
}