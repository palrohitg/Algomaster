#include <bits/stdc++.h>
using namespace std;

vector<long long> rectangularSquare(int n, vector<vector<int>> mat, int q, vector<vector<int>> query)
{
    vector<long long> ans;
    // Write your code here
    for (int i = 0; i < q; i++) {

        int x = query[i][0];
        int y = query[i][1];
        int l = query[i][2];
        int b = query[i][3];
        long long int total = 0;
        for (int i = x - l; i <= x + l; i++) {
            for (int j = y - b; j <= y + b; j++) {
                total += mat[i][j];
            }
            ans.push_back(total);
        }

        return ans;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> mat(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int val;
            cin >> val;

            mat[i].push_back(val);
        }
    }

    int q;
    cin >> q;

    vector<vector<int>> query;

    for (int i = 0; i < q; i++)
    {
        int x, y, l, b;
        cin >> x >> y >> l >> b;

        query.push_back({x, y, l, b});
    }

    vector<long long> ans = rectangularSquare(n, mat, q, query);

    for (auto i : ans)
    {
        cout << i << endl;
    }
}