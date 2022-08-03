/*
    Pointers in CPP: 
    a. 
*/
#include<bits/stdc++.h> 
using namespace std; 

int main() {

    int num = 124; 
    cout << num << endl; 
    // Address of Operator &
    cout << &num;  // hexadecimal formats

    // Pointers store address of the operators: 
    // *ptr is meaning values at particular address 
    int *ptr = &num;  // Ptr is a pointer to integer values 
    cout << "Pointers store address of operators" << ptr << endl; 


    return 0; 
}