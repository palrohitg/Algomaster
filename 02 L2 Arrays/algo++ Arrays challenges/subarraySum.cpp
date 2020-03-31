#include <iostream>
using namespace std;
// maxsum of which subarrays
void generateSubarray(int a[], int n) {
	int maxSum =0;
	int curSum=0;
	int left,right;
	for (int i = 0; i < n; i++) 
	{
		for (int j = i; j < n; j++)
		{    
			curSum = 0;
			for (int k = i; k <=j ; k++)
			{
				curSum = curSum + a[k];
			}
			if(maxSum < curSum) {
				maxSum = curSum;
				left = i;
				right = j;
			}
		}
	}
    
    for (int i=left; i <= right ; i++)
    {
    	cout << a[i] << ",";
    }
	cout << maxSum;

}


int main() {
	int a[] = {1,2,3,4};
	int n = sizeof(a)/sizeof(int);
	generateSubarray(a,n);
	return 0;
}