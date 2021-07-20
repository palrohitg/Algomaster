// check the subarrays has the zeros sum or not return true and false
/*

    algorithm :
    1. compute the prefix varible and insert that element in the hashtable
    2. if the pre == 0 and repeated element is present in the subarrays means there must me a subarrays whose sum is zero count is used to check
    3. finally return false if all as the unique values in the hashmaps and the arrarys is end;

*/
#include<iostream>
#include<unordered_set>
using namespace std;


bool checkSubArray(int arr[], int n) {

    unordered_set<int> s; // always contains the unique elements
    int pre = 0;
    for (int start = 0; start < n; start++) {

        pre += arr[start];

        // check if the pre is present in the hashmaps return true and else return false
        if (pre == 0 or s.find(pre) != s.end()) { // find return the iterator to the elements
            return true;
        }

        s.insert(pre); // insert in the hashmaps
    }
    return false;
}

int main() {

    int n; cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool ans = checkSubArray(arr, n);

    if (ans) {
        cout << "zero sum is present" << endl;
    }
    else {
        cout << "zero sum is absent" << endl;
    }

    return 0;
}