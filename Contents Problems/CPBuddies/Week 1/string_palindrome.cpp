// Mistake caluting the index of the strings last index is always n - 1 in both the arrays n strings right


#include<iostream>
#include<string>
using namespace std;

// void palindrome(string str, int n) {
//     int i=0;
//     int j = n;
//     int flag = 0;

//     while(i < j) {
//         if(str[i] != str[j]) {
//             int flag = -1;
//         }
//         else {
//             i++;
//             j--;
//         }
//     }

//     if(flag == 0) {
//         cout << "Yes" << endl;
//     }
//     else {
//         cout << "Not" << endl;
//     }
  
//     return;
// }


bool palindrome(string input, int n) {

    int i = 0;
    int j = n-1;

    while( i<j) {
        if(input[i] == input[j]) {
            i++;
            j--;
        }
        else {
            return false;
        }
    }

    return true;
}

int main()  {
    int t; 
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        int n = str.size();
        if(palindrome(str, n)) {
            cout << "true";
        }
        else {
            cout << "false";
        }
        cout << endl;
    }

    return 0;
}