#include<iostream>
using namespace std;
int main() {
	int a[100000];
	int n;
	int res=0;
	int no;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> no;
		a[i] = no; 
		res = res^ no; // find we have a^b
	}
    // find the pos of the set in res
	int temp = res; // temp = 4
	int pos=0;
	while((temp&1) != 1) {
		pos++;
		temp = temp >> 1;// right shifted by one each time
	}

	int mask = 1 << pos; // 0100 create this mask
	//find the a value 
	int x=0; 
	for(int i=0; i<n; i++) {
		// I have to make a list of elements which have the same as the mask set digits
		if((mask & a[i]) > 0) {
		x = x ^a[i];
	}
	}
    // and finally b value
	int y = res ^ x;
	cout << min(x,y) << " " << max(x,y) << endl;
	return 0;
}