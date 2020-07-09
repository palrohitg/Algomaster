// implementing the Quick Sort algorithm 
#include <iostream>
using namespace std;

// Parition the arrays and then sort them 
int paritionIndex(int a[], int s, int e) {
	int i = s-1;
	
	int pivot = e;
	for(int j = s;j<e; j++){
		if(a[j] < a[pivot]) {
			i++;
			swap(a[i],a[j]);
		}
	}
	swap( a[i+1], a[e]);

	return (i+1);
}

// Recursively solve the problem 

void quickSort(int a[], int s, int e) {
	if(s>=e) {
		return;
	}

	int p = paritionIndex(a,s,e);
	quickSort(a,s,p-1);
	quickSort(a,p+1,e);
} 

int main(int argc, char const *argv[])
{
	int a[] = {2, 7, 8, 6, 1, 5, 4,6,7,1,1,1,1,1,1,1,1,1,1,1};
	int n = sizeof(a)/sizeof(int);
	//cout << n;
	quickSort(a,0,n-1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
	return 0;
}