/*

    input s = "tree"
    output eert

    sort the character by frequency



	hash map

    t -> 1
    r  -> 1
    e -> 2
	value, priority // max heaps


*/

class Solution {
public  :

	string frequencySort(string s) {

		// hasmap count
		unordered_map<char, int> m;

		for (auto ch : s) {
			m[ch]++;
		}


		// create the max priority queue
		priority_queue<pair<int, ch>> pq;

		for (auto it = m.begin(); it != m.end(); it++) {
			pq.push(make_pair(it->first, it->second));
		}

		// answer strings
		string s ;
		while (!pq.empty) {

			auto it = pq.top();
			s.push_back(it->second);

			pq.pop();
		}

		return s;
	}


};