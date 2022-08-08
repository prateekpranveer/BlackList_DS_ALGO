/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
    priority_queue<int,vector<int>,greater<int>>pq;
    while(!s.empty()){
        pq.push(s.top());
        s.pop();
    }
    while(!pq.empty()){
        s.push(pq.top());
        pq.pop();
    }
    
   //Your code here
}