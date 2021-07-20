#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

/*
int* hash_array(int A[], int n)
{
	int* hash = new int[MAX]; //MAX is the maximum possible value of A[i]
	for (int i = 0; i <= MAX; i++) hash[i] = -1; //initialize hash to -1.
	int count = 0;
	for (int i = 0; i < n; i++) // Loop through elements of array
	{
		if (hash[A[i]] == -1) // A[i] was not assigned any hash before
		{
			hash[A[i]] = count; // Assigning hash to A[i]
			count++;
			continue;
		}
		for (int j = 0; j < i; j++)
		{
			if (hash[A[j]] > hash[A[i]]) // All the hashes greater than previouxxxxs hash of A[i] are decremented.
				hash[A[j]]--;
		}
		hash[A[i]] = count - 1; // Assigning a new hash to A[i]
	}
	return hash;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[100000];

	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int *hash = hash_array(arr, n);

	for (int i = 0; i < n; i++) {
		cout << hash[i] << " ";
	}


	return 0;
}*/


/***********************************************************************************************************************************************
EXPLAINATION

We know everytime a number repeats, it is given a new hash value, which is equal to the number of distinct numbers occurred till now. So we can
just store the last occurrences of all the numbers and assign the values incrementally, in increasing order of the positions of their last
occurrences.
**************************************************************************************************************************************************/


#include <bits/stdc++.h>
#define ff first
#define se second
#define pb push_back
#define nn 100100
#define ll long long int

using namespace std;
​
map<int, int>last; //stores the last position of every integer that occurred in the array.
int a[nn];
​
bool compare(int a, int b) //sorting by last position
{
	return last[a] < last[b];
}
​
int main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (last.find(a[i]) == last.end())
			v.pb(a[i]);
		last[a[i]] = i;
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}