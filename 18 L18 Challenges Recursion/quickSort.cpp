// Two version first simply quick Sort and other one is randomized quick Sort

/*

  1. To Generate the random number we used the rand()
  funcions in c++
  2. find one random index and shuffle the arrays using the current element with random elements

  Approaches :
  1. Make two region and put the elments in the different region if we got some elments
  2. expand the smaller region and inserted the element in the other smaller regions
*/


#include<iostream>
#include<time.h>
using namespace std;



void shuffle(int *a, int s, int e) {
	srand(time(NULL));
	int i, j;
	for (i = e; i > 0; i--) {
		j = rand() % (i + 1); // Generate the random index in the remaining arrays
		swap(a[i], a[j]);
	}
}


int partition(int *a, int s, int e) {
	int i = s - 1;
	for (int j = s; j <= e - 1; j++)
	{
		if (a[j] <= a[e]) {
			i++;
			swap(a[i], a[j]);
		}
	}
	// final swap the pivot element with the next element of smaller regions
	swap(a[i + 1], a[e]);
	return i + 1;
}


void quickSort(int *a, int s, int e) {
	if (s >= e) { // only one elements
		return;
	}
	// recursive case
	int p = partition(a, s, e);
	quickSort(a, s, p - 1);
	quickSort(a, p + 1, e);
}



int main() {
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(arr) / sizeof(int);
	shuffle(arr, 0, size - 1);
	quickSort(arr, 0, size - 1);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}