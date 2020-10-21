// implement the tries data structure using hashmaps 

#include<bits/stdc++.h>  
using namespace std; 



int main() {

    unordered_map<int, int *> m;
    int a = 10;  
    m[a] = &a; 

    cout << m.count(a);  

    


    // cout << m.count("pal"); // check in the current things is present or not 
 


    return 0; 
}