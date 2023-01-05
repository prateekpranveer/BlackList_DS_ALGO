class Solution{
    stack<int>st;
    stack<int>minStack;
    public:
       /*returns min element from stack*/
       int getMin(){
           if (minStack.empty()) return -1;
           return minStack.top();
       }
       
       /*returns poped element from stack*/
       int pop(){
           if (st.empty()) return -1;
           int a = st.top();
           int b = minStack.top();
           if (a==b) {
               minStack.pop();
           }
           int c = st.top();
           st.pop();
           return c;
       }
       
       /*push element x into the stack*/
       void push(int x){
           if (!minStack.empty()) {
               if (x<=minStack.top()) {
                    minStack.push(x);
               }
           }
           else {
               minStack.push(x);
           }
           st.push(x);
           //Write your code here
       }