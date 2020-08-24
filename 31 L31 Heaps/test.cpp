#include<iostream>
#include<vector>
using namespace std;


class Heap {

    private : 
        vector<int> test;
       

    public : 
       
        // Constructure to initialize the default values 
        Heap() {
            test.push_back(-1);
        }

        void insert(int data) {
            test.push_back(data);
        }

        void print() {
            for(int i=1; i<test.size(); i++) {
                cout << test[i] << " ";
            }
        }

};

int main() {

    Heap h; 
    h.insert(10);
    h.insert(20);
    h.print();
    return 0;
}