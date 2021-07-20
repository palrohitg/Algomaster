// Real life application of unordered_maps let suppose we need to implement a phonebook a person has many no so we can 
// create a vectors and find the person by theirs name and printout the number 
#include<iostream>
#include<unordered_map>
#include<vector>
#include<cstring>
using namespace std;

int main() {

    unordered_map<string, vector<string>> phonebook; 

    phonebook["rahul"].push_back("9991");
    phonebook["rahul"].push_back("9992");
    phonebook["rahul"].push_back("9993");
    phonebook["rahul"].push_back("9994");

    phonebook["ram"].push_back("123");
    phonebook["ram"].push_back("124");
    phonebook["ram"].push_back("125");
    phonebook["ram"].push_back("126");


    // Iterate over the vectors and maps 
    for(auto p : phonebook) {
        cout << "Name is : " << p.first << "-->";

        // printout the vectors of number 
        for(string s : p.second) {
            cout << s << ",";
        }
        cout << endl;

    }

    // check if the no is present or not by key 
    string name; cin >> name;


    if(phonebook.count(name) == 0) {
        cout << "Absent" << endl;
    }
    else {
        for(string s: phonebook[name]) {
            cout << s << ",";
        }
        cout << endl;
    }


    return 0;
}