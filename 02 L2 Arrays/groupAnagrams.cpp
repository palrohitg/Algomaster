/*

	Input: strs = ["eat","tea","tan","ate","nat","bat"]
    Output: [["bat"],["nat","tan"],["ate","eat","tea"]]


    Approach :
    1. Sort the current strings and add to the given list if same.
    2. Shift the values of one to vector<vector<strings>>

	 TC : Nklogk
	 SC : NK // store in hashmap + output vectors

*/




class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		unordered_map<string, vector<string>> mp;

		//iterate over the strings and insert
		// the values in respectively lists
		for (auto s : strs) {
			string t = s;
			// sort the strings
			sort(t.begin(), t.end());
			// push into the hashmaps
			mp[t].push_back(s);
		}

		// shigt into anagrams vector list
		vector<vector<string>> anagrams;
		for (auto p : mp) {
			anagrams.push_back(p.second);
		}

		return anagrams;
	}
};


// check two anagrams are valid or not
// if the sort strings is same matches with other than its valid
class Solution {
public:
	bool isAnagram(string s, string t) {

		string str1 = sort(s.begin(), s.end());
		string str2 = sort(t.begin(), t.end());

		if (str1 == str2) {
			return true;
		}

		return false;
	}
};