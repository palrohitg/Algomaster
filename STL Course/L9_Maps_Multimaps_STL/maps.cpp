/*
maps : key value pairs when we need to store key-values


Unordered map ;





Problem Identifications :





Complexity :




Internal Data-structures :






problem:





Map vs Ordered Map :


# Different functions :
1. insert(k,v) = insert()
2. query(k) = find()
3. delete(k) = erase()
*/

#include<iostream>
#include<string>
#include<cstring>
#include<map>
using namespace std;

int main() {

    // insert in the maps first argument key and second argument value inserted make pair
    // map<string , int> m;

    // m.insert(make_pair("banana", 40));
    // m.insert(make_pair("gavava", 50));

    // string fruit; cin >> fruit;

    // auto it = m.find(fruit);

    // if (it != m.end()) {
    //     cout << m[fruit] << endl;
    // }
    // else {
    //     cout << "fruit is not presents" << endl;
    // }

    // always sorted by the order keys in hashmaps 
    map<int, pair<int,int>> m; 

    m[1] = {10, 20}; 

    cout << m[1].first; 
    cout << m[1].second; 

    return 0;
}
