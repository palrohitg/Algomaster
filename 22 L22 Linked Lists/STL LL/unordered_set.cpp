#include<bits/stdc++.h>
#include<unordered_set>
using namespace std; 

int main() {    
    unordered_set<string> tempSet; 
    tempSet.insert("Vikas");
    tempSet.insert("Vikas");
    tempSet.insert("Ram");

    string key = "Ram"; 

    if (tempSet.find(key) == tempSet.end()) {
        cout << "elments not foundts" << endl; 
    } else {
        cout << "elemnts exits in the arrays" << endl; 
    }

    unordered_set<string>::iterator itr; 
    for (itr = tempSet.begin(); itr != tempSet.end(); itr++) {
        cout << (*itr) << endl; 
    }

    return 0; 
}