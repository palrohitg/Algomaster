/*
    Create the two arrays 
    1. value arrays 
    2. weight arrays 
    3. Exclude the -1 case 
    4. if MaxValue then return -1 not possible to fill the knapsack bags 
*/


#include<bits/stdc++.h>
using namespace std;

int minPrice(int price[], int n, int w)
{
	vector<int> val;
	vector<int> wt;

	for(int i = 0; i < w; i++)
	{
		if(price[i] != -1)
		{
			val.push_back(price[i]);
			wt.push_back(i+1);
		}
	}
    n=val.size();
	int dp[n+1][w+1];

	for(int i = 0; i <= n; i++)
	{
		dp[i][0] = 0;
	}

	for(int i = 0; i <= w; i++)
	{
		dp[0][i] = INT_MAX;
	}

	for(int i = 1; i <=n ; i++)
	{
		for(int j = 1; j <= w; j++)
		{
			if(j < wt[i-1])
			{
				dp[i][j] = dp[i-1][j];
			}

			else dp[i][j] = min(dp[i-1][j], val[i-1] + dp[i][j-wt[i-1]]);
		}
	}

	if(dp[n][w] == INT_MAX)
      return -1;
    else 
     return dp[n][w];
}

int main() 
{
	int n, w;
	cin >> n >> w;

	int price[w];

	for(int i = 0; i < w; i++)
	{
		cin >> price[i];
	}

	cout << minPrice(price, n, w) << endl;
	return 0;
}