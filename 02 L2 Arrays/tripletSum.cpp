// #include <iostream>
// #include <algorithm>
// using namespace std;

// void tripletSum(int a[], int n, int target) {

// 	for(int i=0; i<n; i++) {
// 		for(int j=i+1; j<n; j++) {
// 			for(int k=j+1; k<n; k++) {
// 				// Sum is equal == target
// 				if(a[i] + a[j] + a[k] == target) {
// 					cout << a[i] << "," << a[j] <<"and "<< a[k] <<endl;
// 					// int temp[] = {a[i],a[j],a[k]};
// 					// sort(temp, temp+3);
// 					// for(int g=0; g<3; g++){
// 					// 	cout << temp[g] << ","; 
// 					// }
// 					// cout << endl;
// 					break;
// 				}
// 			}
// 		}
// 	}
// }

// int main(int argc, char const *argv[])
// {
// 	int N,target;
// 	int a[1000];
// 	cin >> N;
// 	for(int i=0; i<N; i++){
// 		cin >> a[i];
// 	}
// 	sort(a,a+N);
//     cin >> target;
//     tripletSum(a,N,target);
// 	return 0;
// }