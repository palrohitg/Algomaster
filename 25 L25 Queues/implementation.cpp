/*

    1. push 
    2. pop 
    3. empty 
    4. full 
    5. front 
    -- Each operation take place using O(1) and make the elements to points to next elements 
    1. full when the currentElement is points to maxElements 
    2. currentElements == 0 the Queus is empty 
    3. while inserting the elementing check for the full overflow means no more elements is going to insert
    4. while pop operation check for the empty case underflow conditions 

*/


#include<iostream>
using namespace std;


class Queue {

    int *arr;
    int f;
    int r;
    int cs;
    int ms; 

    public: 


        // create the size of the queue depending upon the size of n
        Queue(int size=5) {
            arr = new int[size];
            ms = size;
            f = 0;
            r = ms - 1;
            cs = 0;
        }

        bool full() {
            return cs == ms; // current pointer to points to maxsize then the queue is full 
        }

        bool empty() {
            return cs == 0;
        }

        void push(int data) {
            if(!full()) {
                r = (r+1)%ms;
                arr[r] = data;
                cs++;
            }
        }

        void pop() {
            if((!empty())) {
                f = (f+1)%ms;
                cs--;
            }
        }

        // Gives the front elment of the queues 
        int front() {
                return arr[f];
        }

};


int main() {

    Queue first(5);
    first.push(2);
    first.push(4);
    first.push(6);
    first.push(8);
    first.push(10);

    while(!first.empty()) {
        cout << first.front() << " ";
        first.pop();
    }



    return 0;
}