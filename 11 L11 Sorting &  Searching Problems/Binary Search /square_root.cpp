#include<bits/stdc++.h>
using namespace std;

 
int squareRoot(int target) {

	int i = 0;
	while (i * i <= target) {
		i++;
	}

	return i - 1;
}


int main(int argc, char const *argv[]) {
	int target = 16;
	cout << squareRoot(target);
	return 0;
}


#include<bits/stdc++.h>
#define int long long int
using namespace std;


bool check(int n, int k, int x) {

	// calculate x^k;
	int result=1;
	for(int i=1;i<=k;i++){
		result=result*x;
		if(result>n)return false;
	}
	return true;
}


int root(int n, int k) {

	int ans = INT_MIN;
	int s = 0;
	int e = sqrt(n);

	while (s <= e) {
		int mid = (s + e) / 2;
		if (check(n, k, mid)) {
			s=mid+1;
			ans = max(ans, mid);
		}
		else {
			e = mid - 1;
		}
	}

	return ans;
}


int32_t main() {

	int t; cin >> t;

	while (t--) {
		long long  n, k;
		cin >> n >> k;
		if(k==1)cout<<n<<endl;
		else cout << root(n, k) << endl;
	}

	return 0;
}