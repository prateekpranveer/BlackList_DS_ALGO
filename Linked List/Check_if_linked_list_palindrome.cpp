bool isPal(string s){
        string p = s;
        reverse(s.begin(), s.end());
        if (p==s) return true;
        else return false;
    }
    
    bool isPalindrome(Node *head)
    {
     string s = "";
     while(head){
         s.push_back(head->data);
         head = head->next;
     }
     
     return isPal(s);
        //Your code here
    }