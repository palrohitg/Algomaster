/*
 1. N -> insert in the database
 2. Q -> Query if database is similar all words return and also if not exits
 3. insert the database


Approach->

1. insertion we will trie data-strutures (insertion, find)


*/



#include<bits/stdc++.h>
using namespace std;

class node {
public :
	unordered_map<char, node *> map;
	char ch;
	bool terminal;

	node(char c) {
		ch = c;
		terminal = false;
	}
};


class Trie {

public :
	node *root;

	// constructures
	Trie() {
		root = new node('\0');
	}


	// insert the strings in the trie
	void insert(string w) {

		node *temp = root;

		// Iterate over each character and insert he value one by one
		for (int i = 0; w[i] != '\0'; i++) {
			char ch = w[i];
			// check if the character is present/absent on the hashtable
			if (temp->map.count(ch)) {
				temp = temp->map[ch];
			}
			else {
				node *n = new node(ch);
				temp->map[ch] = n;
				temp = n;
			}
		}
		// end of the nodes
		temp->terminal = true;
		return;
	}


	// particular string is present or not in the trie
	bool find(string w) {

		node *temp = root;
		for (int i = 0; w[i] != '\0'; i++) {
			char ch = w[i];
			if (temp->map.count(ch) == 0) {
				return false;
			}
			else {
				// increment the temp pointer
				temp = temp->map[ch];
			}
		}

		print(temp, w);

		return temp->terminal;
	}

	// recursive go all the nodes and then print the nodes which are terminals
	void print(node *temp, string word) {

		if (temp->map.empty()) {
			cout << word << endl;
			return;
		}

		// Base Case
		if (temp->terminal) {
			cout << word << endl;
		}

		// iterate over the hashmap
		for (auto it = temp->map.begin(); it != temp->map.end(); it++ ) {
			node *t = temp->map[it->first];
			string w = word + it->first;
			print(t, w);

		}

		return;
	}
};



int main() {

	Trie t;

	int n;
	cin >> n;

	string input[n];

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
		transform(input[i].begin(), input[i].end(), input[i].begin(), ::tolower);
		t.insert(input[i]);
	}

	int q;
	cin >> q;

	string query[q];

	for (int i = 0; i < q; i++)
	{
		cin >> query[i];
		transform(query[i].begin(), query[i].end(), query[i].begin(), ::tolower); //Lowercase
		if (t.find(query[i]) == false)
		{
			t.insert(query[i]);
		}
	}

	return 0;	return 0;
}