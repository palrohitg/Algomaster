    /*
      Form biggest Integer
    */

    #include<iostream>
	#include<cstring>
	#include<vector>
	#include<algorithm>
    using namespace std;

    bool cmp(int a, int b){
        string s  = to_string(a);
        string t = to_string(b);
        return s+t > t+s;
    }

    int main(){
        
		int t;
		int arr[1000];
		cin >> t;
		int c=0;
		int n;
		while(c<t) {
			cin >> n;
			for(int i=0; i<n; i++) {
				cin >> arr[i];
			}
			c++;

            /*cout << "sdfdf";
			sort(arr, arr+n, cmp);
       		string str;
        	for(int s : arr)
       		str+=to_string(s);
			cout << str;
		}*/
        
    }