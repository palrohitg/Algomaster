#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s, int k) {
	if (!k or s.empty())
	{
		return s;
	}
	stack<int> stack;
	int counter{1};
	bool test{true};

	while (!stack.empty() or test)
	{
		test = false;
		while (!stack.empty())
		{
			int start = stack.top();
			stack.pop();
			s.erase(start, k);
		}
		counter = 1;
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] == s[i - 1])
			{
				if (!stack.empty() and  s[stack.top()] != s[i] or stack.empty())
				{
					counter++;
				}
			}
			else
			{
				counter = 1;
			}
			if (counter == k)
			{
				stack.push(i - k + 1);
				counter = 1;
			}
		}
	}
	return s;
}



int main() {


	string str; cin >> str;
	int n; cin >> n;

	string stringAns = removeDuplicates(str, n);
	cout << stringAns;



	return 0;
}