/*
 Ask as many doubt you can ask on discussion you have paid the money for it we need to do better in that case 
 
 # Problem binary search with comparator

*/

#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a<=b;
}

int main() {

	// money change problems  Indian Currency
    int a[] = {1,2,5,10,20,50,100,200,500,200};
    int n = sizeof(a)/sizeof(int);
    int money=168;
    while (money>0) {
    auto lb = lower_bound(a,a+n,money,compare) - a -1;
    int m = a[lb];
    cout << m << ",";
    money = money -m;

    }
    //cout << lb << " Value " <<a[lb];
     
	return 0;
}