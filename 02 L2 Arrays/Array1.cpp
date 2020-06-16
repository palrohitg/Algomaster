#include <iostream>
using namespace std;
// Pass the 2-D array then to the various one

void printArray(int *arr, int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << *(arr+j *m+i) << endl;
		}
	}
}
int main()
{
	int m=3,n=3;
    int arr[m][n] = {
    				{1,2,3},
    				{3,4,3},
    				{3,4,3}
    			};
    
    printArray((int *)arr,m,n);
     

	return 0;
}