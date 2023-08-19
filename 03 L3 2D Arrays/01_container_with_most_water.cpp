#include<bits/stdc++.h> 
using namespace std;


int containerWithMostWater(int arr[], int start, int end) { 
    int area = 0, curr_area = 0;
    while (start < end) {
        curr_area = min(arr[start], arr[end]) * (end- start); 
        area = max(curr_area, area);
        if (arr[start] < arr[end]) {
            start++; 
        } else {
            end--; 
        }
    }
    return area; 
}


/*
    Delete the Nth Node From the End
    1. Find the Length 
    2. NodeFrom The Beginning (1 < BeginningNode)
    3. Iterate from the Node the Beginning Prev and Temp will be Pointing to the actual Node. 
    4. If Prev is NULL then Return the head->next
    5. Prev->next = Prev->next->next, then head pointers

*/

int main() {

    int arr[] = {6, 4, 2, 5, 4, 6, 1, 3, 5}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    cout << size << endl; 
    int ans =  containerWithMostWater(arr, 0, size-1); 
    cout << ans << endl; 
    return 0; 
}

