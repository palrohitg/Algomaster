// #include<iostream>
// #include<cstring>
// using namespace std; 


// // Iterative methods 
// void duplicateStringIterative(char*str, int n) {
// 	for(int i=0; i<n; i++) {
// 		if(str[i] == str[i+1]) {
// 			for(int j=i; j<=n; j++) {
// 				str[j] = str[j+1];
// 			}
// 		}
// 	}
// 	cout << str;
// }

// // Recursively for the same function
// char* duplicateString(char*str, int i, int n) {
//    // base case 
// 	if(i==n) {
// 		return 0;
// 	}
// 	// check out condition of duplicate
// 	if(str[i] == str[i+1]) {
// 		for(int j=i; j<=n; j++) {
// 			str[j] = str[j+1];
// 		}
// 	}
// 	// increment the index and call recursively
// 	duplicateString(str,i+1,n);
// 	return str;
// }
// int main() {
// 	char str[] = "abcd";
// 	int n = strlen(str);
// 	cout << duplicateString(str,0,n);
// 	return 0;
// }

// Approach its find the last occurence for the same element



#include<iostream>
#include<cstring>
using namespace std;
// Recursively for the same function
void duplicateString(char*str, int i, int j, int n) {
   // base case 
	if(i==n) {
		return;
	}
    // print currrent character in the str
    cout << str[i];
	// check out condition of duplicate 
    // increment uptil all consequent character are duplicate or end is encountered
	while(i+1 < n and str[i] == str[i+1]) {
        
		i++;
	}
	// increment the index and call recursively
	duplicateString(str,i+1, j , n);
}
int main() {
	char str[1001];
	cin >> str;
	int n = strlen(str);
    duplicateString(str,0, 0 ,n);
	return 0;
}