/*
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

    // Order maps 
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
    
    auto it = m.find(key);  // Check for the count here 
 
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