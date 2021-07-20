#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s) {

	// hasmap count
	unordered_map<char, int> m;

	for (auto ch : s) {
		m[ch]++;
	}


	// create the max priority queue
	priority_queue<pair<int, char>> pq;

	for (auto it = m.begin(); it != m.end(); it++) {
		pq.push(make_pair(it->first, it->second));
	}

	// answer strings
	string ans ;
	while (!pq.empty()) {

		auto it = pq.top();
		cout << it->first << " " << it->second << endl;
		ans.push_back(it.second);

		pq.pop();
	}

	return ans;
}
int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	string s = "tree";
	string ans = frequencySort(s);
	cout << ans;

	return 0;
}


string frequencySort(string s) {
	unordered_map<char, int> freq;          //for frequency of characters
	priority_queue<pair<int, char>> maxheap; //maxheap according to frequency of characters
	for (char c : s)
		freq[c]++;
	for (auto it : freq)
		maxheap.push({it.second, it.first}); //heap will be constructed on the basis of frequency
	s = "";
	while (!maxheap.empty()) {
		s += string(maxheap.top().first, maxheap.top().second); //frequency times the character
		maxheap.pop();
	}
	return s;
}