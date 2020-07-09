/// Find the first occurence of the number if the no is repeated multiple times
/// first condition is that elements of the arrays must be sorted in any order.


/*
#include <iostream>
using namespace std;

int binary_search_lb(int arr[], int n, int key) {
	int s=0, e=n-1;
	int ans=-1;
	while(s<e) {
		// done the calculatation
		int mid = (s+e)/2;

		if(arr[mid] == key) {
			/// Found 
			ans = mid;

			/// find the first occurence so we have done the search in the left part
			e = mid-1;
		}
		else if(key < arr[mid]) {
			// Element present in the left half
			e = mid-1;
		}
		else {
			/// Elements present at the right half
			s = mid+1;
		}
	}
	return ans;
}


int main(int argc, char const *argv[])
{
	int arr[] = {1,2,2,2,2,4,4};
	int n = sizeof(arr)/sizeof(int);
	int key;
	cin >> key;
	int  searchIndex = binary_search_lb(arr, n, key);
	if (searchIndex == -1){
		cout << "Elements not found";
	}
	else {
		cout << key <<"Elements are found at index" << searchIndex;
	}
	return 0;
}*/


/// binary search problems how to findout the number of the occurence in the binary search implementation


/// binary search square root find out the square of a number w.r.t to given precision
/*
  Given : A number with n and a p is precision to calculate the square root at which decimal number

*/

#include <iostream>
using namespace std;

// findind out the square of a perfect number using the binary search
float squareRoot(int no, int p) {
	int s=0, e=no, mid;
	float ans=0;
	while(s<=e) {
		 mid = (s+e)/2;
		if (mid*mid == no)
		{
			ans = mid;
			break;
		}
		// value present at the right subarrays
		else if (mid*mid < no)
		{
			s = mid + 1;
			ans = mid;
		}
		// value lies at right side of subarrays
		else {
			e = mid - 1;
		}
	}

	float increment = 0.1; 

    for (int i = 0; i < p; i++) { 
        while (ans*ans <= no) { 
            ans += increment; 
        }  
        ans = ans - increment; 
        increment = increment/10; // increment for the next decimal 
    }

    return ans; 
}

int main()
{
	 
	cout << squareRoot(10,3);
	
	return 0;
}

/*
 	Some interview question asked related to application of binary search Algorithm
		
	 // Important question of binary search 

  	1. Find an key in the sorted rotated arrays.
 	2. Find the index of the highest Pivot elements in the rotated and the sorted arrays.



*/







































