

// Introduction to heap data-structures
/*

    Heap is CBT that comes with a heap order property 

    What is CBT: 
        a. Complete Binary Tree 1



    1. Heaps as Arrays  Done
    2. Insertion Done
    3. Insertion Code Done
    4. Remove Min/Max Element Done
    5. Build the heaps from arrays in NlogN
    6. Build the heaps arrays in O(N)
    7, Inplace HeapSorts Done
    8. Priorty Queues
    9. functional objects in c++
    10. Priority Queue for custom class
    11. join the rapes
    12. running median of a integer stream
    13. merge k sorted arrays
    14. kthe smallest element in row and col wise
    15. hostel visits


    // Pop operations :
    1. Swapping first and the elments
    2. Shrink/remove the last nodes
    3. heapify operations


    # Problem based on the heaps data structures

*/

// remove operation pop the min or topmost element delete
// complexity of the various methods : 1.


#include<iostream>
#include<vector>
using namespace std;


class Heap {

private:

    vector<int> v;
    bool minHeap; // type of heap minHeap and maxHeap

    bool compare(int a, int b) {
        if (minHeap) {
            return a < b;
        }
        return b > a;
    }

    // Recursive functions to make the heaps
    void heapify(int idx) {

        int left = 2 * idx;
        int right = 2 * idx + 1;


        int min_idx = idx;
        int last  = v.size() - 1; // last index

        // compare the value of the left and right index and do the swapping accordingly
        if (left <= last and compare(v[left], v[idx])) {
            min_idx = left;
        }
        if (right <= last and compare(v[right], v[min_idx])) {
            right = min_idx;
        }

        if (min_idx != idx) {
            swap(v[idx], v[min_idx]);
            heapify(min_idx);
        }
    }

public :

    Heap(bool value = true) {
        v.push_back(-1);
        minHeap = value; // bool value depends upon the type we can get the
    }

    void push(int data) {
        v.push_back(data); 

        int idx = v.size() - 1;
        int parent = idx / 2;

        while ((idx > 1) and compare(v[idx], v[parent])) {
            swap(v[idx], v[parent]);
            idx = parent;
            parent = parent / 2;
        }
    }

    // remove the smallest element in the heaps
    void pop() {
        // index of the first top elements
        int idx = v[1];
        int last = v.size() - 1;

        // swap the first and last elements
        swap(v[idx], v[last]);

        // remove the last elements
        v.pop_back();

        // heapify the elements from top to bottom
        heapify(idx);

    }

    bool empty() {
        return v.size() == 0;
    }

    int get() {
        return v[1];
    }

    void print() {

        for (int i = 1; i < v.size(); i++) {
            cout << v[i] << " ";
        }

    }


};



int main() {

    Heap h;
    h.push(25);
    h.push(10 );
    h.push(5);
    h.push(11);
    h.push(13);
    cout << "heaps looks like that : " << endl;
    h.print();
    cout << endl;

    // pop out the elements
    h.pop();
    h.pop();
    cout << endl;
    h.print();

    // cout << endl;
    // cout << h.get();
    // cout << endl;
    return 0;
}