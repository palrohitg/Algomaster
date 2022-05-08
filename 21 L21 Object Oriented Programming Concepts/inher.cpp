#include<bits/stdc++.h>
using namespace std;

class Account {
    public:
        float salary = 50000;
}; 

class Programmer : public Account {
    public:
        float bonus = 500;
}; 


int main() {

    Programmer p1;
    cout << p1.salary << p1.bonus << endl; 
    return 0;
}