#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
int main()
{
	priority_queue<pi , vector<pi>, greater<pi> >q;
	q.push({1, 5});
	q.push({5, 3});
	q.push({3, 1});
	q.push({5, 2});
	q.push({1, 10});
	cout << q.top().first << " " << q.top().second << endl;
	return 0;
}