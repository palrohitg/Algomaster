// how to overload any operator in cpp to extened the functionality 
#include<iostream>
#include<map>
using namespace std; 

int main() {

    map<string, int> m;

    m.insert(make_pair("vikas", 12));

    string input; cin >> input; 

    auto it = m.find(input);

    if(it != m.end()) {
        cout << "present";
    }
    cout << "absent";_



    return 0;
}