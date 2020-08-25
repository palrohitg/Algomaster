// Brute force is very simple 0


// #include<iostream>
// #include<vector>
// using namespace std;


// class Heap {

//     private : 
//         vector<int> test;
       

//     public : 
       
//         // Constructure to initialize the default values 
//         Heap() {
//             test.push_back(-1);
//         }

//         void insert(int data) {
//             test.push_back(data);
//         }

//         void print() {
//             for(int i=1; i<test.size(); i++) {
//                 cout << test[i] << " ";
//             }
//         }

// };

// int main() {

//     Heap h; 
//     h.insert(10);
//     h.insert(20);
//     h.print();
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

void median(vector<int> store) {
    int n = store.size();
    if(n&1) {
        cout << store[n/2];
    }
}

int main() {
    // vector<int> store;
    // store.push_back(1);
    // store.push_back(2);
    // store.push_back(3);
    // store.push_back(4);
    // store.push_back(5);
    cout << 5/2;

    // median(store);

    return 0;
}