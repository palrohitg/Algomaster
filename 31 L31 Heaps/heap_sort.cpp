// MaxHeaps using the class and objects, vectors  
// time compelxity  
#include<iostream>
#include<vector>
using namespace std;


class heap{

    private: 
        
        vector<int> v;  
        bool maxHeap;
        bool compare(int a, int b) {
            if(maxHeap) {
                return a > b;
            }
            return a < b;
        }

    public: 

        heap(bool type=true) {
            v.push_back(-1);
            maxHeap = type;
        }

        void push(int data) {
            v.push_back(data);
            int idx = v.size() - 1;
            int parent = idx/2;

            while(idx > 1 and compare(v[idx], v[parent])) {
                swap(v[idx], v[parent]);
                idx = parent;
                parent = parent/2;
            }

        }

        
        void print() {
            for(int i=1; i<v.size(); i++) {
                cout << v[i] << " "; 
                cout << endl;
            }
        }

        // maximum/top elements return of maxHeaps 
        int get() {
            return v[1];
        }

        bool empty() {
            return v.size() == 1;
        }

        void heapify(int idx) {
            
            int max_idx = idx;
            int last = v.size() - 1; 
            int left = 2*idx;
            int right = 2*idx + 1;

            if(left <= last and compare(v[left], v[idx])) {
                max_idx = left;
            }
            if(right <= last and compare(v[right], v[max_idx])) {
                max_idx = right;
            }

            // swap with the actually 
            if(idx != max_idx) {
                // swapping 
                swap(v[idx], v[max_idx]);
                heapify(max_idx);
            }
 
        }

        // remove the maxium of top element/pop operations 
        void pop() {
            int last = v.size()-1;
            swap(v[1], v[last]);
            v.pop_back();
            heapify(1);
        }

        
};

int main() {

    heap h;
    h.push(50);
    h.push(10);
    h.push(20);
    h.push(30);
    h.push(5);
    h.push(1);
    h.pop();
    h.print();
    return 0;
}