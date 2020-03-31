#include <iostream>
using namespace std;

void bitonicSubarrayLength(int a[], int n) {
	int max=0;
	int min=0;

	//int maxDes=0;
	for (int i = 0; i < n; ++i)
	{	
		
		for(int j=0; j<n; j++ )
		{
			
			int  maxInc=1;
			int  maxDes=1;
         	
			for(int k=i; k<=j; k++) 
			{
				cout << a[k] << ",";
				if(a[k] < a[k+1])
				{
            		maxInc += 1;
				}
				if(a[k] > a[k+1]) {
					maxDes += 1;
				}		
			}
			cout << " --> " << maxDes;
			cout << endl ;
			//cout << maxDes << endl;
			if(max < maxInc) 
			{
				max = maxInc;
			}
			if(min < maxDes) {
				min = maxDes;
			}
			
		}
	}
	cout << max << " "  <<min;
	//cout << maxInc << " " << maxDes << endl;
}

int main(int argc, char const *argv[])
{
	int arr[]  = {12, 4,78,90, 45,23};
	int n=6;
	bitonicSubarrayLength(arr,n);

	return 0;
}