    #include<iostream>
	#include<algorithm>
    using namespace std;

    bool cmp(int a, int b){
        string s  = to_string(a);
        string t = to_string(b);
        return s+t > t+s;
    }

    int main(){
        // vector<string> vec={"zab", "zatc","bat", "batman", "tab"};
		int t;
		int arr[1000];
		cin >> t;
		int c=0;
		int n;
		while(c<2) {
			cin >> n;
			for(int i=0; i<n; i++) {
				cin >> arr[i];
			}
            cout << "sdfdf";
			sort(arr, arr+n, cmp);
       		string str;
        	for(int s : arr)
       		str+=to_string(s);
			cout << str;
		}
        
    }