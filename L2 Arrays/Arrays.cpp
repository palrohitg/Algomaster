// Geneate the subarrays in the given array :


#include <iostream>

using namespace std;

int main() {

	int a[100];
	int n,curSubSum=0;
	cin >>n;
	for(int i=0; i<n; i++) {
		cin >>a[i];
	}

	for(int i=0; i<n; i++) {
		for (int j = i; j < n; j++)
		4
				    curSubSum = 0;
			for (int k = 0; k<=j; k++)
			{	
			
				curSubSum = curSubSum + a[k];
				
			}
			cout <<curSubSum <<endl;
		}
	}
	return 0;
}