#include<bits/stdc++.h>
using namespace std;

class Account {
    public:
        float salary = 60000; 
};

class Programmer : public Account {
    public:
        float bonus= 5000;
}; 

int main() {
    Programmer p1;
    cout << "Salary" << p1.salary;
    cout << "bonsu" << p1.bonus;
    return 0; 
}