#include<iostream>
using namespace std;

int setBit(int a, int b) {
  int set = 0;
  for(int i=a; i<=b; i++) {
  	//cout << i << " ";
  	int no = i;
  	while(no>0) {
  		no = no & (no-1);
  		set++;
  	}
  }
  return set;
}
int main () {
  int t;
  cin >> t;
  while(t--) {
  	int a, b;
  	cin >> a >> b;
	cout << setBit(a,b) << endl;
	}
  return 0;
}