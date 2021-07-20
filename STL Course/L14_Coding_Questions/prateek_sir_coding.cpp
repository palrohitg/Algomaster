// Question Based on the Concept of Stack 
// means 1 then pop operations 
// means 2 then insert into the stacks 
/*

*/ 



#include<bits/stdc++.h> 
using namespace std; 

int main() {

    int q; cin >> q; 
    stack<int> s; 

    for (int i = 0; i < q; i++) {
        int input; cin >> input; 
        
        // input == 2 then insert into the stacks 
        if (input == 2) {
            int cost; cin >> cost; 
            s.push(cost); 
        }
        else if (input == 1) {
            // remove the contents and print out 
            if (!s.empty()) {
            cout << s.top() << endl; 
            s.pop(); 
            }
            else {
                cout << "No" << endl; 
            }
        }
        
    }


    return 0; 
}