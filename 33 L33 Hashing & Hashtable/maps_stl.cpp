// stl container maps 
/*
    maps only store the data in key,values pairs 

    1. insert() , insert the key,value 
    2. find(),  query(K)
    3. erase(), delete(k) 

    Maps: self balancing tree will make 

*/
#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main() {

    map<string, int> m;
    
    //1. insert 
    m.insert(make_pair("mongo", 123));

    pair<string, int> p;
    p.first = "noddles";
    p.second = 20;

    m.insert(p);

    m["banana"] = 23;

    // 2, search 
    string fruit; cin >> fruit;
    auto it = m.find(fruit);
    if(it != m.end()) {
        cout << "fruit is present " << fruit << " " << m[fruit] << endl;
    }
    else { 
        cout << "fruit is not present in maps " << endl;
    }


    // another ways to find a particular maps 
    // it store the unique only onces in the maps either will be lowercase or uppercase 
    // another  ways to find out the key elements 
    if(m.count(fruit)) { // present in the maps return it 
        cout << m[fruit] << endl;
    }
    else {
        cout << "not present in the maps" << endl;
    }

    m.erase(fruit); // delete the key and values 

    // iterate over the maps objects and for each loops are also works 
    for(auto it= m.begin(); it != m.end(); it++) {
        cout << it->first; 
    }










    return 0;
}