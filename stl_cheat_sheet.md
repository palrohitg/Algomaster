# Unordered Map

# Vectors

* Similar to list in python but must have the same datatypes
```cpp
// how to work with 2-d vector in cpp
vector<vector<int>> 2d;

// Declaration with initilizations
std::vector<std::vector<int>> fog(M, std::vector<int>(N, default_value));
vector<vector<int>> fog(N, vector<int>(M, default_value));

// how to make the 2d unvisited grid





#include<vector>
1. .push_back() // append the element in vector
2. .size() // return the size or length
3. v[i] // access the elements less versatile like list
4. vector<vector<int>> v; // nested vector

for (int i = 0; i < m; i++) {
	vector<int> v1;
	for (int j = 0; j < n; j++) {
		v1.push_back(element);
	}
	v.push_back(v1);
}

```


# Unordered Set

* unordered_set is a container that stores unique values in no particular order.
* It allows fast lookup of elements based on values
* Hashtable internally, value and keys is same
* insertion, search, deletion O(1) on average case.
```cpp
#include<map>
{
	unordered_set<string> stringSet;

	// inserting various strings, same string will be stored
	// once in a set

	stringSet.insert("code");
	stringSet.insert("c++");
	stringSet.insert("c++1");
	stringSet.insert("c++2");
	stringSet.insert("c++23");

	key = "c++";

	// find return the iterator of any value
	// iterator points to end then not found
	if (stringSet.find(key) == stringSet.end()) {
		cout << "not found" << endl;
	}
	else {
		// elements is present in strings
		cout << "found" << endl;
	}

	// cout << "\nAll elements : ";
	unordered_set<string> :: iterator itr;
	for (itr = stringSet.begin(); itr != stringSet.end(); itr++)
		cout << (*itr) << endl; // itr is return the address using * pointer to access the elements
}

// Useful function
1. insert()
2. begin()
3. end()
4. find()
5. count() // count the occurrence of particular elements in the set
6. clear() // remove all the elements
7. erase() // remove an single elements of a range of elements ranging from start to end
8. size()
9. load_factor() // return the load factor of the set


```


# Dictionary

* dictionary in cpp called map. Basically the key - value pair
* Internally hashatable are used.

```cpp
#include<map>
{
	map<string, string> m;
	map<string, int> meal; // associated prices to a meal ex : burger -> 50
	m["cook"] = 40;

	// always store in pair to access .first || .second
	for (auto item : m) {
		cout << item.first << " " << item.second;
	}

	// no function are used you can just use the lookup [] to insert and search the pair.
}
```