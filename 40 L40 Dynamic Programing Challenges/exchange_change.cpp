// Coin Change problem variations 
/*
Tughlaq introduces a strange monetary system. He introduces copper coins and each coin has a number written on it. A coin n can be exchanged in a bank into three coins: n/2, n/3 and n/4. A coin can also be sold for gold. One can get as much grams of gold as the number written on the coin. You have one copper coin. What is the maximum weight of gold one can get from it?

Input Format
The input file contains a single integer n, the number on the coin.

Constraints
0 <= n <= 1 000 000 000

Output Format
Print the maximum weight of gold you can get.

Sample Input
12
Sample Output
13



*/



 #include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<long long int,long long int> dp;

long long int solve(long long int n)
{

	if(n==1 || n==0)  return n;

	if(dp[n]!=0)  return dp[n];

	long long int a=0;
	long long int b=0;
	long long int c=0;
	a=(solve(n/2));
	b=solve(n/4);
	c=solve(n/3);

	return dp[n]=max(a+b+c,n);

}
int main() {
  long long int n;
  cin>>n;
  cout<<solve(n);
 
	return 0;
}