//Do this question without explory space. 
// Constant Space Optimization Problem. 

#include<bits/stdc++.h>
using namespace std; 

class MinStack{           
    private:
        stack<int> s;
        stack<int> aux;

    public:

        void push(int value) {
            s.push(value);
            if (aux.empty()){
                aux.push(value);
            } else {
                if (aux.top() >= value) {
                    aux.push(value);
                }
            }
            return;
        }

        int top() {
            return s.top();
        }

        void pop(){
            int top = s.top();
            s.pop();
            if (aux.top() == top) {
                aux.pop();
            }
        }

        int isEmpty() {
            return s.empty();
        }

        int getMin() {
            return aux.top();
        }

        int size() {
            return s.size();
        }
};


 
int main() {

    MinStack ms;
    ms.push(19);
    ms.push(1);
    ms.push(129);
    
    cout << ms.size() << endl;
    cout << ms.getMin();
    ms.pop(); 
    cout << ms.getMin();
    cout << ms.top();

    return 0;
}