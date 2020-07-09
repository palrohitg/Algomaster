// Implementing merge sort using the recursion approach

// Implementation of QuickSort using the recursion approach
#include <iostream>
using namespace std;
void merge(int a[], int s, int e) {
 	// It will aspects the two arrays then merge it 
    int mid = (s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;

    int temp[100];
    while(i<=mid && j<=e){

    if(a[i] < a[j]) {
    	temp[k++] = a[i++];
    }

    else{
    	temp[k++] = a[j++];	
    }

   }

   // when some elements are left then we should directly copy all the elements
   while(i<=mid) {
   	temp[k++] = a[i++];
   }

   while(j<=e) {
   	temp[k++] = a[j++];
   }
   //copy backed to the original arrays
   for (i= s; i <e ; ++i)
   {
   	   a[i] = temp[i];
   }
}

// MergeSort
void mergeSort(int a[], int s, int e){
	if(s>=e){ // suppose one elements
		return;
	}
	int mid = (s+e)/2;
	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);

	//merge parting means sorting part
	merge(a,s,e);
}


int main(int argc, char const *argv[])
{
	int a[10] = {2,3,0,1,9};
	int n = sizeof(a)/sizeof(int);
	mergeSort(a,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ",";
	}
	return 0;
}