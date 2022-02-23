/*
    1. four varition then findout where is used
    a. NGL
    b. NSL


*/



#include<iostream>
#include<stack>
#include<vector>
using namespace std;
stack<int> s;
vector<int> v[10];



// void stockSpan(int price[], int n) {

//     // Insert the first price and the span of the days
//     s.push(0);
//     v.push_back(1);

//     for(int i=1; i<=n-1; i++) {
//         int curPrice = price[i];

//         while(!s.empty() and price[s.top()] <= curPrice) {
//             s.pop();
//         }

//         if(!s.empty()){
//          int prev_highest=s.top();
//          v.push_back(i-prev_highest);
//      }
//      else {
//          v.push_back(i+1);
//      }
//      s.push(i);

//     }

//     for(int i=0; i<n; i++) {
//         cout << v[i] << " ";
//         cout << endl;
//     }
//     cout << "END";
// }


int main() {

    // int n; cin >> n;
    // int *price = new int[n];
    // for(int i=0; i<n; i++) {
    //     cin >> price[i];
    // }
    // stockSpan(price, n);

    // delete[] price;
    v[5] = 10;
    cout << v[5];
    return 0;
}