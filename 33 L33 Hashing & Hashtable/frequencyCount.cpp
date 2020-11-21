#include<bits/stdc++.h>
using namespace std;

/*

	1. hash function take rollno as input and give an index with in range of arrays size
	2. insert the insert at index value in arrays
	3. search --> get the index by hashfunctions and return the strings

*/
string arr[100005];
#define mod 100000;

// hashfunction --> where to insert the element in the hashtable
int hashFunc(int rollno) {
	return rollno % mod;
}



void search(int rollno) {

	int idx = hashFunc(rollno);
	cout << arr[idx] << endl;
}

void insert(int rollno, string name) {

	int idx = hashFunc(rollno);
	arr[idx] = name;
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int rollno; cin >> rollno;
		string name; cin >> name;
		insert(roll, name);
	}

	int query; cin >> query;
	for (int i = 0; i < query; i++) {
		int rollno; cin >> rollno;
		search(rollno);
	}



	return 0;
}