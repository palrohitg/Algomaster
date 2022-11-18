#include<bits/stdc++.h> 
using namespace std; 

int main() {

    vector<string> products {"vikas", "rohitpal"}; 
    sort(products.begin(), products.end()); 
    
    for (auto product : products) {
        cout << product << endl; 
    }
    return 0; 
}