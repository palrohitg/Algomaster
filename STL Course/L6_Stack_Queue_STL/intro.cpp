/* Stack and Queues 

-> Random access is not allowed 
-> internally implemented using linkedlist which doesn't allow the random access 

# Stacks 
1. push 
2. pop 
3. top 



# Queue 
1. push 
2. pop 
3. front

1. implement stack using two queue and reverse the process too .. 



# deck/dequeue : doubly ended queues 
1. insertion and deletion of the elements can be performed both of the ends 
2. push_back(), pop_back(), push_front(), pop_front()

*/ 

#include<bits/stdc++.h> 
using namespace std; 

int main() {

    stack<int> s; 
    s.push(10); 
    cout << s.top(); 

    return 0; 
}
