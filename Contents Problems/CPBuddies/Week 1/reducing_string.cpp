/*
    aaabccddd
    output : abd

    print Empty string is null  
*/
#include<iostream>
#include<cstring>
using namespace std;


void reducesString(string str) {

    char out[100] = "\0";

    int i = 0;
    int j = 0;
    
    // Build the new arrays
    while(str[i] != '\0') {
        if(str[i] == str[i + 1]) {
            // skips the pair
            i = i + 2;
        }
        else {
            out[j] = str[i];
            j++;
            i++;
        }
    }

    // Special Case 
    if(out == "\0") {
        cout << "Empty String";
    }
    else {
        cout << out;
    }
    return;
}

int main() {

    string str;
    cin >> str;
    reducesString(str);

    return 0;
}