/*
1. lower_bound() Greater or equal  >= 
2. upper_bound() Greater element   > 

Multiset --> that can store multiple element that have same elements 
assocative container - key, value 
BST is used underlying implementations 


functions : 
1. erase()
2. count // m.count(19); gives the count of the particular numbers 
3. find() get the iterator for the element
4. Class and objects are essentially important to understand 
*/ 

// custom comparators 
#include<bits/stdc++.h> 
using namespace std; 

class person_compare {
    public : 
    // overloaded this operators 
    bool operator()(pair<string,int> p1, pair<string, int> p2) {
        return p1.second < p2.second; 
    }
}; 




int main() {


    // sorted by the first paramters money accoridng
    pair<string, int> p1 = make_pair("A", 20);
    pair<string, int> p2 = make_pair("D", 100);
    pair<string, int> p3 = make_pair("B", 10);
    pair<string, int> p4 = make_pair("C", 30);

    multiset<pair<string, int>, person_compare> m; 
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    m.insert(p4); 

    for(auto p: m) {
        cout << p.first << "--" << p.second << endl; 
    }
    



    return 0; 
}