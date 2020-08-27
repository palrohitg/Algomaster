/*
    Opeartion : 
    1. insert each query in 0(1) 
    2. erase 
    3. find 

    // value determine the associated contents and key uniquely identify the contents 
    // boths the key can be predefined or user-defined 
    // Internally hashtable so the performance will depends upon the hash functions 
    // Internally it make the pair, so access m.first(key) and m.seconds(values)

*/


#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    unordered_map<string, int> m; 

    // insert the key value like food item and price 
    m.insert(make_pair("maggi", 20));

    m["noddles"] = 23;

    // Iterate over the items 1. foreach and iterator 
    for(auto x : m) {
        cout << "key : " << x.first << " " << "value :" <<  x.second << endl;
    }

    // Iterate using the iterators 
    for(auto it = m.begin(); it != m.end(); it++) {
        cout << it->first  << " " << it->second << endl;
    }

    return 0;
}