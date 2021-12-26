
    // key - value is associated store key-value mapping 
    - Self Balancing BST to maintain the ordering 
    - Ordering happends internals 
    - Self balacing BST 

    unordered_map mapping the key are not ordered. 




    Opeartion :
    1. insert each query in 0(1) insert(k,v)
    2. erase() delete this methods        
    3. find

    // value determine the associated contents and key uniquely identify the contents
    // boths the key can be predefined or user-defined
    // Internally hashtable so the performance will depends upon the hash functions
    // Internally it make the pair, so access m.first(key) and m.seconds(values)

*/


#include<iostream>
#include<unordered_map>
#include<map>
#include<string> 
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    map <string, int> m;

    // 1. insert 
    m.insert(make_pair("Mango", 100)); 


    //2. insert 
    pair<string, int> p; 
    p.first = "Apple";
    p.second = 120; 

    m.insert(p); 

    // 3. insert 
    m["bannana"] = 50; 


    // search 
    string key; cin >> key; 
    
    auto it = m.find(key); 

    if(it != m.end()) {
        cout << "Price of " << key << "is" << m[key] << endl; 
    }
    else {
        cout << "fruit is not present in the maps"; 
    }


    // m.erase(key); 


    // another way to find a particular maps 
    // it stores unique keys only onces

    if(m.count(key)) {
        cout << "Price" << m[key]; 
    }
    else {
        cout << "Price is not price"; 
    }

    // // insert the key value like food item and price
    // m.insert(make_pair("maggi", 20));

    // m["noddles"] = 23;

    // Iterate over the items 1. foreach and iterator
    // here we are using the pair so that .first, .second will works here
    for(auto x : m) {
        cout << "key : " << x.first << " " << "value :" <<  x.second << endl;
    }

    // // Iterate using the iterators
    for(auto it = m.begin(); it != m.end(); it++) {
        cout << it->first  << " " << it->second << endl;
    }




    return 0;
}





/*
    - Unordered mpas "Hashtables ke implementations"
    - Separating chaining techniques to store the values in the arrays
    - load vertex unordered_maps
    - TC : O(1), insert, erase, find() on average. 
*/

// How to findout the occurrence of each elements in the arrays using the hash-table approaches
#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    unordered_map<int, int> map;
    vector<int> v;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int data; cin >> data;
        v.push_back(data);
    }


    for (auto num : v) {
        map[num]++;
    }

    for (auto p : map) {
        cout << p.first << " " << p.second << endl;
    }


    return 0;
}