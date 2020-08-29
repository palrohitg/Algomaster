#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int arr[] = {10,20,30,40};

    cout << binary_search(arr, arr+4, 2);

    return 0;
}