#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<int> s;
    s.push(19);
    s.push(20);
    s.push(21);

    // print the elements 
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}