/*
 Given some numbers implement the queues.
 Class based implementation
*/
/*
  Sanket bhaiya ki alag approaches hai badiya hai :)
*/




#include<iostream>
using namespace std;

class Queue {

	int *arr;
	int ms;
	int curLen;
	int front;
	int rear;


public :
	
	Queue(int default_length = 7) {
		this->ms = default_length;
		this->curLen = 0;
		this->front = 0;
		this->rear = default_length - 1; // last index positions
		// create the arrays of that size
		this->arr = new int [this->ms] (); // initialize with zero
	}

	// Queue is full
	bool isFull() {
		return this->curLen == this->ms;
	}

	// Queue is empty
	bool isEmpty() {
		return this->curLen == 0;
	}


	void enQueue(int data) {
		if(!isFull()) {
			// Increment the rear part and sert the elements
			this->rear = (this->rear + 1) % this->ms;
			this->arr[this->rear] = data;
			this->curLen += 1;
		}

	}

	void deQueue() {
		// if not empty then return the first elements
		// front increment and the clen is decrements
		if(!isEmpty()) {
			this->front = (this->front + 1) % ms;
			this->curLen -= 1;
		}
	}

	int getFront() {
		return this->arr[this->front]; // value pointed by the front varibles
	}
};

int main() {
	Queue q(5); // Object of the class arrays types
	for (int i = 1; i <= 5; i++) {
		q.enQueue(i);
	}

	q.deQueue();

	while(!(q.isEmpty())) {
		cout << q.getFront() << " ";
		q.deQueue();
	}
	return 0;
}